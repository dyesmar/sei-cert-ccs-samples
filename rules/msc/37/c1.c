#include <stddef.h>
  
int getlen(const int *input, size_t maxlen, int delim,
           size_t *result) {
  if (result == NULL) {
    return -1;
  }
  for (size_t i = 0; i < maxlen; ++i) {
    if (input[i] == delim) {
      *result = i;
      return 0;
    }
  }
  return -1;
}
 
void func(int userdata) {
  size_t i;
  int data[] = {1, 1, 1};
  if (getlen(data, sizeof(data), 0, &i) != 0) {
    /* Handle error */
  } else {
    data[i] = userdata;
  }
}
