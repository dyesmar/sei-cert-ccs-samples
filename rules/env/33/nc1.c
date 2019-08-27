// ENV33-C: Noncompliant Code Example (POSIX)
#include <stdlib.h>
  
void func(void) {
  system("rm ~/.config");
}
