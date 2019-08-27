// ENV31-C: Compliant Solution (Windows)
#include <stdio.h>
#include <stdlib.h>
  
_CRTIMP extern char **_environ;
 
int main(int argc, const char *argv[]) {
  if (_putenv_s("MY_NEW_VAR", "new_value") != 0) {
    /* Handle error */
  }
  if (_environ != NULL) {
    for (size_t i = 0; _environ[i] != NULL; ++i) {
      puts(_environ[i]);
    }
  }
return 0;
}
