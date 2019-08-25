#include <stdio.h>
#include <threads.h>
 
mtx_t mutex;
cnd_t cond;
int run_step(void *t) {
  static size_t current_step = 0;
  size_t my_step = *(size_t *)t;
 
  if (thrd_success != mtx_lock(&mutex)) {
    /* Handle error */
  }
 
  printf("Thread %zu has the lock\n", my_step);
 
  while (current_step != my_step) {
    printf("Thread %zu is sleeping...\n", my_step);
 
    if (thrd_success != cnd_wait(&cond, &mutex)) {
      /* Handle error */
    }
 
  printf("Thread %zu woke up\n", my_step);
  }
 
  /* Do processing ... */
  printf("Thread %zu is processing...\n", my_step);
 
  current_step++;
 
  /* Signal ALL waiting tasks */
  if (thrd_success != cnd_broadcast(&cond)) {
    /* Handle error */
  }
 
  printf("Thread %zu is exiting...\n", my_step);
 
  if (thrd_success != mtx_unlock(&mutex)) {
    /* Handle error */
  }
  return 0;
}
