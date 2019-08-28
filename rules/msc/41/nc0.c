// MSC41-C: Noncompliant Code Example (Hard-Coded Database Password)
/* Returns nonzero if authenticated */
int authenticate(const char* code);
 
int main() {
  if (!authenticate("correct code")) {
    printf("Authentication error\n");
    return -1;
  }
 
  printf("Authentication successful\n");
  // ...Work with system...
  return 0;
}
