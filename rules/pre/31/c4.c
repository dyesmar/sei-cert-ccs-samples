// PRE31-C: Compliant Solution (assert())
#include <assert.h>
#include <stddef.h>
  
void process(size_t index) {
  assert(index > 0); /* No side effect */
  ++index;
  /* ... */
}
