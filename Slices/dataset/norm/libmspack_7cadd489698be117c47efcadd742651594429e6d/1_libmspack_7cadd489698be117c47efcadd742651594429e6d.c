static char *FUN1(unsigned char *VAR1, unsigned char *VAR2,
			 int VAR3, int VAR4, int VAR5)
{
  unsigned char *VAR6, *VAR7, VAR8, *VAR9, VAR10, VAR11;
  unsigned int VAR12;
  VAR10   = (VAR4) ? VAR13  : VAR13;
  VAR11 = (VAR4) ? VAR13 : VAR13;
  VAR12 = strlen((char *) VAR1);
  if (VAR5) VAR12 *= 3;
  if (VAR2) VAR12 += strlen((char *) VAR2);
  if (!(VAR7 = (unsigned char *) malloc(VAR12 + 2))) {
    fprintf(VAR14, VAR15);
    return NULL;
  }
  *VAR7 = VAR13;
  if (VAR2) {
    strcpy((char *) VAR7, (char *) VAR2);
    strcat((char *) VAR7, VAR15);
  }
  while (*VAR1 == VAR10) VAR1++;
  VAR6 = &VAR7[strlen((char *)VAR7)];
  VAR9 = &VAR1[strlen((char *)VAR1)];
  if (VAR5) {
    do {
      if (VAR1 >= VAR9) {
	free(VAR7);
	return NULL;
      }
      if ((VAR8 = *VAR1++) < 0x80) VAR12 = VAR8;
      else {
	if ((VAR8 >= 0xC0) && (VAR8 < 0xE0)) {
	  VAR12 = (VAR8 & 0x1F) << 6;
	  VAR12 |= *VAR1++ & 0x3F;
	}
	else if ((VAR8 >= 0xE0) && (VAR8 < 0xF0)) {
	  VAR12 = (VAR8 & 0xF) << 12;
	  VAR12 |= (*VAR1++ & 0x3F) << 6;
	  VAR12 |= *VAR1++ & 0x3F;
	}
	else VAR12 = VAR13;
      }
      if      (VAR12 == VAR10)   VAR12 = VAR13;
      else if (VAR12 == VAR11) VAR12 = VAR13;
      else if (VAR3)      VAR12 = (unsigned int) FUN2((int) VAR12);
      if (VAR12 < 0x80) {
	*VAR6++ = (unsigned char) VAR12;
      }
      else if (VAR12 < 0x800) {
	*VAR6++ = 0xC0 | (VAR12 >> 6);
	*VAR6++ = 0x80 | (VAR12 & 0x3F);
      }
      else {
	*VAR6++ = 0xE0 | (VAR12 >> 12);
	*VAR6++ = 0x80 | ((VAR12 >> 6) & 0x3F);
	*VAR6++ = 0x80 | (VAR12 & 0x3F);
      }
    } while (VAR12);
  }
  else {
    do {
      VAR8 = *VAR1++;
      if      (VAR8 == VAR10)   VAR8 = VAR13;
      else if (VAR8 == VAR11) VAR8 = VAR13;
      else if (VAR3)      VAR8 = (unsigned char) FUN2((int) VAR8);
    } while ((*VAR6++ = VAR8));
  }
  return (char *) VAR7;
 }