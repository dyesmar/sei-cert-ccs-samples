// STR31-C: Noncompliant Code Example (sprintf())
#include <stdio.h>
  
void func(const char *name) {
  char filename[128];
  sprintf(filename, "%s.txt", name);
}
