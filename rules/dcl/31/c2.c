// DCL31-C: Compliant Solution (Implicit Return Type)
#include <limits.h>
#include <stdio.h>
 
unsigned int foo(void) {
  return UINT_MAX;
}
 
int main(void) {
  long long int c = foo();
  printf("%lld\n", c);
  return 0;
}
