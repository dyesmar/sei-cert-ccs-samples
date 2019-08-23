#include <stdint.h>
#include <stdlib.h>
  
static int *table = NULL;
static size_t size = 0;
 
int insert_in_table(size_t pos, int value) {
  if (size <= pos) {
    if ((SIZE_MAX - 1 < pos) ||
        ((pos + 1) > SIZE_MAX / sizeof(*table))) {
      return -1;
    }
  
    int *tmp = (int *)realloc(table, sizeof(*table) * (pos + 1));
    if (tmp == NULL) {
      return -1;
    }
    /* Modify size only after realloc() succeeds */
    size  = pos + 1;
    table = tmp;
  }
 
  table[pos] = value;
  return 0;
}
