// EXP39-C: Noncompliant Code Example
#include <stdio.h>
  
void func(void) {
  short a[2];
  a[0]=0x1111;
  a[1]=0x1111;
 
  *(int *)a = 0x22222222;
 
  printf("%x %x\n", a[0], a[1]);
}
