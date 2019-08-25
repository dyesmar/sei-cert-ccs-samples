#include <stdio.h>
  
extern void log_message(const char *);
 
void f(int i, int width, int prec) {
  char buf[40];
  snprintf(buf, sizeof(buf), "i = %*.*i", width, prec, i);
  log_message(buf);
  /* ... */
}
