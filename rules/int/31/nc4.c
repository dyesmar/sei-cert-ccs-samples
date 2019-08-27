// INT31-C: Noncompliant Code Example (time_t Return Value)
#include <time.h>
  
void func(void) {
  time_t now = time(NULL);
  if (now != -1) {
    /* Continue processing */
  }
}
