// DCL39-C: Noncompliant Code Example
#include <stddef.h>
 
struct test {
  unsigned a : 1;
  unsigned : 0;
  unsigned b : 4;
};
 
/* Safely copy bytes to user space */
extern int copy_to_user(void *dest, void *src, size_t size);
 
void do_stuff(void *usr_buf) {
  struct test arg = { .a = 1, .b = 10 };
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
