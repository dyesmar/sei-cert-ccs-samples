// PRE31-C: Noncompliant Code Example
#define ABS(x) (((x) < 0) ? -(x) : (x))
 
void func(int n) {
  /* Validate that n is within the desired range */
  int m = ABS(++n);

  /* ... */
}
