#include <stdio.h>
  
void incorrect_password(const char *user) {
  static const char msg_format[] = "%s cannot be authenticated.\n";
  fprintf(stderr, msg_format, user);
}
