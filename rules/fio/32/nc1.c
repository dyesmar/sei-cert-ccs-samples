// FIO32-C: Noncompliant Code Example (Windows)
#include <Windows.h>
  
void func(const TCHAR *file_name) {
  HANDLE hFile = CreateFile(
    file_name,
    GENERIC_READ | GENERIC_WRITE, 0,
    NULL, OPEN_EXISTING,
    FILE_ATTRIBUTE_NORMAL, NULL
  );
  if (hFile == INVALID_HANDLE_VALUE) {
    /* Handle error */
  } else if (GetFileType(hFile) != FILE_TYPE_DISK) {
    /* Handle error */
    CloseHandle(hFile);
  } else {
    /* Operate on the file */
    CloseHandle(hFile);
  }
}
