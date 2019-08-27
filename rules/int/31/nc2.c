// INT31-C: Noncompliant Code Example (Signed, Loss of Precision)
#include <limits.h>
 
void func(void) {
  signed long int s_a = LONG_MAX;
  signed char sc = (signed char)s_a; /* Cast eliminates warning */
  /* ... */
}
