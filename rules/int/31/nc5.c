#include <string.h>
#include <stddef.h>
  
int *init_memory(int *array, size_t n) {
  return memset(array, 4096, n); 
} 
