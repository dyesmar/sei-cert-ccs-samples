#include <stdlib.h>
  
static int *table = NULL;
static size_t size = 0;
 
int insert_in_table(size_t pos, int value) {
  if (size < pos) {
    int *tmp;
    size = pos + 1;
    tmp = (int *)realloc(table, sizeof(*table) * size);
    if (tmp == NULL) {
      return -1;   /* Failure */
    }
    table = tmp;
  }
 
  table[pos] = value;
  return 0;
}
