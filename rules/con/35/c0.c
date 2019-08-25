#include <stdlib.h>
#include <threads.h>
  
typedef struct {
  int balance;
  mtx_t balance_mutex;
  
  /* Should not change after initialization */
  unsigned int id;
} bank_account;
 
typedef struct {
  bank_account *from;
  bank_account *to;
  int amount;
} transaction;
 
unsigned int global_id = 1;
 
void create_bank_account(bank_account **ba,
                         int initial_amount) {
  bank_account *nba = (bank_account *)malloc(
    sizeof(bank_account)
  );
  if (nba == NULL) {
    /* Handle error */
  }
 
  nba->balance = initial_amount;
  if (thrd_success
      != mtx_init(&nba->balance_mutex, mtx_plain)) {
    /* Handle error */
  }
 
  nba->id = global_id++;
  *ba = nba;
}
 
int deposit(void *ptr) {
  transaction *args = (transaction *)ptr;
  int result = -1;
  mtx_t *first;
  mtx_t *second;
 
  if (args->from->id == args->to->id) {
    return -1; /* Indicate error */
  }
 
  /* Ensure proper ordering for locking */
  if (args->from->id < args->to->id) {
    first = &args->from->balance_mutex;
    second = &args->to->balance_mutex;
  } else {
    first = &args->to->balance_mutex;
    second = &args->from->balance_mutex;
  }
  if (thrd_success != mtx_lock(first)) {
    /* Handle error */
  }
  if (thrd_success != mtx_lock(second)) {
    /* Handle error */
  }
 
  /* Not enough balance to transfer */
  if (args->from->balance >= args->amount) {
    args->from->balance -= args->amount;
    args->to->balance += args->amount;
    result = 0;
  }
 
  if (thrd_success != mtx_unlock(second)) {
    /* Handle error */
  }
  if (thrd_success != mtx_unlock(first)) {
    /* Handle error */
  }
  free(ptr);
  return result;
} 
