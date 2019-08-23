/* In bashline.h */
/* UB 15, UB 31 */
extern char * bash_groupname_completion_function(const char *, int);
 
/* In a.c */
#include "bashline.h"
 
void f(const char *s, int i) {
  bash_groupname_completion_function(s, i);  /* UB 41 */
}
 
/* In b.c */
int bash_groupname_completion_funct;  /* UB 15, UB 31 */
