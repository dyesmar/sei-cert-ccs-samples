// STR31-C: Compliant Solution (sprintf())
#include <stdio.h>
  
void func(const char *name) {
  char filename[128];
  sprintf(filename, "%.123s.txt", name);
}
