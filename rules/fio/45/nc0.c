#include <stdio.h>
 
void open_some_file(const char *file) {
  FILE *f = fopen(file, "r");
  if (NULL != f) {
    /* File exists, handle error */
  } else {
    if (fclose(f) == EOF) {
      /* Handle error */
    }
    f = fopen(file, "w");
    if (NULL == f) {
      /* Handle error */
    }
  
    /* Write to file */
    if (fclose(f) == EOF) {
      /* Handle error */
    }
  }
}
