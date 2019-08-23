#include <stddef.h>
#include <stdio.h>
   
void f(size_t n) {
  /* n must be incremented */
  size_t a = sizeof(int[++n]);
  
  /* n need not be incremented */
  size_t b = sizeof(int[++n % 1 + 1]);
 
  printf("%zu, %zu, %zu\n", a, b, n);
  /* ... */
}
