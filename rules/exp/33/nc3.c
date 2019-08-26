// EXP33-C: Noncompliant Code Example (mbstate_t)
#include <string.h>
#include <wchar.h>
  
void func(const char *mbs) {
  size_t len;
  mbstate_t state;
 
  len = mbrlen(mbs, strlen(mbs), &state);
}
