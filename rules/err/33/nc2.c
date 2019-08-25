#include <stdlib.h>
  
void *p;
void func(size_t new_size) {
  if (new_size == 0) {
    /* Handle error */
  }
  p = realloc(p, new_size);
  if (p == NULL) {
   /* Handle error */
  }
}
