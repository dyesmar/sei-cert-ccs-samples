// DCL40-C: Compliant Solution (Incompatible Array Declarations)
/* In a.c */
extern int a[];  
 
int f(unsigned int i, int x) {
  int tmp = a[i];  
  a[i] = x;        
  return tmp;
}
 
/* In b.c */
int a[] = { 1, 2, 3, 4 };
