static volatile int account_balance;
 
void debit(int amount) {
  account_balance -= amount;
}
 
void credit(int amount) {
  account_balance += amount;
}
