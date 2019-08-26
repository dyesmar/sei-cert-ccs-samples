// EXP43-C: Compliant Solution
#include <stdio.h>
  
void func(void) {
  int i;
  float x;
  int n = scanf("%d%f", &i, &x); /* Defined behavior  */ 
  /* ... */
}
