// FIO34-C: Noncompliant Code Example
#include <stdio.h>
  
void func(void) {
  int c;
  
  do {
    c = getchar();
  } while (c != EOF);
}
