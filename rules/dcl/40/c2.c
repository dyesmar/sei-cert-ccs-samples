// DCL40-C: Compliant Solution (Incompatible Function Declarations)
/* In a.c */
extern int f(int a);  
 
int g(int a) {
  return f(a);  
}
 
/* In b.c */
int f(int a) {  
  return a * 2;
}
