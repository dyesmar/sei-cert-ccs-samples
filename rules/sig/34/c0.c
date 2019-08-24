#include <signal.h>
  
void handler(int signum) {
  /* Handle signal */
}
  
void func(void) {
  if (signal(SIGUSR1, handler) == SIG_ERR) {
    /* Handle error */
  }
}
