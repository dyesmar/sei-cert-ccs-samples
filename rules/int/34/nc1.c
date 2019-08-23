#include <limits.h>
#include <stddef.h>
#include <inttypes.h>
 
void func(signed long si_a, signed long si_b) {
  signed long result;
  if (si_a > (LONG_MAX >> si_b)) {
    /* Handle error */
  } else {
    result = si_a << si_b;
  }
  /* ... */
}
