#define PRECISION(value)  _Generic(value, \
  unsigned char : 8, \
  unsigned short: 16, \
  unsigned int : 32, \
  unsigned long : 32, \
  unsigned long long : 64, \
  signed char : 7, \
  signed short : 15, \
  signed int : 31, \
  signed long : 31, \
  signed long long : 63)
