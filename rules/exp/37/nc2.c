
/* In another source file */
long f(long x) {
  return x < 0 ? -x : x;
}
 
/* In this source file, no f prototype in scope */
long f();
  
long g(int x) {
  return f(x);
}
