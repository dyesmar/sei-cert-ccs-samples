#include <limits.h>
  
unsigned int pow2(unsigned int exp) {
  if (exp >= sizeof(unsigned int) * CHAR_BIT) {
    /* Handle error */
  }
  return 1 << exp;
}
