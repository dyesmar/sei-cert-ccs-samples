#include <float.h>
#include <math.h>
#include <stdio.h>
  
void f(void) {
  float f = 0.0f;
  f = nextafterf(f, FLT_MAX);
  printf("float is %f\n", f);
}
