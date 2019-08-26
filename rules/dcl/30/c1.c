// DCL30-C: Compliant Solution (Differing Storage Durations)
const char *p;
void is_this_OK(void) {
  const char c_str[] = "Everything OK?";
  p = c_str;
  /* ... */
  p = NULL;
}
