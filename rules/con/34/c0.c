// CON34-C: Compliant Solution (Static Storage Duration)
#include <threads.h>
#include <stdio.h>
 
int child_thread(void *v) {
  int *result = (int *)v;
  printf("Result: %d\n", *result);  /* Correctly prints 1 */
  return 0;
}
  
void create_thread(thrd_t *tid) {
  static int val = 1;
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
