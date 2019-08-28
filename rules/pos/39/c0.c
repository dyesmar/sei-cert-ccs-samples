// POS39-C: Compliant Solution
/* sock is a connected TCP socket */
 
uint32_t num;
 
if (recv(sock, (void *)&num, sizeof(uint32_t), 0) < (int)sizeof(uint32_t)) {
  /* Handle error */
}
 
num = ntohl(num);
printf("We recieved %u from the network!\n", (unsigned int)num);
