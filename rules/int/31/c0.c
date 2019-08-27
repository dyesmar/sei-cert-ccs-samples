// INT31-C: Compliant Solution (Unsigned to Signed)
#include <limits.h>
  
void func(void) {
  unsigned long int u_a = ULONG_MAX;
  signed char sc;
  if (u_a <= SCHAR_MAX) {
    sc = (signed char)u_a;  /* Cast eliminates warning */
  } else {
    /* Handle error */
  }
}
