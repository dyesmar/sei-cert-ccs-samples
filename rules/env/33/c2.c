// ENV33-C: Compliant Solution (POSIX)
#include <pwd.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void func(void) {
  const char *file_format = "%s/.config";
  size_t len;
  char *pathname;
  struct passwd *pwd;
 
  /* Get /etc/passwd entry for current user */
  pwd = getpwuid(getuid());
  if (pwd == NULL) {
    /* Handle error */
  }
 
  /* Build full path name home dir from pw entry */
 
  len = strlen(pwd->pw_dir) + strlen(file_format) + 1;
  pathname = (char *)malloc(len);
  if (NULL == pathname) {
    /* Handle error */
  }
  int r = snprintf(pathname, len, file_format, pwd->pw_dir);
  if (r < 0 || r >= len) {
    /* Handle error */
  }
  if (unlink(pathname) != 0) {
    /* Handle error */
  }
 
  free(pathname);
}
