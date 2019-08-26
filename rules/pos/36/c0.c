/*  Drop superuser privileges in correct order */
 
if (setgid(getgid()) == -1) {
  /* handle error condition */
}
if (setuid(getuid()) == -1) {
  /* handle error condition */
}
 
/*
 * Not possible to regain group privileges due to correct relinquishment order
 */
