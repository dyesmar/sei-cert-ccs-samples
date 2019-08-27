// INT34-C: Noncompliant Code Example (Left Shift, Unsigned Type)
void func(unsigned int ui_a, unsigned int ui_b) {
  unsigned int uresult = ui_a << ui_b;
  /* ... */
}
