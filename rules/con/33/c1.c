#include <errno.h>
#include <stdio.h>
#include <string.h>
 
enum { BUFFERSIZE = 64 };
  
void f(FILE *fp) {
  fpos_t pos;
  errno = 0;
 
  if (0 != fgetpos(fp, &pos)) {
    char errmsg[BUFFERSIZE];
    if (strerror_r(errno, errmsg, BUFFERSIZE) != 0) {
      /* Handle error */
    }
    printf("Could not get the file position: %s\n", errmsg);
  }
}
