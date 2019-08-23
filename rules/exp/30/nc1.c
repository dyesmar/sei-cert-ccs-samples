#include <stdio.h>
 
void func(int i, int *b) {
  int a = i + b[++i];
  printf("%d, %d", a, i);
}
