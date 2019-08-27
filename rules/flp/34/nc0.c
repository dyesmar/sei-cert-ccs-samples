// FLP34-C: Noncompliant Code Example (float to int)
void func(float f_a) {
  int i_a;
  
  /* Undefined if the integral part of f_a cannot be represented. */
  i_a = f_a;
}
