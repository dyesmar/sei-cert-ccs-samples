#include <stdio.h>
  
void func(void) {
  int i;
  float x;
  char format[100] = "%s";
  /* Undefined behavior */
  int n = scanf(format, format + 2, &i, &x); 
  /* ... */
}
