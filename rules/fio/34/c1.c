// FIO34-C: Compliant Solution (Nonportable)
#include <assert.h>
#include <stdio.h>
#include <limits.h>
 
void func(void) {
  int c;
  static_assert(UCHAR_MAX < UINT_MAX, "FIO34-C violation");
 
  do {
    c = getchar();
  } while (c != EOF);
}
