#include <Windows.h>
#include <ShlObj.h>
#include <Shlwapi.h>
  
#if defined(_MSC_VER)
  #pragma comment(lib, "Shlwapi")
#endif
 
void func(void) {
  HRESULT hr;
  LPWSTR path = 0;
  WCHAR full_path[MAX_PATH];
 
  hr = SHGetKnownFolderPath(&FOLDERID_Documents, 0, NULL, &path);
  if (FAILED(hr)) {
    /* Handle error */
  }
  if (!PathCombineW(full_path, path, L".config")) {
    /* Handle error */
  }
  CoTaskMemFree(path);
  if (!DeleteFileW(full_path)) {
    /* Handle error */
  }
}
