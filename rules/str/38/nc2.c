// STR38-C: Noncompliant Code Example (strlen())
#include <stdlib.h>
#include <string.h>
  
void func(void) {
  wchar_t wide_str1[] = L"0123456789";
  wchar_t *wide_str2 = (wchar_t*)malloc(strlen(wide_str1) + 1);
  if (wide_str2 == NULL) {
    /* Handle error */
  }
  /* ... */
  free(wide_str2);
  wide_str2 = NULL;
}
