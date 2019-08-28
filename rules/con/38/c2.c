// CON38-C: Compliant Solution (Windows, Condition Variables)
#include <Windows.h>
#include <stdio.h>
  
CRITICAL_SECTION lock;
CONDITION_VARIABLE cond;
  
DWORD WINAPI run_step(LPVOID t) {
  static size_t current_step = 0;
  size_t my_step = (size_t)t;
 
  EnterCriticalSection(&lock); 
  printf("Thread %zu has the lock\n", my_step);
 
  while (current_step != my_step) {
    printf("Thread %zu is sleeping...\n", my_step);
  
    if (!SleepConditionVariableCS(&cond, &lock, INFINITE)) {
      /* Handle error */
    }
 
    printf("Thread %zu woke up\n", my_step);
  }
 
  /* Do processing ... */
  printf("Thread %zu is processing...\n", my_step);
 
  current_step++;
  
  LeaveCriticalSection(&lock);
  
  /* Signal ALL waiting tasks */
  WakeAllConditionVariable(&cond);
  
  printf("Thread %zu is exiting...\n", my_step);
  return 0;
}
  
enum { NTHREADS = 5 };
  
int main(void) {
  HANDLE threads[NTHREADS];
   
  InitializeCriticalSection(&lock);
  InitializeConditionVariable(&cond);
  
  /* Create threads */
  for (size_t i = 0; i < NTHREADS; ++i) {
    threads[i] = CreateThread(NULL, 0, run_step, (LPVOID)i, 0, NULL);
  }
  
  /* Wait for all threads to complete */
  WaitForMultipleObjects(NTHREADS, threads, TRUE, INFINITE);
  
  DeleteCriticalSection(&lock);
  
  return 0;
}
