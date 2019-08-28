// POS52-C: Compliant Solution (Block while Not Locked)
void thread_foo(void *ptr) {
  uint32_t num;
  int result;
  int sock;
 
  /* sock is a connected TCP socket */
 
  if ((result = recv(sock, (void *)&num, sizeof(uint32_t), 0)) < 0) {
    /* Handle Error */
  }
 
  if ((result = pthread_mutex_lock(&mutex)) != 0) {
    /* Handle Error */
  }
 
  /* ... */
 
  if ((result = pthread_mutex_unlock(&mutex)) != 0) {
    /* Handle Error */
  }
}
