// POS30-C: Noncompliant Code Example
char buf[1024];
ssize_t len = readlink("/usr/bin/perl", buf, sizeof(buf));
buf[len] = '\0';
