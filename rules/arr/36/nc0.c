// ARR36-C: Noncompliant Code Example
#include <stddef.h>
  
enum { SIZE = 32 };
  
void func(void) {
  int nums[SIZE];
  int end;
  int *next_num_ptr = nums;
  size_t free_elements;
 
  /* Increment next_num_ptr as array fills */
 
  free_elements = &end - next_num_ptr;
}
