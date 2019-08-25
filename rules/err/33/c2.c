#include <stdlib.h>
  
void *p;
void func(size_t new_size) {
  void *q;
 
  if (new_size == 0) {
    /* Handle error */
  }
  
  q = realloc(p, new_size);
  if (q == NULL) {
   /* Handle error */
  } else {
    p = q;
  }
}
