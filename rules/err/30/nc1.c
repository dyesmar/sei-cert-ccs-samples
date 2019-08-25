#include <errno.h>
#include <stdio.h>
  
void func(const char *filename) {
  FILE *fileptr;
 
  errno = 0;
  fileptr = fopen(filename, "rb");
  if (errno != 0) {
    /* Handle error */
  }
}
