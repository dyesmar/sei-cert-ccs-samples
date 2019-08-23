#include <stdlib.h>
#include <stdio.h>
enum { OLD_SIZE = 10, NEW_SIZE = 20 };
  
int *resize_array(int *array, size_t count) {
  if (0 == count) {
    return 0;
  }
  
  int *ret = (int *)realloc(array, count * sizeof(int));
  if (!ret) {
    free(array);
    return 0;
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
  
  array = resize_array(array, NEW_SIZE);
  if (0 == array) {
    /* Handle error */
  }
  
  for (size_t i = 0; i < NEW_SIZE; ++i) {
    printf("%d ", array[i]);
  }
}
