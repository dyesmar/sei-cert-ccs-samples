#include <threads.h>
 
static int account_balance;
static mtx_t account_lock;
  
int debit(int amount) {
  if (mtx_lock(&account_lock) == thrd_error) {
    return -1;   /* Indicate error to caller */
  }
  account_balance -= amount;
  if (mtx_unlock(&account_lock) == thrd_error) {
    return -1;   /* Indicate error to caller */
  }
  return 0;   /* Indicate success */
}
 
int credit(int amount) {
  if (mtx_lock(&account_lock) == thrd_error) {
    return -1;   /* Indicate error to caller */
  }
  account_balance += amount;
  if (mtx_unlock(&account_lock) == thrd_error) {
    return -1;   /* Indicate error to caller */
  }
  return 0;   /* Indicate success */
}
  
int main(void) {
  if(mtx_init(&account_lock, mtx_plain) == thrd_error) {
    /* Handle error */
  }
  /* ... */
}
