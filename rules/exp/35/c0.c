// EXP35-C: Compliant Solution
#include <stdio.h>
 
struct X { char a[8]; };
  
struct X salutation(void) {
  struct X result = { "Hello" };
  return result;
}
 
struct X addressee(void) {
  struct X result = { "world" };
  return result;
}
 
int main(void) {
  struct X my_salutation = salutation();
  struct X my_addressee = addressee();
  
  printf("%s, %s!\n", my_salutation.a, my_addressee.a);
  return 0;
}
