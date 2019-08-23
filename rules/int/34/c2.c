#include <limits.h>
#include <stddef.h>
#include <inttypes.h>
 
extern size_t popcount(uintmax_t);
#define PRECISION(x) popcount(x)
  
void func(unsigned int ui_a, unsigned int ui_b) {
  unsigned int uresult = 0;
  if (ui_b >= PRECISION(UINT_MAX)) {
    /* Handle error */
  } else {
    uresult = ui_a >> ui_b;
  }
  /* ... */
}
