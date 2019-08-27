// ARR30-C: Compliant Solution
#include <stddef.h>
  
enum { TABLESIZE = 100 };
 
static int table[TABLESIZE];
 
int *f(size_t index) {
  if (index < TABLESIZE) {
    return table + index;
  }
  return NULL;
}
