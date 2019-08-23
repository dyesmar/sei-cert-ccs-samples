#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
 
void func(void) {    
  double cpu_time;
  struct timeval tv;
 
  cpu_time = ((double) clock()) / CLOCKS_PER_SEC;
  gettimeofday(&tv, NULL);
  srandom((getpid() << 16) ^ tv.tv_sec ^ tv.tv_usec ^ cpu_time);
}
