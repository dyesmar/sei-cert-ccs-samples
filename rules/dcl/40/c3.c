// DCL40-C: Compliant Solution (Incompatible Variadic Function Declarations)
/* In a.c */
void buginf(const char *fmt, ...) {
   /* ... */
}
 
/* In b.c */
void buginf(const char *fmt, ...);
