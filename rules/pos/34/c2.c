// POS34-C: Compliant Solution (setenv())
int func(const char *var) {
  return setenv("TEST", var, 1);
}
