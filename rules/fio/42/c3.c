#include <Windows.h>
  
int func(LPCTSTR filename) {
  HANDLE hFile = CreateFile(filename, GENERIC_READ, 0, NULL,
                            OPEN_EXISTING,
                            FILE_ATTRIBUTE_NORMAL, NULL);
  if (INVALID_HANDLE_VALUE == hFile) {
    return -1;
  }
  /* ... */ 
  if (!CloseHandle(hFile)) {
    return -1;
  }
  
  return 0;
}
