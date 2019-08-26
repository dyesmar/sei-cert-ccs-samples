// EXP44-C: Noncompliant Code Example (sizeof)
#include <stdio.h>
  
void func(void) {
  int a = 14;
  int b = sizeof(a++);
  printf("%d, %d\n", a, b);
}
