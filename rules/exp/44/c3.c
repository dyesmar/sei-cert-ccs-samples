#include <stdio.h>
void func(void) {
  int val = 0; 
  /* ... */ 
  ++val;
  size_t align = _Alignof(int[val]);
  printf("%zu, %d\n", align, val);
  /* ... */
}
