// STR38-C: Noncompliant Code Example (Narrow Strings with Wide String Functions)
#include <wchar.h>
  
void func(void) {
  char narrow_str1[] = "01234567890123456789";
  char narrow_str2[] = "0000000000";
 
  wcsncpy(narrow_str2, narrow_str1, 10);
}
