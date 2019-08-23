int dtls1_process_heartbeat(SSL *s) {        
  unsigned char *p = &s->s3->rrec.data[0], *pl;
  unsigned short hbtype;
  unsigned int payload;
  unsigned int padding = 16; /* Use minimum padding */
  
  /* ... More code ... */
  
  /* Read type and payload length first */
  if (1 + 2 + 16 > s->s3->rrec.length)
    return 0; /* Silently discard */
  hbtype = *p++;
  n2s(p, payload);
  if (1 + 2 + payload + 16 > s->s3->rrec.length)
    return 0; /* Silently discard per RFC 6520 */
  pl = p;
  
  /* ... More code ... */
  
  if (hbtype == TLS1_HB_REQUEST) {
    unsigned char *buffer, *bp;
    int r;
  
    /*
     * Allocate memory for the response; size is 1 byte
     * message type, plus 2 bytes payload length, plus
     * payload, plus padding.
     */
    buffer = OPENSSL_malloc(1 + 2 + payload + padding);
    bp = buffer;
    /* Enter response type, length, and copy payload */
    *bp++ = TLS1_HB_RESPONSE;
    s2n(payload, bp);
    memcpy(bp, pl, payload);
    /* ... More code ... */
  }
  /* ... More code ... */
}
