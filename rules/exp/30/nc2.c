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
  c(a(), b());
}
