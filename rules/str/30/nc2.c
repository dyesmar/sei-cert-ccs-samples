#include <stdio.h>
#include <string.h>
  
const char *get_dirname(const char *pathname) {
  char *slash;
  slash = strrchr(pathname, '/');
  if (slash) {
    *slash = '\0'; /* Undefined behavior */
  }
  return pathname;
}
 
int main(void) {
  puts(get_dirname(__FILE__));
  return 0;
}
