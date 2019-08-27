// EXP47-C: Noncompliant Code Example
#include <stdarg.h>
  
void func(const char *cp, ...) {
  va_list ap; 
  va_start(ap, cp);
  int val = va_arg(ap, int);
  // ...
  va_end(ap);
}
  
void f(void) {
  func("The only argument");
}
