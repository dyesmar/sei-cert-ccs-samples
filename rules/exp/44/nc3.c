#include <stdio.h>
  
void func(void) {
  int val = 0;
  /* ... */ 
  size_t align = _Alignof(int[++val]);
  printf("%zu, %d\n", align, val);
  /* ... */
}
