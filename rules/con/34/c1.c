#include <threads.h>
#include <stdio.h>
#include <stdlib.h>
 
int child_thread(void *val) {
  int *result = (int *)val;
  printf("Result: %d\n", *result); /* Correctly prints 1 */
  return 0;
}
  
void create_thread(thrd_t *tid, int *value) {
  *value = 1;
  if (thrd_success != thrd_create(tid, child_thread,
                                  value)) {
    /* Handle error */
  }
}
  
int main(void) {
  thrd_t tid;
  int *value = (int *)malloc(sizeof(int));
  if (!value) {
    /* Handle error */
  }
  create_thread(&tid, value);
  if (thrd_success != thrd_join(tid, NULL)) {
    /* Handle error */
  }
  free(value);
  return 0;
}
