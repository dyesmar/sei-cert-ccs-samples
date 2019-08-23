#include <stdlib.h>
#include <string.h>
  
void f1(size_t nchars) {
  char *p = (char *)malloc(nchars);
  /* ... */
  const size_t n = nchars + 1;
  /* ... */
  memset(p, 0, n);
}
