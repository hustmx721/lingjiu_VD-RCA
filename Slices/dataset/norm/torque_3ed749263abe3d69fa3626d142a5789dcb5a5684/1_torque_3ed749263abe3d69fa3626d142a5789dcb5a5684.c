int FUN1(
  int       VAR1,
  int      *VAR2,
  unsigned *VAR3,
  unsigned  VAR4)
  {
  int  VAR5;
  unsigned VAR6;
  unsigned VAR7;
  char  *VAR8;
  char  VAR9[VAR10+1];
  assert(VAR2 != NULL);
  assert(VAR3 != NULL);
  assert(VAR4);
  assert(VAR1 >= 0);
  assert(VAR11 != NULL);
  assert(VAR12 != NULL);
  memset(VAR9, 0, VAR10+1);
   if (VAR13 == 0)
     FUN2();
   switch (VAR5 = (*VAR11)(VAR1))
     {
    case VAR14:
    case VAR14:
      *VAR2 = VAR5 == VAR14;
      if ((*VAR12)(VAR1, VAR9, VAR4) != (int)VAR4)
        {
        return(VAR15);
        }
      if (VAR4 >= VAR13)
        {
        if (VAR4 > VAR13)
          goto VAR16;
        if (memcmp(VAR9, VAR17, VAR13) > 0)
          goto VAR16;
        }
      VAR8 = VAR9;
      VAR6 = 0;
      do
        {
        if (((VAR5 = *VAR8++) < VAR14) || (VAR5 > VAR14))
          {
          return(VAR18);
          }
        VAR6 = 10 * VAR6 + VAR5 - VAR14;
        }
      while (--VAR4);
      *VAR3 = VAR6;
      return (VAR19);
      break;
    case VAR14:
      return (VAR20);
      break;
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
    case VAR14:
      VAR7 = VAR5 - VAR14;
      if (VAR4 > 1)
        {
        if ((*VAR12)(VAR1, VAR9 + 1, VAR4 - 1) != (int)VAR4 - 1)
          {
          return(VAR15);
          }
        VAR8 = VAR9;
        if (VAR4 >= VAR13)
          {
          if (VAR4 > VAR13)
            break;
          *VAR8 = VAR5;
          if (memcmp(VAR9, VAR17, VAR13) > 0)
            break;
          }
        while (--VAR4)
          {
          if (((VAR5 = *++VAR8) < VAR14) || (VAR5 > VAR14))
            {
            return(VAR18);
            }
          VAR7 = 10 * VAR7 + VAR5 - VAR14;
          }
        }
      return(FUN1(VAR1, VAR2, VAR3, VAR7));
      break;
    case - 1:
      return(VAR15);
      break;
    case -2:
      return(VAR21);
      break;
    default:
      return(VAR18);
      break;
    }
  *VAR2 = VAR22;
VAR16:
  *VAR3 = VAR23;
  return(VAR24);
  }