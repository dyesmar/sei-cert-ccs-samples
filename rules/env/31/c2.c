#if defined (_POSIX_) || defined (__USE_POSIX)
  extern char **environ;
  #define envp environ
#elif defined(_WIN32)
  _CRTIMP extern char **_environ;
  #define envp _environ
#endif
 
int main(int argc, char *argv[]) {
  /* ... */
}
