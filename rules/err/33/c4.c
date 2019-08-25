#include <stdio.h>
#include <string.h>
  
extern void log_message(const char *);
 
void f(int i, int width, int prec) {
  char buf[40];
  int n;
  n = snprintf(buf, sizeof(buf), "i = %*.*i", width, prec, i);
  if (n < 0 || n >= sizeof(buf)) {
    /* Handle snprintf() error */
    strcpy(buf, "unknown error");
  }
  log_message(buf);
}
