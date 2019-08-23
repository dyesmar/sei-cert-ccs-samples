#include <stddef.h>
enum { SIZE = 32 };
  
void func(void) {
  int nums[SIZE];
  int *next_num_ptr = nums;
  size_t free_elements;
 
  /* Increment next_num_ptr as array fills */
 
  free_elements = &(nums[SIZE]) - next_num_ptr;
}
