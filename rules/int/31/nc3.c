// INT31-C: Noncompliant Code Example (Unsigned, Loss of Precision)
#include <limits.h>
 
void func(void) {
  unsigned long int u_a = ULONG_MAX;
  unsigned char uc = (unsigned char)u_a; /* Cast eliminates warning */
  /* ... */
}
