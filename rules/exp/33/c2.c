// EXP33-C: Compliant Solution (Uninitialized Local)
#include <stdio.h>
  
void report_error(const char *msg) {
  printf("Error: %s\n", msg);
}
