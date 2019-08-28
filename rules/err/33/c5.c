// ERR33-C: Compliant Solution (snprintf(null))
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
extern void log_message(const char *);
  
void f(int i, int width, int prec) {
  char buffer[20];
  char *buf = buffer;
  int n  = sizeof(buffer);
  const char fmt[] = "i = %*.*i";
 
  n = snprintf(buf, n, fmt, width, prec, i);
  if (n < 0) {
    /* Handle snprintf() error */
    strcpy(buffer, "unknown error");
    goto write_log;
  }
 
  if (n < sizeof(buffer)) {
    goto write_log;
  }
 
  buf = (char *)malloc(n + 1);
  if (NULL == buf) {
    /* Handle malloc() error */
    strcpy(buffer, "unknown error");
    goto write_log;
  }
 
  n = snprintf(buf, n, fmt, width, prec, i);
  if (n < 0) {
    /* Handle snprintf() error */
    strcpy(buffer, "unknown error");
  }
 
write_log:
  log_message(buf);
 
  if (buf != buffer) {
    free(buf);
  }
}
