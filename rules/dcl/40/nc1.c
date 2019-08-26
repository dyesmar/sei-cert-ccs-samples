// DCL40-C: Noncompliant Code Example (Incompatible Array Declarations)
/* In a.c */
extern int *a;   /* UB 15 */
 
int f(unsigned int i, int x) {
  int tmp = a[i];   /* UB 37: read access */
  a[i] = x;         /* UB 37: write access */
  return tmp;
}
 
/* In b.c */
int a[] = { 1, 2, 3, 4 };   /* UB 15 */
