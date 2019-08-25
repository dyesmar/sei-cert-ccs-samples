#include <stdlib.h>
#include <string.h>
  
enum { SIG_DESC_SIZE = 32 };
 
typedef struct {
  char sig_desc[SIG_DESC_SIZE];
} signal_info;
  
void func(size_t num_of_records, size_t temp_num,
          const char *tmp2, size_t tmp2_size_bytes) {
  signal_info *start = (signal_info *)calloc(num_of_records,
                                          sizeof(signal_info));
 
  if (tmp2 == NULL) {
    /* Handle error */
  } else if (temp_num > num_of_records) {
    /* Handle error */
  } else if (tmp2_size_bytes < SIG_DESC_SIZE) {
    /* Handle error */
  }
 
  signal_info *point = start + temp_num - 1;
  memcpy(point->sig_desc, tmp2, SIG_DESC_SIZE);
  point->sig_desc[SIG_DESC_SIZE - 1] = '\0';
  /* ... */
  free(start);
}
