// DCL40-C: Compliant Solution (Incompatible Object Declarations)
/* In a.c */
extern int i;  
 
int f(void) {
  return ++i;  
}
 
/* In b.c */
int i;
