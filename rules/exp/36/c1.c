int *loop_function(int *v_pointer) {
  /* ... */
  return v_pointer;
}
  
void func(int *loop_ptr) {
  int *int_ptr = loop_function(loop_ptr);
 
  /* ... */
}
