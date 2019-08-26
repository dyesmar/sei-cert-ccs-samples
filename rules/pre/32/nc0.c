// PRE32-C: Noncompliant Code Example
#include <string.h>
 
void func(const char *src) {
  /* Validate the source string; calculate size */
  char *dest;
  /* malloc() destination string */ 
  memcpy(dest, src,
    #ifdef PLATFORM1
      12
    #else
      24
    #endif
  );
  /* ... */
}
