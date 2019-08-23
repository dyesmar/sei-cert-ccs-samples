#include <stdarg.h>
#include <stddef.h>
 
void func(size_t num_vargs, ...) {
  va_list ap; 
  va_start(ap, num_vargs);
  if (num_vargs > 0) {
    unsigned char c = (unsigned char) va_arg(ap, int);
    // ...
  }
  va_end(ap);
}
 
void f(void) {
  unsigned char c = 0x12;
  func(1, c);
}
