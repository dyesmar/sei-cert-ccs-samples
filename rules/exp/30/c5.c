extern void c(int i, int j);
int glob;
  
int a(void) {
  return glob + 10;
}
int b(void) {
  glob = 42;
  return glob;
}
  
void func(void) {
  int a_val, b_val;
  
  a_val = a();
  b_val = b();
 
  c(a_val, b_val);
}
