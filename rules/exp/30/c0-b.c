// EXP30-C: Compliant Solution
#include <stdio.h>
 
void func(int i, int *b) {
  int a = i + b[i + 1];
  ++i;
  printf("%d, %d", a, i);
}
