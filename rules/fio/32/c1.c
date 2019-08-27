// FIO32-C: Compliant Solution (Windows)
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
static bool isReservedName(const char *path) {
  /* This list of reserved names comes from MSDN */
  static const char *reserved[] = {
    "nul", "con", "prn", "aux", "com1", "com2", "com3",
    "com4", "com5", "com6", "com7", "com8", "com9",
    "lpt1", "lpt2", "lpt3", "lpt4", "lpt5", "lpt6",
    "lpt7", "lpt8", "lpt9"
  };
  bool ret = false;
 
/*
 * First, check to see if this is a device namespace, which
 * always starts with \\.\, because device namespaces are not
 * valid file paths.
 */
 
  if (!path || 0 == strncmp(path, "\\\\.\\", 4)) {
    return true;
  }
 
  /* Compare against the list of ancient reserved names */
  for (size_t i = 0; !ret &&
       i < sizeof(reserved) / sizeof(*reserved); ++i) {
   /*
    * Because Windows uses a case-insensitive file system, operate on
    * a lowercase version of the given filename. Note: This ignores
    * globalization issues and assumes ASCII characters.
    */
    if (0 == _stricmp(path, reserved[i])) {
      ret = true;
    }
  }
  return ret;
}
