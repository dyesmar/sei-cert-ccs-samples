#include <string.h>
  
void f2(void) {
  const size_t ARR_SIZE = 4;
  long a[ARR_SIZE];
  const size_t n = sizeof(int) * ARR_SIZE;
  void *p = a;
 
  memset(p, 0, n);
}
