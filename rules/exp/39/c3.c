// EXP39-C: Compliant Solution
enum { ROWS = 10, COLS = 15 };
  
void func(void) {
  int a[ROWS][COLS];
  int (*b)[COLS] = a;
}
