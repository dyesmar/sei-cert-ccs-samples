#include <stdlib.h>
  
void func(void) {
  static char fname[] = "/tmp/edXXXXXX";
  mkstemp(fname);
}
