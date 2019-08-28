// SIG35-C: Compliant Solution
#include <errno.h>
#include <limits.h>
#include <signal.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
  if (argc < 2) {
    return 0;
  }
  
  char *end = NULL;
  long denom = strtol(argv[1], &end, 10);
  
  if (end == argv[1] || 0 != *end ||
      ((LONG_MIN == denom || LONG_MAX == denom) && errno == ERANGE)) {
    /* Handle error */
  }
  
  long result = 100 / denom;
  return 0;
}
