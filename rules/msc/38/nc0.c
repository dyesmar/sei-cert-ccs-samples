#include <assert.h>
  
typedef void (*handler_type)(int);
  
void execute_handler(handler_type handler, int value) {
  handler(value);
}
  
void func(int e) {
  execute_handler(&(assert), e < 0);
} 
