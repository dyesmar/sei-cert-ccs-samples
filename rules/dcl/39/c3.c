// DCL39-C: Compliant Solution (Structure Packing—Microsoft Visual Studio)
#include <stddef.h>
 
#pragma pack(push, 1) /* 1 byte */
struct test {
  int a;
  char b;
  int c;
};
#pragma pack(pop)
  
/* Safely copy bytes to user space */
extern int copy_to_user(void *dest, void *src, size_t size);
 
void do_stuff(void *usr_buf) {
  struct test arg = {1, 2, 3};
  copy_to_user(usr_buf, &arg, sizeof(arg));
}
