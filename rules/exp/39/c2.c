// EXP39-C: Compliant Solution
#include <stdlib.h>
#include <string.h>
  
struct gadget {
  int i;
  double d;
  char *p;
};
  
struct widget {
  char *q;
  int j;
  double e;
};
  
void func(void) {
  struct gadget *gp;
  struct widget *wp;
  
  gp = (struct gadget *)malloc(sizeof (struct gadget));
  if (!gp) {
    /* Handle error */
  }
  /* ... */
  wp = (struct widget *)realloc(gp, sizeof(struct widget));
  if (!wp) {
    free(gp);
    /* Handle error */
  }
  memset(wp, 0, sizeof(struct widget));
  /* ... Initialize widget ... */
 
  if (wp->j == 12) {
    /* ... */
  }
  /* ... */
  free(wp);
}
