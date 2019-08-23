#include <wchar.h>
#include <stdio.h>
 
enum { WCHAR_BUF = 128 };
const wchar_t ERROR_PREFIX[7] = L"Error: ";
 
void func(void) {
  const size_t prefix_len = wcslen(ERROR_PREFIX);
  wchar_t error_msg[WCHAR_BUF];
 
  wcscpy(error_msg, ERROR_PREFIX);
  fgetws(error_msg + prefix_len,
        WCHAR_BUF - prefix_len, stdin);
  /* ... */
}
