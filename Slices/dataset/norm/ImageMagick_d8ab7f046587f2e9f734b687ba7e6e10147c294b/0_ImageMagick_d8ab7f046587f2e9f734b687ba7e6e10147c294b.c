 static inline const unsigned char *FUN1(const unsigned char *VAR1,
   unsigned int *VAR2)
 {
  *VAR2=(unsigned int) (*VAR1++) << 24;
  *VAR2|=(unsigned int) (*VAR1++) << 16;
  *VAR2|=(unsigned int) (*VAR1++) << 8;
  *VAR2|=(unsigned int) (*VAR1++) << 0;
   return(VAR1);
 }