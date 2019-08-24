#include <stdio.h>
 
void func(void) {
  int c;
 
  do {
    c = getchar();
  } while (c != EOF);
  if (feof(stdin)) {
    /* Handle end of file */
  } else if (ferror(stdin)) {
    /* Handle file error */
  } else {
    /* Received a character that resembles EOF; handle error */
  }
}
