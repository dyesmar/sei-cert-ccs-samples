#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>
 
void reaper(int signum) {
  errno = 0;
  for (;;) {
    int rc = waitpid(-1, NULL, WNOHANG);
    if ((0 == rc) || (-1 == rc && EINTR != errno)) {
      break;
    }
  }
  if (ECHILD != errno) {
    /* Handle error */
  }
}
 
int main(void) {
  struct sigaction act;
  act.sa_handler = reaper;
  act.sa_flags = 0;
  if (sigemptyset(&act.sa_mask) != 0) {
    /* Handle error */
  }
  if (sigaction(SIGCHLD, &act, NULL) != 0) {
    /* Handle error */
  }
 
  /* ... */
 
  return EXIT_SUCCESS;
}
