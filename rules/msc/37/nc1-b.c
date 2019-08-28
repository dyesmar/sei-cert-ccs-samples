#include <stdio.h>
 
size_t getlen(const int *input, size_t maxlen, int delim) {
  for (size_t i = 0; i < maxlen; ++i) {
    if (input[i] == delim) {
      return i;
    }
  }
}
 
int main(int argc, char **argv) {
  size_t i;
  int data[] = { 1, 1, 1 };
 
  i = getlen(data, sizeof(data), 0);
  printf("Returned: %zu\n", i);
  data[i] = 0;
 
  return 0;
}
