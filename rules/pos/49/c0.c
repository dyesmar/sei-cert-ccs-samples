struct multi_threaded_flags {
  volatile unsigned int flag1 : 2;
  volatile unsigned int flag2 : 2;
};
 
union mtf_protect {
  struct multi_threaded_flags s;
  long padding;
};
 
static_assert(sizeof(long) >= sizeof(struct multi_threaded_flags));
 
struct mtf_mutex {
  union mtf_protect u;
  pthread_mutex_t mutex;
};
 
struct mtf_mutex flags;
 
void thread1(void) {
  int result;
  if ((result = pthread_mutex_lock(&flags.mutex)) != 0) {
    /* Handle error */
  }
  flags.u.s.flag1 = 1;
  if ((result = pthread_mutex_unlock(&flags.mutex)) != 0) {
    /* Handle error */
  }
}
 
void thread2(void) {
  int result;
  if ((result = pthread_mutex_lock(&flags.mutex)) != 0) {
    /* Handle error */
  }
  flags.u.s.flag2 = 2;
  if ((result = pthread_mutex_unlock(&flags.mutex)) != 0) {
    /* Handle error */
  }
}
