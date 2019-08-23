#include <limits.h>
 
void func(void) {
  signed int si = INT_MIN;
  unsigned int ui;
  if (si < 0) {
    /* Handle error */
  } else {
    ui = (unsigned int)si;  /* Cast eliminates warning */
  }
  /* ... */
}
