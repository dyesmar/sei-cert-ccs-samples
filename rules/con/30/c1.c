// CON30-C: Compliant Solution
#include <threads.h>
#include <stdlib.h>
 
/* Global key to the thread-specific storage */
tss_t key;
enum { MAX_THREADS = 3 };
 
/* ... Other functions are unchanged */
 
void destructor(void *data) {
  free(data);
}
  
int main(void) {
  thrd_t thread_id[MAX_THREADS];
 
  /* Create the key before creating the threads */
  if (thrd_success != tss_create(&key, destructor)) {
    /* Handle error */
  }
 
  /* Create threads that would store specific storage */
  for (size_t i = 0; i < MAX_THREADS; i++) {
    if (thrd_success != thrd_create(&thread_id[i], function, NULL)) {
      /* Handle error */
    }
  }
 
  for (size_t i = 0; i < MAX_THREADS; i++) {
    if (thrd_success != thrd_join(thread_id[i], NULL)) {
      /* Handle error */
    }
  }
 
  tss_delete(key);
  return 0;
}
