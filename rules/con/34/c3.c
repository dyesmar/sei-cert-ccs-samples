// CON34-C: Compliant Solution (Thread-Local Storage, Windows, Visual Studio)
#include <Windows.h>
#include <stdio.h>
 
DWORD WINAPI child_thread(LPVOID v) {
  int *result = (int *)v;
  printf("Result: %d\n", *result);  /* Correctly prints 1 */
  return NULL;
}
 
int create_thread(HANDLE *tid) {
  /* Declare val as a thread-local value */
  __declspec(thread) int val = 1;
  *tid = create_thread(NULL, 0, child_thread, &val, 0, NULL);
  return *tid == NULL;
}
 
int main(void) {
  HANDLE tid;
  
  if (create_thread(&tid)) {
    /* Handle error */
  }
  
  if (WAIT_OBJECT_0 != WaitForSingleObject(tid, INFINITE)) {
    /* Handle error */
  }
  CloseHandle(tid);
  
  return 0;
}
