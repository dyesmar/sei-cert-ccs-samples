// EXP42-C: Noncompliant Code Example
#include <string.h>
  
struct s {
  char c;
  int i;
  char buffer[13];
};
  
void compare(const struct s *left, const struct s *right) { 
  if ((left && right) &&
      (0 == memcmp(left, right, sizeof(struct s)))) {
    /* ... */
  }
}
