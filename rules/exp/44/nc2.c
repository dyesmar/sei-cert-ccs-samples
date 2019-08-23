#include <stdio.h>
 
#define S(val) _Generic(val, int : 2, \
                             short : 3, \
                             default : 1)
void func(void) {
  int a = 0;
  int b = S(a++);
  printf("%d, %d\n", a, b);
}
