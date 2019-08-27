// EXP47-C: Compliant Solution
#include <stdarg.h>
#include <stddef.h>
 
void func(size_t num_vargs, const char *cp, ...) {
  va_list ap; 
  va_start(ap, cp);
  if (num_vargs > 0) {
    int val = va_arg(ap, int);
    // ...
  }
  va_end(ap);
}
  
void f(void) {
  func(0, "The only argument");
}
