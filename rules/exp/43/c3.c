#include <string.h>
 
void func(void) {
  char c_str[]= "test string";
  char *ptr1 = c_str;
  char *ptr2;
 
  ptr2 = ptr1 + 3;
  memmove(ptr2, ptr1, 6);  /* Replace call to memcpy() */
  /* ... */
}
