// FIO34-C: Compliant Solution (Portable)
#include <stddef.h>
#include <stdio.h>
#include <wchar.h>
  
enum {BUFFER_SIZE = 32 }
 
void g(void) {
  wchar_t buf[BUFFER_SIZE];
  wint_t wc;
  size_t i = 0;
   
  while ((wc = getwc(stdin)) != L'\n' && wc != WEOF) {
    if (i < BUFFER_SIZE - 1) {
      buf[i++] = wc;
    }
  }
 
  if (feof(stdin) || ferror(stdin)) {
   buf[i] = L'\0';
  } else {
    /* Received a wide character that resembles WEOF; handle error */
  }
}
