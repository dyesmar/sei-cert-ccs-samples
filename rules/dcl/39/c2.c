#include <stddef.h>
 
struct test {
  int a;
  char b;
  int c;
} __attribute__((__packed__));
 
/* Safely copy bytes to user space */
extern int copy_to_user(void *dest, void *src, size_t size);
 
void do_stuff(void *usr_buf) {
  struct test arg = {.a = 1, .b = 2, .c = 3};
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
