// FLP32-C: Noncompliant Code Example (sinh(), Range Errors)
#include <math.h>
  
void func(double x) {
  double result;
  result = sinh(x);
}
