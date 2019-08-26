// EXP43-C: Compliant Solution 
void func(void) {
  int *restrict p1;  
  int *restrict q1;
  {  /* Added inner block */
    int *restrict p2 = p1; /* Valid, well-defined behavior */   
    int *restrict q2 = q1; /* Valid, well-defined behavior */
  }
}
