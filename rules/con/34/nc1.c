#include <threads.h>
#include <stdio.h>
 
int child_thread(void *val) {
  int *result = (int *)val;
  printf("Result: %d\n", *result);  /* Correctly prints 1 */
  return 0;
}
  
void create_thread(thrd_t *tid, int *val) {
  if (thrd_success != thrd_create(tid, child_thread, val)) {
    /* Handle error */
  }
}
  
int main(void) {
  int val = 1;
  thrd_t tid;
  create_thread(&tid, &val);
  if (thrd_success != thrd_join(tid, NULL)) {
    /* Handle error */
  }
  return 0;
}
