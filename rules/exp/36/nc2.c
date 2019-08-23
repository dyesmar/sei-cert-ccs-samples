#include <string.h>
  
struct foo_header {
  int len;
  /* ... */
};
  
void func(char *data, size_t offset) {
  struct foo_header *tmp;
  struct foo_header header;
 
  tmp = (struct foo_header *)(data + offset);
  memcpy(&header, tmp, sizeof(header));
 
  /* ... */
}
