// INT34-C: Compliant Solution (Left Shift, Signed Type)
#include <limits.h>
#include <stddef.h>
#include <inttypes.h>
  
extern size_t popcount(uintmax_t);
#define PRECISION(x) popcount(x)
  
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
