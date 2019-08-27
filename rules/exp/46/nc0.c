// EXP46-C: Noncompliant Code Example
if (!(getuid() & geteuid() == 0)) {
  /* ... */
} 
