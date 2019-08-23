#include <stdint.h>
#include <stdio.h>
  
struct obj {
  char c;
  long long i;
};
  
void func(FILE *f, struct obj *objs, size_t num_objs) {
  const size_t obj_size = 16;
  if (num_objs > (SIZE_MAX / obj_size) ||
      num_objs != fwrite(objs, obj_size, num_objs, f)) {
    /* Handle error */
  }
}
