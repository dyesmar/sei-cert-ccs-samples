#include <stdint.h>
#include <stdlib.h>
  
enum { MAX_ARRAY = 1024 };
extern void do_work(int *array, size_t size);
  
void func(size_t size) {
  if (0 == size || SIZE_MAX / sizeof(int) < size) {
    /* Handle error */
    return;
  }
  if (size < MAX_ARRAY) {
    int vla[size];
    do_work(vla, size);
  } else {
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
      /* Handle error */
    }
    do_work(array, size);
    free(array);
  }
}
