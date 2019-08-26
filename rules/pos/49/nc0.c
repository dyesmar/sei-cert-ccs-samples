struct multi_threaded_flags {
  unsigned int flag1 : 2;
  unsigned int flag2 : 2;
};
 
struct multi_threaded_flags flags;
 
void thread1(void) {
  flags.flag1 = 1;
}
 
void thread2(void) {
  flags.flag2 = 2;
}
