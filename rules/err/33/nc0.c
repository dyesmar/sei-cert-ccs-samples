#include <locale.h>
#include <stdlib.h>
  
int utf8_to_wcs(wchar_t *wcs, size_t n, const char *utf8,
                size_t *size) {
  if (NULL == size) {
    return -1;
  }
  setlocale(LC_CTYPE, "en_US.UTF-8");
  *size = mbstowcs(wcs, utf8, n);
  return 0;
}
