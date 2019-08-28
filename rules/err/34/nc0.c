// ERR34-C: Noncompliant Code Example (atoi())
#include <stdlib.h>
  
void func(const char *buff) {
  int si;
 
  if (buff) {
    si = atoi(buff);
  } else {
    /* Handle error */
  }
}
