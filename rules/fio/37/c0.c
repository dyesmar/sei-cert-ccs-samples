// FIO37-C: Compliant Solution
#include <stdio.h>
#include <string.h>
  
enum { BUFFER_SIZE = 1024 };
 
void func(void) {
  char buf[BUFFER_SIZE];
  char *p;
 
  if (fgets(buf, sizeof(buf), stdin)) {
    p = strchr(buf, '\n');
    if (p) {
      *p = '\0';
    }
  } else {
    /* Handle error */
  }
}
