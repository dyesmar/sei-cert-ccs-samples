/* sock is a connected TCP socket */
 
uint32_t num;
 
if (recv(sock, (void *)&num, sizeof(uint32_t), 0) < (int)sizeof(uint32_t)) {
  /* Handle error */
}
 
printf("We received %u from the network!\n", (unsigned int)num);
