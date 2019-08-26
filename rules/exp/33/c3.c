// EXP33-C: Compliant Solution (mbstate_t)
#include <string.h>
#include <wchar.h>
  
void func(const char *mbs) {
  size_t len;
  mbstate_t state;
 
  memset(&state, 0, sizeof(state));
  len = mbrlen(mbs, strlen(mbs), &state);
}
