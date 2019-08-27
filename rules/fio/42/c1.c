// FIO42-C: Compliant Solution (exit())
#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  FILE *f = fopen(filename, "w");
  if (NULL == f) {
    /* Handle error */
  }
  /* ... */
  if (fclose(f) == EOF) {
    /* Handle error */
  }
  exit(EXIT_SUCCESS);
}
