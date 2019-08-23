#include <stdio.h>
  
#define BUFFER_SIZE 1024
 
void func(void) {
  char buf[BUFFER_SIZE];
  if (gets(buf) == NULL) {
    /* Handle error */
  }
}
