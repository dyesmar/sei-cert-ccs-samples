// DCL31-C: Compliant Solution (Implicit Function Declaration)
#include <stdlib.h>
  
int main(void) {
  for (size_t i = 0; i < 100; ++i) {
    char *ptr = (char *)malloc(0x10000000);
    *ptr = 'a';
  }
  return 0;
}
