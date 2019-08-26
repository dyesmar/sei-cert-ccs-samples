// PRE32-C: Compliant Solution
#include <string.h>

void func(const char *src) {
  /* Validate the source string; calculate size */
  char *dest;
  /* malloc() destination string */ 
  #ifdef PLATFORM1
    memcpy(dest, src, 12);
  #else
    memcpy(dest, src, 24);
  #endif
  /* ... */
}
