#include <stdio.h>
#include <string.h>
  
enum { BUFFER_SIZE = 1024 };
 
void func(void) {
  char buf[BUFFER_SIZE];
 
  if (fgets(buf, sizeof(buf), stdin) == NULL) {
    /* Handle error */
  }
  buf[strlen(buf) - 1] = '\0';
}
