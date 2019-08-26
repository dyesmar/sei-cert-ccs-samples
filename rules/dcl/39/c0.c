// DCL39-C: Compliant Solution
#include <stddef.h>
#include <string.h>
  
struct test {
  int a;
  char b;
  int c;
};
  
/* Safely copy bytes to user space */
extern int copy_to_user(void *dest, void *src, size_t size);
  
void do_stuff(void *usr_buf) {
  struct test arg = {.a = 1, .b = 2, .c = 3};
  /* May be larger than strictly needed */
  unsigned char buf[sizeof(arg)];
  size_t offset = 0;
   
  memcpy(buf + offset, &arg.a, sizeof(arg.a));
  offset += sizeof(arg.a);
  memcpy(buf + offset, &arg.b, sizeof(arg.b));
  offset += sizeof(arg.b);
  memcpy(buf + offset, &arg.c, sizeof(arg.c));
  offset += sizeof(arg.c);
  /* Set all remaining bytes to zero */
  memset(buff + offset, 0, sizeof(arg) - offset);
 
  copy_to_user(usr_buf, buf, offset /* size of info copied */);
} 
