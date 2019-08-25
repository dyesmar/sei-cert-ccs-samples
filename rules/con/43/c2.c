#include <stdio.h>
#include <stdatomic.h>
  
void doStuff(atomic_int *ps) {
  switch (atomic_load(ps)) {
    case 0: { printf("0"); break; }
    case 1: { printf("1"); break; }
    case 2: { printf("2"); break; }
    case 3: { printf("3"); break; }
    case 4: { printf("4"); break; }
    default: { printf("default"); break; }
  }
}
