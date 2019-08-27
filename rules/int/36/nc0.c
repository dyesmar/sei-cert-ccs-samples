// INT36-C: Noncompliant Code Example
void f(void) {
  char *ptr;
  /* ... */
  unsigned int number = (unsigned int)ptr;
  /* ... */
}
