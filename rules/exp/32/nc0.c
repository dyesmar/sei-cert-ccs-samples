#include <stdio.h>
  
void func(void) {
  static volatile int **ipp;
  static int *ip;
  static volatile int i = 0;
 
  printf("i = %d.\n", i);
 
  ipp = &ip; /* May produce a warning diagnostic */
  ipp = (int**) &ip; /* Constraint violation; may produce a warning diagnostic */
  *ipp = &i; /* Valid */
  if (*ip != 0) { /* Valid */
    /* ... */
  }
}
