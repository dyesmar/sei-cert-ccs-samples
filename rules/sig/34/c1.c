// SIG34-C: Compliant Solution (POSIX)
#include <signal.h>
#include <stddef.h>
  
void handler(int signum) {
  /* Handle signal */
}
 
void func(void) {
  struct sigaction act;
  act.sa_handler = handler;
  act.sa_flags = 0;
  if (sigemptyset(&act.sa_mask) != 0) {
    /* Handle error */
  }
  if (sigaction(SIGUSR1, &act, NULL) != 0) {
    /* Handle error */
  }
}
