// FIO30-C: Compliant Solution (POSIX)
#include <syslog.h>
  
void incorrect_password(const char *user) {
  static const char msg_format[] = "%s cannot be authenticated.\n";
  syslog(LOG_INFO, msg_format, user);
}
