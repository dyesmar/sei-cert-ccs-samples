#include <Windows.h>
 
void func(TCHAR *input) {
  STARTUPINFO si = { 0 };
  PROCESS_INFORMATION pi;
  si.cb = sizeof(si);
  if (!CreateProcess(TEXT("any_cmd.exe"), input, NULL, NULL, FALSE,
                     0, 0, 0, &si, &pi)) {
    /* Handle error */
  }
  CloseHandle(pi.hThread);
  CloseHandle(pi.hProcess);
}
