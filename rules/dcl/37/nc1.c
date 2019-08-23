#include <stddef.h>
 
static const size_t _max_limit = 1024;
size_t _limit = 100;
 
unsigned int getValue(unsigned int count) {
  return count < _limit ? count : _limit;
}
