// POS34-C: Compliant Solution (Heap Memory)
int func(const char *var) {
  static char *oldenv;
  const char *env_format = "TEST=%s";
  const size_t len = strlen(var) + strlen(env_format);
  char *env = (char *) malloc(len);
  if (env == NULL) {
    return -1;
  }
  int retval = snprintf(env, len, env_format, var);
  if (retval < 0 || (size_t)retval >= len) {
    /* Handle error */
  }
  if (putenv(env) != 0) {
    free(env);
    return -1;
  }
  if (oldenv != NULL) {
    free(oldenv); /* avoid memory leak */
  }
  oldenv = env;
  return 0;
}
