#include <stdio.h>
  
extern void f(int i);
  
void func(int expr) {
  switch (expr) {
    int i = 4;
    f(i);
  case 0:
    i = 17;
    /* Falls through into default code */
  default:
    printf("%d\n", i);
  }
}
