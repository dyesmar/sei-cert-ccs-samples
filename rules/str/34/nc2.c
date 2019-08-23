#include <limits.h>
#include <stddef.h>
  
static const char table[UCHAR_MAX + 1] = { 'a' /* ... */ };
 
ptrdiff_t first_not_in_table(const char *c_str) {
  for (const char *s = c_str; *s; ++s) {
    if (table[(unsigned int)*s] != *s) {
      return s - c_str;
    }
  }
  return -1;
}
