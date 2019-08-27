// INT31-C: Compliant Solution (time_t Return Value)
#include <time.h>
  
void func(void) {
  time_t now = time(NULL);
  if (now != (time_t)-1) {
    /* Continue processing */
  }
}
