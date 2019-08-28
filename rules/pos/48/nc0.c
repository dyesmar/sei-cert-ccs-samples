// POS48-C: Noncompliant Code Example
pthread_mutex_t theLock;
int data;
 
int cleanupAndFinish(void) {
  int result;
  if ((result = pthread_mutex_destroy(&theLock)) != 0) {
    /* Handle error */
  }
  data++;
  return data;
}
 
void worker(int value) {
  if ((result = pthread_mutex_lock(&theLock)) != 0) {
    /* Handle error */
  }
  data += value;
  if ((result = pthread_mutex_unlock(&theLock)) != 0) {
    /* Handle error */
  }
}
