#include <stddef.h>
void f(size_t n, int *restrict p, const int *restrict q) {
  while (n-- > 0) {
    *p++ = *q++;
  }
}
  
void g(void) {
  extern int d[100];
  /* ... */
  f(50, d + 1, d); /* Undefined behavior */
}
