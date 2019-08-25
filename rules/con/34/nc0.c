#include <threads.h>
#include <stdio.h>
 
int child_thread(void *val) {
  int *res = (int *)val;
  printf("Result: %d\n", *res);
  return 0;
}
 
void create_thread(thrd_t *tid) {
  int val = 1;
  if (thrd_success != thrd_create(tid, child_thread, &val)) {
    /* Handle error */
  }
}
 
int main(void) {
  thrd_t tid;
  create_thread(&tid);
   
  if (thrd_success != thrd_join(tid, NULL)) {
    /* Handle error */
  }
  return 0;
}
