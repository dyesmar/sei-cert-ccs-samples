/* In a.c */
extern int f(int a);   /* UB 15 */
 
int g(int a) {
  return f(a);   /* UB 41 */
}
 
/* In b.c */
long f(long a) {   /* UB 15 */
  return a * 2;
}
