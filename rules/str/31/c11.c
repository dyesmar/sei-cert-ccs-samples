// STR31-C: Compliant Solution (snprintf())
#include <stdio.h>
  
void func(const char *name) {
  char filename[128];
  snprintf(filename, sizeof(filename), "%s.txt", name);
}
