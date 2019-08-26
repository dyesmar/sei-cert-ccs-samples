#include <stdio.h>
#include <stdlib.h>
  
enum { len = 12 };
  
void func(void) {
  /*
   * id will hold the ID, starting with the characters
   *  "ID" followed by a random integer.
   */
  char id[len]; 
  int r;
  int num;
  /* ... */
  r = rand();  /* Generate a random integer */
  num = snprintf(id, len, "ID%-d", r);  /* Generate the ID */
  /* ... */
}
