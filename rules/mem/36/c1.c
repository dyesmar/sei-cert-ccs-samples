#include <malloc.h>
 
void func(void) {
  size_t alignment = 1 << 12;
  int *ptr;
  int *ptr1;
 
  /* Original allocation */
  if (NULL == (ptr = (int *)_aligned_malloc(sizeof(int),
                                            alignment))) {
    /* Handle error */
}
 
  /* Reallocation */
  if (NULL == (ptr1 = (int *)_aligned_realloc(ptr, 1024,
                                              alignment))) {
    _aligned_free(ptr);
    /* Handle error */
  }
 
  _aligned_free(ptr1);
}
