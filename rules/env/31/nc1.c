#include <stdio.h>
#include <stdlib.h>
  
int main(int argc, const char *argv[], const char *envp[]) {
  if (_putenv_s("MY_NEW_VAR", "new_value") != 0) {
    /* Handle error */
  }
  if (envp != NULL) {
    for (size_t i = 0; envp[i] != NULL; ++i) {
      puts(envp[i]);
    }
  }
  return 0;
}
