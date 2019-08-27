// INT31-C: Compliant Solution (memset())
#include <string.h>
#include <stddef.h>
 
int *init_memory(int *array, size_t n) {
  return memset(array, 0, n); 
} 
