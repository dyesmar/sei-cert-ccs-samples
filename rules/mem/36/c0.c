#include <stdlib.h>
#include <string.h>
  
void func(void) {
  size_t resize = 1024;
  size_t alignment = 1 << 12;
  int *ptr;
  int *ptr1;
 
  if (NULL == (ptr = (int *)aligned_alloc(alignment,
                                          sizeof(int)))) {
    /* Handle error */
  }
 
  if (NULL == (ptr1 = (int *)aligned_alloc(alignment,
                                           resize))) {
    /* Handle error */
  }
   
  if (NULL == (memcpy(ptr1, ptr, sizeof(int))) {
    /* Handle error */
  }
   
  free(ptr);
}
