// EXP46-C: Compliant Solution
if (!(getuid() && geteuid() == 0)) {
  /* ... */
}
