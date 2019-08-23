#include <assert.h>
  
void func(void) {
  char c = 'x';
  int *ip = (int *)&c; /* This can lose information */
  char *cp = (char *)ip;
 
  /* Will fail on some conforming implementations */
  assert(cp == &c);
}
