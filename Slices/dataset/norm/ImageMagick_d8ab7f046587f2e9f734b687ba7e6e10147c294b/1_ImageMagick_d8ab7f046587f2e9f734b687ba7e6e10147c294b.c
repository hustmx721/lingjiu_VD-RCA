 static inline const unsigned char *FUN1(const unsigned char *VAR1,
   unsigned int *VAR2)
 {
  *VAR2=(VAR3) (*VAR1++ << 24);
  *VAR2|=(VAR3) (*VAR1++ << 16);
  *VAR2|=(VAR3) (*VAR1++ << 8);
  *VAR2|=(VAR3) (*VAR1++ << 0);
   return(VAR1);
 }