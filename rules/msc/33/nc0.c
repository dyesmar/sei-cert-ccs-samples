// MSC33-C: Noncompliant Code Example
#include <time.h>
  
void func(struct tm *time_tm) {
  char *time = asctime(time_tm);
  /* ... */
}
