// MSC40-C: Compliant Solution (Inline, Internal Linkage)
int I = 12;
extern inline void func(int a) {
  int b = a * I;
  /* ... */
}
