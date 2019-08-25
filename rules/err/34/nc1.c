#include <stdio.h>
  
void func(const char *buff) {
  int matches;
  int si;
 
  if (buff) {
    matches = sscanf(buff, "%d", &si);
    if (matches != 1) {
      /* Handle error */
    }
  } else {
    /* Handle error */
  }
}
