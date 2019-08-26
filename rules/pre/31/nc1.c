// PRE31-C: Noncompliant Code Example (assert())
#include <assert.h>
#include <stddef.h>
  
void process(size_t index) {
  assert(index++ > 0); /* Side effect */
  /* ... */
}
