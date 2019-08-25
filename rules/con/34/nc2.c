#include <threads.h>
#include <stdio.h>
#include <stdlib.h>
  
static tss_t key;
  
int child_thread(void *v) {
  void *result = tss_get(*(tss_t *)v);
  printf("Result: %d\n", *(int *)result);
  return 0;
}
  
int create_thread(void *thrd) {
  int *val = (int *)malloc(sizeof(int));
  if (val == NULL) {
    /* Handle error */
  }
  *val = 1;
  if (thrd_success != tss_set(key, val)) {
    /* Handle error */
  }
  if (thrd_success != thrd_create((thrd_t *)thrd,
                                  child_thread, &key)) {
    /* Handle error */
  }
  return 0;
}
 
int main(void) {
  thrd_t parent_tid, child_tid;
 
  if (thrd_success != tss_create(&key, free)) {
    /* Handle error */
  }
  if (thrd_success != thrd_create(&parent_tid, create_thread,
                                  &child_tid)) {
    /* Handle error */
  }
  if (thrd_success != thrd_join(parent_tid, NULL)) {
    /* Handle error */
  }
  if (thrd_success != thrd_join(child_tid, NULL)) {
    /* Handle error */
  }
  tss_delete(key);
  return 0;
} 
