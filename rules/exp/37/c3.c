/* In another source file */
  
long f(long x) {
  return x < 0 ? -x : x;
}
 
/* f prototype in scope in this source file */
 
long f(long x);
 
long g(int x) {
  return f((long)x); 
}
