// INT36-C: Compliant Solution
unsigned int *g(void) {
  volatile uintptr_t iptr = 0xdeadbeef;
  unsigned int *ptr = (unsigned int *)iptr;
  /* ... */
  return ptr;
}
