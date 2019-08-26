// DCL31-C: Noncompliant Code Example (Implicit Return Type)
#include <limits.h>
#include <stdio.h>
  
foo(void) {
  return UINT_MAX;
}
 
int main(void) {
  long long int c = foo();
  printf("%lld\n", c);
  return 0;
}
