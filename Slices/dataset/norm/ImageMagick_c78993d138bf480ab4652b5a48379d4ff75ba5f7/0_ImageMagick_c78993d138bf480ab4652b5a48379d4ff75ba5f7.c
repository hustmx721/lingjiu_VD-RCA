static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
#VAR6 FUN2(VAR7,VAR8,VAR9) \
  (((VAR9) != 0) && ((VAR7)/((VAR10) VAR9) != ((VAR10) VAR8)))
  char
    *VAR11;
  VAR1
    *VAR12;
  int
    VAR13;
  VAR14
    VAR15;
  VAR16
    VAR17;
  VAR18
    VAR19;
  register VAR20
    VAR21;
  register VAR18
    *VAR22;
  register VAR20
    VAR23;
  register VAR10
    VAR24;
  VAR10
    VAR7;
  VAR20
    VAR25,
    VAR26;
  unsigned long
    VAR27;
  VAR28
    *VAR29;
  VAR30
    *VAR31;
  VAR32
    VAR33;
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR34 == VAR35);
  if (VAR3->VAR36 != VAR37)
    (void) FUN3(VAR38,FUN4(),VAR39,
      VAR3->VAR40);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR34 == VAR35);
  VAR12=FUN5(VAR3,VAR5);
  VAR17=FUN6(VAR3,VAR12,VAR41,VAR5);
  if (VAR17 == VAR37)
    {
      VAR12=FUN7(VAR12);
      return((VAR1 *) NULL);
    }
  VAR25=FUN8(VAR12,VAR42,(unsigned char *) &VAR33);
  if (VAR25 != VAR42)
    FUN9(VAR43,VAR39);
  VAR27=1;
  if ((int) (*(char *) &VAR27) != 0)
    FUN10((unsigned char *) &VAR33,VAR42);
  if (VAR33.VAR44 != VAR45)
     FUN9(VAR43,VAR39);
   if (VAR33.VAR46 < VAR42)
     FUN9(VAR43,VAR39);
  if ((VAR47) VAR33.VAR48 >= FUN11(VAR12))
    FUN9(VAR43,VAR39);
   switch (VAR33.VAR49)
   {
     case VAR50:
    case VAR51:
    {
      if (VAR33.VAR52 != 1)
        FUN9(VAR43,VAR39);
      break;
    }
    case VAR53:
     case VAR54:
     {
       if ((VAR33.VAR52 < 1) || (VAR33.VAR52 > 15) ||
          (VAR33.VAR55 == 0))
         FUN9(VAR43,VAR39);
       break;
     }
    case VAR56:
    case VAR57:
    {
      if ((VAR33.VAR52 != 16) && (VAR33.VAR52 != 24) &&
          (VAR33.VAR52 != 32))
        FUN9(VAR43,VAR39);
      break;
    }
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR58)
  {
    case VAR59:
    {
      if (VAR33.VAR60 != 1)
        FUN9(VAR43,VAR39);
      break;
    }
    case VAR61:
    case VAR62:
    {
      if ((VAR33.VAR60 < 1) || (VAR33.VAR60 > 32))
        FUN9(VAR43,VAR39);
      switch (VAR33.VAR63)
      {
        case 8:
        case 16:
        case 32:
          break;
        default:
          FUN9(VAR43,VAR39);
      }
      break;
    }
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR64)
  {
    case 8:
    case 16:
    case 32:
      break;
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR65)
  {
    case VAR66:
    case VAR67:
      break;
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR68)
  {
    case VAR66:
    case VAR67:
      break;
     default:
       FUN9(VAR43,VAR39);
   }
   if (((VAR33.VAR63 % 8) != 0) || (VAR33.VAR63 > 32))
     FUN9(VAR43,VAR39);
   VAR7=(VAR10) (VAR33.VAR46-VAR42);
  VAR11=(char *) FUN12(VAR7+1,sizeof(*VAR11));
  if (VAR11 == (char *) NULL)
    FUN9(VAR69,VAR39);
  VAR25=FUN8(VAR12,VAR7,(unsigned char *) VAR11);
  VAR11[VAR7]=VAR70;
  (void) FUN13(VAR12,VAR39,VAR11,VAR5);
  VAR11=FUN14(VAR11);
  if (VAR25 != (VAR20) VAR7)
    FUN9(VAR43,VAR39);
  VAR31=(VAR30 *) FUN15(sizeof(*VAR31));
  if (VAR31 == (VAR30 *) NULL)
    FUN9(VAR69,VAR39);
  VAR31->VAR71=(int) VAR33.VAR60;
  VAR31->VAR72=(int) VAR33.VAR58;
  VAR31->VAR48=(int) VAR33.VAR48;
  VAR31->VAR73=(char *) NULL;
  VAR31->VAR8=(int) VAR33.VAR74;
  VAR31->VAR9=(int) VAR33.VAR75;
  VAR31->VAR63=(int) VAR33.VAR63;
  VAR31->VAR76=(int) VAR33.VAR76;
  VAR31->VAR65=(int) VAR33.VAR65;
  VAR31->VAR64=(int) VAR33.VAR64;
  VAR31->VAR68=(int) VAR33.VAR68;
  VAR31->VAR52=(int) VAR33.VAR52;
  VAR31->VAR77=VAR33.VAR77;
  VAR31->VAR78=VAR33.VAR78;
  VAR31->VAR79=VAR33.VAR79;
  if ((VAR31->VAR8 < 0) || (VAR31->VAR9 < 0) || (VAR31->VAR71 < 0) ||
      (VAR31->VAR72 < 0) || (VAR31->VAR65 < 0) ||
      (VAR31->VAR68 < 0) || (VAR31->VAR63 < 0) ||
      (VAR31->VAR76 < 0))
    {
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  if ((VAR31->VAR8 > 65535) || (VAR31->VAR9 > 65535))
    {
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  if ((VAR31->VAR52 > 32) || (VAR31->VAR64 > 32))
    {
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR13=FUN17(VAR31);
  if (VAR13 == 0)
    {
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR15=VAR37;
  VAR29=(VAR28 *) NULL;
  if (VAR33.VAR80 != 0)
    {
       VAR81
         VAR82;
      VAR7=(VAR10) VAR33.VAR80;
      if (VAR7 > ((~0UL)/sizeof(*VAR29)))
        FUN9(VAR43,VAR39);
      VAR29=(VAR28 *) FUN12(VAR7,sizeof(*VAR29));
       if (VAR29 == (VAR28 *) NULL)
         {
           VAR31=(VAR30 *) FUN16(VAR31);
          FUN9(VAR69,VAR39);
        }
      for (VAR23=0; VAR23 < (VAR20) VAR33.VAR80; VAR23++)
      {
        VAR25=FUN8(VAR12,VAR83,(unsigned char *) &VAR82);
        if (VAR25 != VAR83)
          {
            VAR29=(VAR28 *) FUN16(VAR29);
            VAR31=(VAR30 *) FUN16(VAR31);
            FUN9(VAR43,VAR39);
          }
        VAR29[VAR23].VAR24=VAR82.VAR24;
        VAR29[VAR23].VAR84=VAR82.VAR84;
        VAR29[VAR23].VAR85=VAR82.VAR85;
        VAR29[VAR23].VAR86=VAR82.VAR86;
        VAR29[VAR23].VAR87=(char) VAR82.VAR87;
        if (VAR82.VAR87 != 0)
          VAR15=VAR88;
      }
      VAR27=1;
      if ((int) (*(char *) &VAR27) != 0)
        for (VAR23=0; VAR23 < (VAR20) VAR33.VAR80; VAR23++)
        {
          FUN10((unsigned char *) &VAR29[VAR23].VAR24,
            sizeof(VAR29[VAR23].VAR24));
          FUN18((unsigned char *) &VAR29[VAR23].VAR84,3*
            sizeof(VAR29[VAR23].VAR84));
        }
    }
  VAR7=(VAR10) VAR31->VAR76*VAR31->VAR9;
  if (FUN2(VAR7,VAR31->VAR76,VAR31->VAR9))
    {
      if (VAR33.VAR80 != 0)
        VAR29=(VAR28 *) FUN16(VAR29);
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  if (VAR31->VAR72 != VAR62)
    {
      VAR10
        VAR89;
      VAR89=VAR7;
      VAR7*=VAR31->VAR71;
      if (FUN2(VAR7,VAR89,VAR31->VAR71))
        {
          if (VAR33.VAR80 != 0)
            VAR29=(VAR28 *) FUN16(VAR29);
          VAR31=(VAR30 *) FUN16(VAR31);
          FUN9(VAR43,VAR39);
        }
    }
  VAR31->VAR73=(char *) FUN12(VAR7,sizeof(*VAR31->VAR73));
  if (VAR31->VAR73 == (char *) NULL)
    {
      if (VAR33.VAR80 != 0)
        VAR29=(VAR28 *) FUN16(VAR29);
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR69,VAR39);
    }
  VAR25=FUN8(VAR12,VAR7,(unsigned char *) VAR31->VAR73);
  if (VAR25 != (VAR20) VAR7)
    {
      if (VAR33.VAR80 != 0)
        VAR29=(VAR28 *) FUN16(VAR29);
      VAR31->VAR73=FUN14(VAR31->VAR73);
      VAR31=(VAR30 *) FUN16(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR12->VAR90=(VAR10) VAR31->VAR8;
  VAR12->VAR91=(VAR10) VAR31->VAR9;
  VAR12->VAR71=8;
  VAR17=FUN19(VAR12,VAR12->VAR90,VAR12->VAR91,VAR5);
  if (VAR17 == VAR37)
    {
      if (VAR33.VAR80 != 0)
        VAR29=(VAR28 *) FUN16(VAR29);
      VAR31->VAR73=FUN14(VAR31->VAR73);
      VAR31=(VAR30 *) FUN16(VAR31);
      return(FUN7(VAR12));
    }
  if ((VAR33.VAR80 == 0U) || (VAR31->VAR77 != 0) ||
      (VAR31->VAR78 != 0) || (VAR31->VAR79 != 0))
    VAR12->VAR92=VAR93;
  else
    VAR12->VAR92=VAR94;
  VAR12->VAR29=VAR33.VAR80;
  if (VAR3->VAR95 == VAR37)
    switch (VAR12->VAR92)
    {
      case VAR93:
      default:
      {
        register VAR10
          VAR82;
        VAR10
          VAR79,
          VAR96,
          VAR78,
          VAR97,
          VAR77,
          VAR98;
        VAR77=VAR31->VAR77;
        VAR98=0;
        while ((VAR77 != 0) && ((VAR77 & 0x01) == 0))
        {
          VAR77>>=1;
          VAR98++;
        }
        VAR78=VAR31->VAR78;
        VAR97=0;
        while ((VAR78 != 0) && ((VAR78 & 0x01) == 0))
        {
          VAR78>>=1;
          VAR97++;
        }
        VAR79=VAR31->VAR79;
        VAR96=0;
        while ((VAR79 != 0) && ((VAR79 & 0x01) == 0))
        {
          VAR79>>=1;
          VAR96++;
        }
        if ((VAR12->VAR29 != 0) && (VAR15 != VAR37))
          for (VAR26=0; VAR26 < (VAR20) VAR12->VAR91; VAR26++)
          {
            VAR22=FUN20(VAR12,0,VAR26,VAR12->VAR90,1,VAR5);
            if (VAR22 == (VAR18 *) NULL)
              break;
            for (VAR21=0; VAR21 < (VAR20) VAR12->VAR90; VAR21++)
            {
              VAR24=FUN21(VAR31,(int) VAR21,(int) VAR26);
              VAR19=(VAR18) FUN22(VAR12,(VAR20) (VAR24 >>
                VAR98) & VAR77,VAR5);
              FUN23(VAR12,FUN24(
                VAR29[(VAR20) VAR19].VAR84),VAR22);
              VAR19=(VAR18) FUN22(VAR12,(VAR20) (VAR24 >>
                VAR97) & VAR78,VAR5);
              FUN25(VAR12,FUN24(
                VAR29[(VAR20) VAR19].VAR85),VAR22);
              VAR19=(VAR18) FUN22(VAR12,(VAR20) (VAR24 >>
                VAR96) & VAR79,VAR5);
              FUN26(VAR12,FUN24(
                VAR29[(VAR20) VAR19].VAR86),VAR22);
              VAR22+=FUN27(VAR12);
            }
            if (FUN28(VAR12,VAR5) == VAR37)
              break;
            VAR17=FUN29(VAR12,VAR99,(VAR100) VAR26,
              VAR12->VAR91);
            if (VAR17 == VAR37)
              break;
          }
        else
          for (VAR26=0; VAR26 < (VAR20) VAR12->VAR91; VAR26++)
          {
            VAR22=FUN20(VAR12,0,VAR26,VAR12->VAR90,1,VAR5);
            if (VAR22 == (VAR18 *) NULL)
              break;
            for (VAR21=0; VAR21 < (VAR20) VAR12->VAR90; VAR21++)
            {
              VAR24=FUN21(VAR31,(int) VAR21,(int) VAR26);
              VAR82=(VAR24 >> VAR98) & VAR77;
              if (VAR77 != 0)
                VAR82=(VAR82*65535UL)/VAR77;
              FUN23(VAR12,FUN24((unsigned short) VAR82),VAR22);
              VAR82=(VAR24 >> VAR97) & VAR78;
              if (VAR78 != 0)
                VAR82=(VAR82*65535UL)/VAR78;
              FUN25(VAR12,FUN24((unsigned short) VAR82),
                VAR22);
              VAR82=(VAR24 >> VAR96) & VAR79;
              if (VAR79 != 0)
                VAR82=(VAR82*65535UL)/VAR79;
              FUN26(VAR12,FUN24((unsigned short) VAR82),VAR22);
              VAR22+=FUN27(VAR12);
            }
            if (FUN28(VAR12,VAR5) == VAR37)
              break;
            VAR17=FUN29(VAR12,VAR99,(VAR100) VAR26,
              VAR12->VAR91);
            if (VAR17 == VAR37)
              break;
          }
        break;
      }
      case VAR94:
      {
        if (FUN30(VAR12,VAR12->VAR29,VAR5) == VAR37)
          {
            if (VAR33.VAR80 != 0)
              VAR29=(VAR28 *) FUN16(VAR29);
            VAR31->VAR73=FUN14(VAR31->VAR73);
            VAR31=(VAR30 *) FUN16(VAR31);
            FUN9(VAR69,VAR39);
          }
        for (VAR23=0; VAR23 < (VAR20) VAR12->VAR29; VAR23++)
        {
          VAR12->VAR101[VAR23].VAR84=(VAR102) FUN24(
            VAR29[VAR23].VAR84);
          VAR12->VAR101[VAR23].VAR85=(VAR102) FUN24(
            VAR29[VAR23].VAR85);
          VAR12->VAR101[VAR23].VAR86=(VAR102) FUN24(
            VAR29[VAR23].VAR86);
        }
        for (VAR26=0; VAR26 < (VAR20) VAR12->VAR91; VAR26++)
        {
          VAR22=FUN20(VAR12,0,VAR26,VAR12->VAR90,1,VAR5);
          if (VAR22 == (VAR18 *) NULL)
            break;
          for (VAR21=0; VAR21 < (VAR20) VAR12->VAR90; VAR21++)
          {
            VAR19=(VAR18) FUN22(VAR12,(VAR20)
              FUN21(VAR31,(int) VAR21,(int) VAR26),VAR5);
            FUN31(VAR12,VAR19,VAR22);
            FUN32(VAR12,VAR12->VAR101+(VAR20) VAR19,VAR22);
            VAR22+=FUN27(VAR12);
          }
          if (FUN28(VAR12,VAR5) == VAR37)
            break;
          VAR17=FUN29(VAR12,VAR99,(VAR100) VAR26,
            VAR12->VAR91);
          if (VAR17 == VAR37)
            break;
        }
        break;
      }
    }
  if (VAR33.VAR80 != 0)
    VAR29=(VAR28 *) FUN16(VAR29);
  VAR31->VAR73=FUN14(VAR31->VAR73);
  VAR31=(VAR30 *) FUN16(VAR31);
  if (FUN33(VAR12) != VAR37)
    FUN34(VAR5,VAR43,VAR39,
      VAR12->VAR40);
  (void) FUN35(VAR12);
  return(FUN36(VAR12));
}