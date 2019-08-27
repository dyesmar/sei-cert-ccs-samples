// FLP32-C: Compliant Solution (sqrt())
#include <math.h>
  
void func(double x) {
  double result;
 
  if (isless(x, 0.0)) {
    /* Handle domain error */
  }
 
  result = sqrt(x);
}
