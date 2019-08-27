// INT35-C: Compliant Solution
#include <stddef.h>
#include <stdint.h>
#include <limits.h>
extern size_t popcount(uintmax_t);
#define PRECISION(umax_value) popcount(umax_value) 
unsigned int pow2(unsigned int exp) {
  if (exp >= PRECISION(UINT_MAX)) {
    /* Handle error */
  }
  return 1 << exp;
}
