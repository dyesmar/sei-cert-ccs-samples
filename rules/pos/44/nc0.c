void func(void *foo) {
  /* Execution of thread */
}
 
int main(void) {
  int result;
  pthread_t thread;
 
  if ((result = pthread_create(&thread, NULL, func, 0)) != 0) {
    /* Handle Error */
  }
  if ((result = pthread_kill(thread, SIGTERM)) != 0) {
    /* Handle Error */
  }
 
  /* This point is not reached because the process terminates in pthread_kill() */
 
  return 0;
}
