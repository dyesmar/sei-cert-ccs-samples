// EXP33-C: Compliant Solution (realloc())
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
enum { OLD_SIZE = 10, NEW_SIZE = 20 };
  
int *resize_array(int *array, size_t old_count, size_t new_count) {
  if (0 == new_count) {
    return 0;
  }
  
  int *ret = (int *)realloc(array, new_count * sizeof(int));
  if (!ret) {
    free(array);
    return 0;
  }
  
  if (new_count > old_count) {
    memset(ret + old_count, 0, (new_count - old_count) * sizeof(int));
  }
  
  return ret;
}
  
void func(void) {
  
  int *array = (int *)malloc(OLD_SIZE * sizeof(int));
  if (0 == array) {
    /* Handle error */
  }
  
  for (size_t i = 0; i < OLD_SIZE; ++i) {
    array[i] = i;
  }
  
  array = resize_array(array, OLD_SIZE, NEW_SIZE);
  if (0 == array) {
    /* Handle error */
  }
  
  for (size_t i = 0; i < NEW_SIZE; ++i) {
    printf("%d ", array[i]);
  }
}
