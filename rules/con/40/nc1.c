#include <stdatomic.h>
 
atomic_int n = ATOMIC_VAR_INIT(0);
   
int compute_sum(void) {
  return n * (n + 1) / 2;
}
