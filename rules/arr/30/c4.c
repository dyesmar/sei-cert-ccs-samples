#include <stddef.h>
#define COLS 5
#define ROWS 7
static int matrix[ROWS][COLS];
 
void init_matrix(int x) {
  for (size_t i = 0; i < ROWS; i++) {
    for (size_t j = 0; j < COLS; j++) {
      matrix[i][j] = x;
    }
  }
}
