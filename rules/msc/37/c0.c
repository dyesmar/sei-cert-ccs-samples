// MSC37-C: Compliant Solution
#include <string.h>
#include <stdio.h>
  
int checkpass(const char *password) {
  if (strcmp(password, "pass") == 0) {
    return 1;
  }
  return 0;
}
 
void func(const char *userinput) {
  if (checkpass(userinput)) {
    printf("Success!\n");
  }
}
