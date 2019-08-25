#include <stdatomic.h>
#include <stdbool.h>
   
static atomic_bool flag = ATOMIC_VAR_INIT(false);
   
void toggle_flag(void) {
  flag ^= 1;
}
     
bool get_flag(void) {
  return flag;
}
