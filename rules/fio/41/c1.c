// FIO41-C: Compliant Solution (putc())
#include <stdio.h>
  
void func(const char *file_name) {
  int c = 'a';
  FILE *fptr = fopen(file_name, "w");
  
  if (fptr == NULL) {
    /* Handle error */
  }
 
  while (c <= 'z') {
    if (putc(c++, fptr) == EOF) {
      /* Handle error */
    }
  }
 
  if (fclose(fptr) == EOF) {
    /* Handle error */
  }
}
