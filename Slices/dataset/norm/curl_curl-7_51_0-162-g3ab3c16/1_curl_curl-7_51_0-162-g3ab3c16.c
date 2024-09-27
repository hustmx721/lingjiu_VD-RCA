static int FUN1(
  void *VAR1,
  int (*VAR2)(int, VAR3 *),
  const char *VAR4,
  va_list VAR5)
{
  const char *VAR6 = VAR7;
  char *VAR8;
  int VAR9 = 0;
  long VAR10;
  long VAR11=0;
  va_stack_t VAR12[VAR13];
  char *VAR14[VAR13];
  char **VAR15;
  char VAR16[VAR17];
  VAR18 *VAR19;
  char *VAR20 = &VAR16[sizeof(VAR16) - 2];
  if(FUN2(VAR4, VAR12, VAR14, VAR5))
    return -1;
  VAR15 = &VAR14[0];
  VAR8 = (char *)VAR4;
  while(*VAR8 != VAR21) {
    int VAR22;
    long VAR23;
    long VAR24;
    int VAR25;
    long VAR26;
    mp_uintmax_t VAR27;
    mp_intmax_t VAR28;
    char *VAR29;
    if(*VAR8 != VAR21) {
      do {
        FUN3(*VAR8);
      } while(*++VAR8 && (VAR21 != *VAR8));
      continue;
    }
    ++VAR8;
    if(*VAR8 == VAR21) {
      ++VAR8;
      FUN3(VAR21);
      continue;
    }
    VAR10=FUN4(VAR8, &VAR8);
    if(!VAR10)
      VAR10 = VAR11;
    else
      --VAR10;
    VAR11++;
    VAR19 = &VAR12[VAR10];
    if(VAR19->VAR30 & VAR31) {
      VAR23 = (long)VAR12[VAR19->VAR23].VAR1.VAR27.VAR32;
      VAR11++;
      if(VAR23 < 0) {
        VAR23 = -VAR23;
        VAR19->VAR30 |= VAR33;
        VAR19->VAR30 &= ~VAR34;
      }
    }
    else
      VAR23 = VAR19->VAR23;
    if(VAR19->VAR30 & VAR35) {
      VAR24 = (long)VAR12[VAR19->VAR36].VAR1.VAR27.VAR32;
      VAR11++;
      if(VAR24 < 0)
        VAR24 = -1;
    }
    else if(VAR19->VAR30 & VAR37)
      VAR24 = VAR19->VAR36;
    else
      VAR24 = -1;
    VAR22 = (VAR19->VAR30 & VAR38) ? 1 : 0;
    switch(VAR19->VAR39) {
    case VAR40:
      VAR27 = VAR19->VAR1.VAR27.VAR41;
      if(VAR19->VAR30 & VAR42) {
        if(!(VAR19->VAR30 & VAR33))
          while(--VAR23 > 0)
            FUN3(VAR21);
        FUN3((char) VAR27);
        if(VAR19->VAR30 & VAR33)
          while(--VAR23 > 0)
            FUN3(VAR21);
        break;
      }
      if(VAR19->VAR30 & VAR43) {
        VAR26 = 8;
        goto VAR44;
      }
      else if(VAR19->VAR30 & VAR45) {
        VAR6 = (VAR19->VAR30 & VAR46)? VAR47 : VAR7;
        VAR26 = 16;
        goto VAR44;
      }
      else if(VAR19->VAR30 & VAR48) {
        VAR26 = 10;
        goto VAR44;
      }
      VAR26 = 10;
      VAR25 = (VAR19->VAR1.VAR27.VAR32 < (VAR49)0) ? 1 : 0;
      if(VAR25) {
        VAR28 = VAR19->VAR1.VAR27.VAR32 + (VAR49)1;
        VAR28 = -VAR28;
        VAR27 = (VAR50)VAR28;
        VAR27 += (VAR50)1;
      }
      goto VAR51;
      VAR44:
      VAR25 = 0;
      VAR51:
      if(VAR24 == -1)
        VAR24 = 1;
      VAR29 = VAR20;
      while(VAR27 > 0) {
        *VAR29-- = VAR6[VAR27 % VAR26];
        VAR27 /= VAR26;
      }
      VAR23 -= (long)(VAR20 - VAR29);
      VAR24 -= (long)(VAR20 - VAR29);
      if(VAR22 && VAR26 == 8 && VAR24 <= 0) {
        *VAR29-- = VAR21;
        --VAR23;
      }
      if(VAR24 > 0) {
        VAR23 -= VAR24;
        while(VAR24-- > 0)
          *VAR29-- = VAR21;
      }
      if(VAR22 && VAR26 == 16)
        VAR23 -= 2;
      if(VAR25 || (VAR19->VAR30 & VAR52) || (VAR19->VAR30 & VAR53))
        --VAR23;
      if(!(VAR19->VAR30 & VAR33) && !(VAR19->VAR30 & VAR34))
        while(VAR23-- > 0)
          FUN3(VAR21);
      if(VAR25)
        FUN3(VAR21);
      else if(VAR19->VAR30 & VAR52)
        FUN3(VAR21);
      else if(VAR19->VAR30 & VAR53)
        FUN3(VAR21);
      if(VAR22 && VAR26 == 16) {
        FUN3(VAR21);
        if(VAR19->VAR30 & VAR46)
          FUN3(VAR21);
        else
          FUN3(VAR21);
      }
      if(!(VAR19->VAR30 & VAR33) && (VAR19->VAR30 & VAR34))
        while(VAR23-- > 0)
          FUN3(VAR21);
      while(++VAR29 <= VAR20) {
        FUN3(*VAR29);
      }
      if(VAR19->VAR30 & VAR33)
        while(VAR23-- > 0)
          FUN3(VAR21);
      break;
    case VAR54:
      {
        static const char VAR55[] = VAR56;
        const char *VAR57;
        size_t VAR58;
        VAR57 = (char *) VAR19->VAR1.VAR57;
        if(VAR57 == NULL) {
          if(VAR24 == -1 || VAR24 >= (long) sizeof(VAR55) - 1) {
            VAR57 = VAR55;
            VAR58 = sizeof(VAR55) - 1;
            VAR19->VAR30 &= (~VAR38);
          }
          else {
            VAR57 = VAR56;
            VAR58 = 0;
          }
        }
        else if(VAR24 != -1)
          VAR58 = (VAR59)VAR24;
        else
          VAR58 = strlen(VAR57);
        VAR23 -= (VAR58 > VAR60) ? VAR60 : (long)VAR58;
        if(VAR19->VAR30 & VAR38)
          FUN3(VAR21);
        if(!(VAR19->VAR30&VAR33))
          while(VAR23-- > 0)
            FUN3(VAR21);
        while((VAR58-- > 0) && *VAR57)
          FUN3(*VAR57++);
        if(VAR19->VAR30&VAR33)
          while(VAR23-- > 0)
            FUN3(VAR21);
        if(VAR19->VAR30 & VAR38)
          FUN3(VAR21);
      }
      break;
    case VAR61:
      {
        void *VAR62;
        VAR62 = (void *) VAR19->VAR1.VAR62;
        if(VAR62 != NULL) {
          VAR26 = 16;
          VAR6 = (VAR19->VAR30 & VAR46)? VAR47 : VAR7;
          VAR22 = 1;
          VAR27 = (VAR59) VAR62;
          VAR25 = 0;
          goto VAR51;
        }
        else {
          static const char VAR63[] = VAR56;
          const char *VAR64;
          VAR23 -= (long)(sizeof(VAR63) - 1);
          if(VAR19->VAR30 & VAR33)
            while(VAR23-- > 0)
              FUN3(VAR21);
          for(VAR64 = VAR63; *VAR64 != VAR21; ++VAR64)
            FUN3(*VAR64);
          if(! (VAR19->VAR30 & VAR33))
            while(VAR23-- > 0)
              FUN3(VAR21);
        }
      }
      break;
    case VAR65:
      {
        char VAR66[32]=VAR56;
        char *VAR67 = &VAR66[1];
        size_t VAR68 = sizeof(VAR66)-strlen(VAR66);
        int VAR58;
        VAR23 = -1;
        if(VAR19->VAR30 & VAR69)
          VAR23 = VAR19->VAR23;
        else if(VAR19->VAR30 & VAR31)
          VAR23 = (long)VAR12[VAR19->VAR23].VAR1.VAR27.VAR32;
        VAR24 = -1;
        if(VAR19->VAR30 & VAR37)
          VAR24 = VAR19->VAR36;
        else if(VAR19->VAR30 & VAR35)
          VAR24 = (long)VAR12[VAR19->VAR36].VAR1.VAR27.VAR32;
        if(VAR19->VAR30 & VAR33)
          *VAR67++ = VAR21;
        if(VAR19->VAR30 & VAR52)
          *VAR67++ = VAR21;
        if(VAR19->VAR30 & VAR53)
          *VAR67++ = VAR21;
        if(VAR19->VAR30 & VAR38)
          *VAR67++ = VAR21;
         *VAR67 = 0;
         if(VAR23 >= 0) {
           VAR58 = FUN5(VAR67, VAR68, VAR56, VAR23);
           VAR67 += VAR58;
           VAR68 -= VAR58;
         }
         if(VAR24 >= 0) {
           VAR58 = FUN5(VAR67, VAR68, VAR56, VAR24);
           VAR67 += VAR58;
        }
        if(VAR19->VAR30 & VAR70)
          *VAR67++ = VAR21;
        if(VAR19->VAR30 & VAR71)
          *VAR67++ = (char)((VAR19->VAR30 & VAR46) ? VAR21:VAR21);
        else if(VAR19->VAR30 & VAR72)
          *VAR67++ = (char)((VAR19->VAR30 & VAR46) ? VAR21 : VAR21);
        else
          *VAR67++ = VAR21;
        *VAR67 = 0;
         (sprintf)(VAR16, VAR66, VAR19->VAR1.VAR73);
         for(VAR67=VAR16; *VAR67; VAR67++)
           FUN3(*VAR67);
       }
      break;
    case VAR74:
#ifdef VAR75
      if(VAR19->VAR30 & VAR76)
        *(VAR77 *) VAR19->VAR1.VAR62 = (VAR77)VAR9;
      else
#VAR78
        if(VAR19->VAR30 & VAR70)
          *(long *) VAR19->VAR1.VAR62 = (long)VAR9;
      else if(!(VAR19->VAR30 & VAR79))
        *(int *) VAR19->VAR1.VAR62 = (int)VAR9;
      else
        *(short *) VAR19->VAR1.VAR62 = (short)VAR9;
      break;
    default:
      break;
    }
    VAR8 = *VAR15++;
  }
  return VAR9;
}