#include <stdlib.h>
#include <wchar.h>
  
wchar_t *cur_msg = NULL;
size_t cur_msg_size = 1024;
size_t cur_msg_len = 0;
 
void lessen_memory_usage(void) {
  wchar_t *temp;
  size_t temp_size;
 
  /* ... */
 
  if (cur_msg != NULL) {
    temp_size = cur_msg_size / 2 + 1;
    temp = realloc(cur_msg, temp_size * sizeof(wchar_t));
    /* temp &and cur_msg may no longer be null-terminated */
    if (temp == NULL) {
      /* Handle error */
    }
 
    cur_msg = temp;
    cur_msg_size = temp_size;
    cur_msg_len = wcslen(cur_msg);
  }
}
