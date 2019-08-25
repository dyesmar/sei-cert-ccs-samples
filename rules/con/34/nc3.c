#include <omp.h>
#include <stdio.h>
  
int main(void) {
  int j = 0;
  #pragma omp parallel
  {
    int t = omp_get_thread_num();
    printf("Running thread - %d\n", t);
    for (int i = 0; i < 5050; i++) {
    j++; /* j not private; could be a race condition */
    }
    printf("Just ran thread - %d\n", t);
    printf("loop count %d\n", j);
  }
return 0;
}
