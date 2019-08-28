// MSC32-C: Compliant Solution (Windows)
#include <stdio.h>
#include <Windows.h>
#include <Bcrypt.h>
#include <Ntstatus.h>
#include <Wincrypt.h>
 
void func(void) {
  BCRYPT_ALG_HANDLE hAlgorithm = NULL;
  long rand_buf;
  PUCHAR pbBuffer = (PUCHAR) &rand_buf;
  ULONG cbBuffer = sizeof(rand_buf);
  ULONG dwFlags = BCRYPT_USE_SYSTEM_PREFERRED_RNG;
  NTSTATUS status;
  for (unsigned int i = 0; i < 10; ++i) {
    status = BCryptGenRandom(hAlgorithm, pbBuffer, cbBuffer, dwFlags);
    if (status == STATUS_SUCCESS) {
      printf("%ld, ", rand_buf);
    } else {
      /* Handle Error */
    }
  }
}
