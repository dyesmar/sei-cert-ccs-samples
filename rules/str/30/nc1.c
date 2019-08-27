// STR30-C: Noncompliant Code Example (POSIX)
#include <stdlib.h>
  
void func(void) {
  mkstemp("/tmp/edXXXXXX");
}
