#include <stdio.h>
  
void func(const char *file_name) {
  FILE *fptr = NULL;
  int c = 'a';
  
  while (c <= 'z') {
    if (putc(c++, fptr ? fptr :
         (fptr = fopen(file_name, "w"))) == EOF) {
      /* Handle error */
    }
  }
 
  if (fclose(fptr) == EOF) {
    /* Handle error */
  }
}
