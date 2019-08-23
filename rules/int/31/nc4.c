#include <time.h>
  
void func(void) {
  time_t now = time(NULL);
  if (now != -1) {
    /* Continue processing */
  }
}
