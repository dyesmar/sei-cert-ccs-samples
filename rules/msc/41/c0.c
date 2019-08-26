/* Returns nonzero if authenticated */
int authenticate(const char* code);
 
int main() {
#define CODE_LEN 50
  char code[CODE_LEN];
  printf("Please enter your authentication code:\n");
  fgets(code, sizeof(code), stdin);
  int flag = authenticate(code);
  memset_s(code, 0, sizeof(code));
  if (!flag) {
    printf("Access denied\n");
    return -1;
  }
  printf("Access granted\n");
  // ...Work with system...
  return 0;
}
