// STR38-C: Noncompliant Code Example (Wide Strings with Narrow String Functions) 
#include <stddef.h>
#include <string.h>
  
void func(void) {
  wchar_t wide_str1[]  = L"0123456789";
  wchar_t wide_str2[] =  L"0000000000";
 
  strncpy(wide_str2, wide_str1, 10);
}
