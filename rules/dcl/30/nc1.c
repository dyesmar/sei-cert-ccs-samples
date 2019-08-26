// DCL30-C: Noncompliant Code Example (Return Values)
char *init_array(void) {
  char array[10];
  /* Initialize array */
  return array;
}
