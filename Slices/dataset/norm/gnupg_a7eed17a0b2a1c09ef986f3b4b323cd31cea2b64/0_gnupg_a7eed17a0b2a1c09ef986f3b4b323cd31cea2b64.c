FUN1 (VAR1 *VAR2,
                         const unsigned char *VAR3, size_t VAR4)
{
  gpg_error_t VAR5;
  ksba_name_t VAR6;
  struct tag_info VAR7;
  const unsigned char *VAR8;
  size_t VAR9;
  int VAR10;
  char *VAR11;
  if (!VAR2 || !VAR3)
    return FUN2 (VAR12);
   *VAR2 = NULL;
   VAR8 = VAR3;
   VAR9 = VAR4;
  VAR10 = 0;
  while (VAR9)
    {
      VAR5 = FUN3 (&VAR8, &VAR9, &VAR7);
      if (VAR5)
        return VAR5;
      if (VAR7.class != VAR13)
        return FUN2 (VAR14);
      if (VAR7.VAR15)
        return FUN2 (VAR16);
      if (VAR9 < VAR7.VAR17)
        return FUN2 (VAR18);
      switch (VAR7.VAR19)
        {
        case 1:
        case 4:
        case 6:
          VAR10++;
          break;
        default:
          break;
        }
      VAR8 += VAR7.VAR17;
      VAR9 -= VAR7.VAR17;
    }
  VAR5 = FUN4 (&VAR6);
  if (VAR5)
    return VAR5;
  if (!VAR10)
    return 0;
  VAR6->VAR20 = FUN5 (VAR10, sizeof *VAR6->VAR20);
  if (!VAR6->VAR20)
    {
      FUN6 (VAR6);
      return FUN2 (VAR21);
    }
  VAR6->VAR22 = VAR10;
  VAR8 = VAR3;
  VAR9 = VAR4;
  VAR10 = 0;
  while (VAR9)
    {
      char VAR23[21];
      VAR5 = FUN3 (&VAR8, &VAR9, &VAR7);
      assert (!VAR5);
      switch (VAR7.VAR19)
        {
        case 1:
          VAR11 = VAR6->VAR20[VAR10] = FUN7 (VAR7.VAR17+3);
          if (!VAR11)
            {
              FUN6 (VAR6);
              return FUN2 (VAR21);
            }
          *VAR11++ = VAR24;
          memcpy (VAR11, VAR8, VAR7.VAR17);
          VAR11 += VAR7.VAR17;
          *VAR11++ = VAR24;
          *VAR11 = 0;
          VAR10++;
          break;
        case 4:
          VAR5 = FUN8 (VAR8, VAR7.VAR17, &VAR11);
          if (VAR5)
            return VAR5;
          VAR6->VAR20[VAR10++] = VAR11;
          break;
        case 6:
          sprintf (VAR23, VAR25, (unsigned int)VAR7.VAR17);
          VAR11 = VAR6->VAR20[VAR10] = FUN7 (1+5+strlen (VAR23)
                                           + VAR7.VAR17 +1+1);
          if (!VAR11)
            {
              FUN6 (VAR6);
              return FUN2 (VAR21);
            }
          VAR11 = stpcpy (VAR11, VAR25);
          VAR11 = stpcpy (VAR11, VAR23);
          memcpy (VAR11, VAR8, VAR7.VAR17);
          VAR11 += VAR7.VAR17;
          *VAR11++ = VAR24;
          *VAR11 = 0;
          VAR10++;
          break;
        default:
          break;
        }
      VAR8 += VAR7.VAR17;
      VAR9 -= VAR7.VAR17;
    }
  *VAR2 = VAR6;
  return 0;
}