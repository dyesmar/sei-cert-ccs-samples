// EXP44-C: Compliant Solution (sizeof)
#include <stdio.h>
  
void func(void) {
  int a = 14;
  int b = sizeof(a);
  ++a;
  printf("%d, %d\n", a, b);
}
