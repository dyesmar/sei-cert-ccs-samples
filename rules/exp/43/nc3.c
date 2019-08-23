#include <string.h>
  
void func(void) {
  char c_str[]= "test string";
  char *ptr1 = c_str;
  char *ptr2;
 
  ptr2 = ptr1 + 3;
  /* Undefined behavior because of overlapping objects */
  memcpy(ptr2, ptr1, 6); 
  /* ... */
}
