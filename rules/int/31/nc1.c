#include <limits.h>
 
void func(void) {
  signed int si = INT_MIN;
  /* Cast eliminates warning */
  unsigned int ui = (unsigned int)si;
 
  /* ... */
}
