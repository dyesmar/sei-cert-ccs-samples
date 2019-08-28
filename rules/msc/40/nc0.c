// MSC40-C: Noncompliant Code Example (Inline, Internal Linkage)
static int I = 12;
extern inline void func(int a) {
  int b = a * I;
  /* ... */
}
