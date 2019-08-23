#include <stddef.h>
#include <stdio.h>
   
void f(size_t n) {
  size_t a = sizeof(int[n + 1]);
  ++n;
 
  size_t b = sizeof(int[n % 1 + 1]);
  ++n;
  printf("%zu, %zu, %zu\n", a, b, n);
  /* ... */
}
