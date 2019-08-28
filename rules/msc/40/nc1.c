// MSC40-C: Noncompliant Code Example (inline, Modifiable Static)
extern inline void func(void) {
  static int I = 12;
  /* Perform calculations which may modify I */
}
