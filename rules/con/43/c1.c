// CON43-C: Compliant Solution (Atomic)
#include <stdatomic.h>
 
atomic_int account_balance;
 
void debit(int amount) {
  account_balance -= amount;
}
 
void credit(int amount) {
  account_balance += amount;
}
