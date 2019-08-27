// MEM30-C: Noncompliant Code Example
#include <stdlib.h>
  
struct node {
  int value;
  struct node *next;
};
  
void free_list(struct node *head) {
  for (struct node *p = head; p != NULL; p = p->next) {
    free(p);
  }
}
