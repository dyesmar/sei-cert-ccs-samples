// INT36-C: Noncompliant Code Example
unsigned int *g(void) {
  unsigned int *ptr = 0xdeadbeef;
  /* ... */
  return ptr;
} 
