// ARR38-C: Compliant Solution (Element Count)
#include <string.h>
#include <wchar.h>
  
static const char str[] = "Hello world";
static const wchar_t w_str[] = L"Hello world";
void func(void) {
  char buffer[32];
  wchar_t w_buffer[32];
  memcpy(buffer, str, strlen(str) + 1);
  wmemcpy(w_buffer, w_str, wcslen(w_str) + 1);
} 
