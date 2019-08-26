// DCL39-C: Compliant Solution (Padding Bytes)
#include <assert.h>
#include <stddef.h>
 
struct test {
  int a;
  char b;
  char padding_1, padding_2, padding_3;
  int c;
};
 
/* Safely copy bytes to user space */
extern int copy_to_user(void *dest, void *src, size_t size);
 
void do_stuff(void *usr_buf) {
  /* Ensure c is the next byte after the last padding byte */
  static_assert(offsetof(struct test, c) ==
                offsetof(struct test, padding_3) + 1,
                "Structure contains intermediate padding");
  /* Ensure there is no trailing padding */
  static_assert(sizeof(struct test) ==
                offsetof(struct test, c) + sizeof(int),
                "Structure contains trailing padding");
  struct test arg = {.a = 1, .b = 2, .c = 3};
  arg.padding_1 = 0;
  arg.padding_2 = 0;
  arg.padding_3 = 0;
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
