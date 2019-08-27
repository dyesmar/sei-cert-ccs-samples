// ENV34-C: Compliant Solution (Windows)
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
  
void func(void) {
  char *tmpvar;
  char *tempvar;
  size_t len;
 
  errno_t err = _dupenv_s(&tmpvar, &len, "TMP");
  if (err) {
    /* Handle error */
  }
  err = _dupenv_s(&tempvar, &len, "TEMP");
  if (err) {
    /* Handle error */
  }
 
  if (strcmp(tmpvar, tempvar) == 0) {
    printf("TMP and TEMP are the same.\n");
  } else {
    printf("TMP and TEMP are NOT the same.\n");
  }
  free(tmpvar);
  tmpvar = NULL;
  free(tempvar);
  tempvar = NULL;
}
