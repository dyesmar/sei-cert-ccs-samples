// FLP32-C: Compliant Solution (sinh(), Range Errors)
#include <math.h>
#include <fenv.h>
#include <errno.h>
  
void func(double x) { 
  double result;
  {
    #pragma STDC FENV_ACCESS ON
    if (math_errhandling & MATH_ERREXCEPT) {
      feclearexcept(FE_ALL_EXCEPT);
    }
    errno = 0;
 
    result = sinh(x);
 
    if ((math_errhandling & MATH_ERRNO) && errno != 0) {
      /* Handle range error */
    } else if ((math_errhandling & MATH_ERREXCEPT) &&
               fetestexcept(FE_INVALID | FE_DIVBYZERO |
                            FE_OVERFLOW | FE_UNDERFLOW) != 0) {
      /* Handle range error */
    }
  }
  
  /* Use result... */
}
