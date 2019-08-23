#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
   
void func(void) {
  struct timeval tv;
  unsigned long junk;
 
  gettimeofday(&tv, NULL);
  srandom((getpid() << 16) ^ tv.tv_sec ^ tv.tv_usec ^ junk);
}
