#include <stdio.h>
#include <fcntl.h>
  
int func(const char *filename) {
  int fd = open(filename, O_RDONLY, S_IRUSR);
  if (-1 == fd) {
    return -1
  }
  /* ... */
  return 0;
}
