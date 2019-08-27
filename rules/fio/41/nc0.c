// FIO41-C: Noncompliant Code Example (getc())
#include <stdio.h>
  
void func(const char *file_name) {
  FILE *fptr;
 
  int c = getc(fptr = fopen(file_name, "r"));
  if (feof(stdin) || ferror(stdin)) {
    /* Handle error */
  }
 
  if (fclose(fptr) == EOF) {
    /* Handle error */
  }
}
