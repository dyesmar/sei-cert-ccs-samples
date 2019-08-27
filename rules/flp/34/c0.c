// FLP34-C: Compliant Solution (float to int)
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <stdint.h>
  
extern size_t popcount(uintmax_t); /* See INT35-C */
#define PRECISION(umax_value) popcount(umax_value)
  
void func(float f_a) {
  int i_a;
  
  if (isnan(f_a) ||
      PRECISION(INT_MAX) < log2f(fabsf(f_a)) ||
      (f_a != 0.0F && fabsf(f_a) < FLT_MIN)) {
    /* Handle error */
  } else {
    i_a = f_a;
  }
}
