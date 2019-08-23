#include <wchar.h>
#include <stdio.h>
  
enum { WCHAR_BUF = 128 };
  
void func(void) {
  wchar_t error_msg[WCHAR_BUF];
 
  wcscpy(error_msg, L"Error: ");
  fgetws(error_msg + wcslen(error_msg) * sizeof(wchar_t),
         WCHAR_BUF - 7, stdin);
  /* ... */
}
