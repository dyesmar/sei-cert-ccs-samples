// MSC37-C: Noncompliant Code Example
#include <stddef.h>
  
size_t getlen(const int *input, size_t maxlen, int delim) {
  for (size_t i = 0; i < maxlen; ++i) {
    if (input[i] == delim) {
      return i;
    }
  }
}
  
void func(int userdata) {
  size_t i;
  int data[] = { 1, 1, 1 };
  i = getlen(data, sizeof(data), 0);
  data[i] = userdata;
}
