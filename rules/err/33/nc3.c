#include <stdio.h>
  
size_t read_at(FILE *file, long offset,
               void *buf, size_t nbytes) {
  fseek(file, offset, SEEK_SET);
  return fread(buf, 1, nbytes, file);
}
