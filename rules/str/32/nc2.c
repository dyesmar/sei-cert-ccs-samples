#include <string.h>
  
enum { STR_SIZE = 32 };
  
size_t func(const char *source) {
  char c_str[STR_SIZE];
  size_t ret = 0;
 
  if (source) {
    c_str[sizeof(c_str) - 1] = '\0';
    strncpy(c_str, source, sizeof(c_str));
    ret = strlen(c_str);
  } else {
    /* Handle null pointer */
  }
  return ret;
}
