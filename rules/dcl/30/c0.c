// DCL30-C: Compliant Solution (Same Storage Durations)
void this_is_OK(void) {
  const char c_str[] = "Everything OK";
  const char *p = c_str;
  /* ... */
}
/* p is inaccessible outside the scope of string c_str */
