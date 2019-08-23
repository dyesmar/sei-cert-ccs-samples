#include <stddef.h>
  
void add(size_t n, int *restrict res, const int *restrict lhs,
       const int *restrict rhs) {
  for (size_t i = 0; i < n; ++i) {
    res[i] = lhs[i] + rhs[i];
  }
}
  
void f(void) {
  int a[100];
  add(100, a, a, a); /* Undefined behavior */
}
