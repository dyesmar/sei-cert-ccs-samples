// FLP36-C: Compliant Solution
#include <assert.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
 
extern size_t popcount(uintmax_t); /* See INT35-C */
#define PRECISION(umax_value) popcount(umax_value)
 
int main(void) {
  assert(PRECISION(LONG_MAX) <= DBL_MANT_DIG * log2(FLT_RADIX));
  long int big = 1234567890L;
  double approx = big;
  printf("%ld\n", (big - (long int)approx));
  return 0;
}
