// MEM34-C: Noncompliant Code Example (realloc())
#include <stdlib.h>
  
enum { BUFSIZE = 256 };
  
void f(void) {
  char buf[BUFSIZE];
  char *p = (char *)realloc(buf, 2 * BUFSIZE);
  if (p == NULL) {
    /* Handle error */
  }
}
