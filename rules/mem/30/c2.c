#include <stdlib.h>
  
void f(char *c_str1, size_t size) {
  if (size != 0) {
    char *c_str2 = (char *)realloc(c_str1, size);
    if (c_str2 == NULL) {
      free(c_str1);
    }
  }
  else {
    free(c_str1);
  }
  
}
