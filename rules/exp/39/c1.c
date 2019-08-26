// EXP39-C: Compliant Solution
#include <stdio.h>
  
void func(void) {
  union {
    short a[2];
    int i;
  } u;
 
  u.a[0]=0x1111;
  u.a[1]=0x1111;
  u.i = 0x22222222;
 
  printf("%x %x\n", u.a[0], u.a[1]);
 
  /* ... */
}
