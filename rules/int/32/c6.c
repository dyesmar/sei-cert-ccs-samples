// INT32-C: Compliant Solution
#include <limits.h>
#include <stddef.h>
#include <inttypes.h>
  
extern size_t popcount(uintmax_t);
#define PRECISION(umax_value) popcount(umax_value)
 
void func(signed long si_a, signed long si_b) {
  signed long result;
  if ((si_a < 0) || (si_b < 0) ||
      (si_b >= PRECISION(ULONG_MAX)) ||
      (si_a > (LONG_MAX >> si_b))) {
    /* Handle error */
  } else {
    result = si_a << si_b;
  }
  /* ... */
}
