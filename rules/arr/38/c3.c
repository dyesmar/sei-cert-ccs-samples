// ARR38-C: Compliant Solution (Two Pointers + One Integer)
#include <string.h>
 
void f4() {
  char p[40];
  const char *q = "Too short";
  size_t n = sizeof(p) < strlen(q) + 1 ? sizeof(p) : strlen(q) + 1;
  memcpy(p, q, n);
}
