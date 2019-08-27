// INT32-C: Compliant Solution
#include <stddef.h>
#include <assert.h>
#include <limits.h>
#include <inttypes.h>
  
extern size_t popcount(uintmax_t);
#define PRECISION(umax_value) popcount(umax_value)
   
void func(signed int si_a, signed int si_b) {
  signed int result;
  signed long long tmp;
  assert(PRECISION(ULLONG_MAX) >= 2 * PRECISION(UINT_MAX));
  tmp = (signed long long)si_a * (signed long long)si_b;
  
  /*
   * If the product cannot be represented as a 32-bit integer,
   * handle as an error condition.
   */
  if ((tmp > INT_MAX) || (tmp < INT_MIN)) {
    /* Handle error */
  } else {
    result = (int)tmp;
  }
  /* ... */
}
