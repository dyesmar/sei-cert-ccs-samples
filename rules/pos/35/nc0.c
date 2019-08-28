// POS35-C: Noncompliant Code Example
char *filename = /* file name */;
char *userbuf = /* user data */;
unsigned int userlen = /* length of userbuf string */;
 
struct stat lstat_info;
int fd;
/* ... */
if (lstat(filename, &lstat_info) == -1) {
  /* Handle error */
}
 
if (!S_ISLNK(lstat_info.st_mode)) {
   fd = open(filename, O_RDWR);
   if (fd == -1) {
       /* Handle error */
   }
}
if (write(fd, userbuf, userlen) < userlen) {
  /* Handle error */
}
