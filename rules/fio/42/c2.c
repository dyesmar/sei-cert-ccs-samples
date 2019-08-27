// FIO42-C: Compliant Solution (POSIX)
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
  
int func(const char *filename) {
  int fd = open(filename, O_RDONLY, S_IRUSR);
  if (-1 == fd) {
    return -1
  }
  /* ... */
  if (-1 == close(fd)) {
    return -1;
  }
  return 0;
}
