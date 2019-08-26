// DCL40-C: Noncompliant Code Example (Incompatible Variadic Function Declarations)
/* In a.c */
void buginf(const char *fmt, ...) {
   /* ... */
}
  
/* In b.c */
void buginf();
