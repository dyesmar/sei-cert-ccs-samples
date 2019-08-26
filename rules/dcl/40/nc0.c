// DCL40-C: Noncompliant Code Example (Incompatible Object Declarations)
/* In a.c */
extern int i;   /* UB 15 */
 
int f(void) {
  return ++i;   /* UB 37 */
}
 
/* In b.c */
short i;   /* UB 15 */
