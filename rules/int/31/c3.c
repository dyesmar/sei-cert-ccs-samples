// INT31-C: Compliant Solution (Unsigned, Loss of Precision)
#include <limits.h>
 
void func(void) {
  unsigned long int u_a = ULONG_MAX;
  unsigned char uc;
  if (u_a > UCHAR_MAX) {
    /* Handle error */
  } else {
    uc = (unsigned char)u_a; /* Cast eliminates warning */
  }
  /* ... */
}
