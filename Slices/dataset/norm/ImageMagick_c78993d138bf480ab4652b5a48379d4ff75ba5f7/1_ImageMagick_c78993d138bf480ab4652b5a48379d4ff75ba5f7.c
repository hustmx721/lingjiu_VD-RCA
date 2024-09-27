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
   switch (VAR33.VAR47)
   {
     case VAR48:
    case VAR49:
    {
      if (VAR33.VAR50 != 1)
        FUN9(VAR43,VAR39);
      break;
    }
    case VAR51:
     case VAR52:
     {
       if ((VAR33.VAR50 < 1) || (VAR33.VAR50 > 15) ||
          (VAR33.VAR53 == 0))
         FUN9(VAR43,VAR39);
       break;
     }
    case VAR54:
    case VAR55:
    {
      if ((VAR33.VAR50 != 16) && (VAR33.VAR50 != 24) &&
          (VAR33.VAR50 != 32))
        FUN9(VAR43,VAR39);
      break;
    }
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR56)
  {
    case VAR57:
    {
      if (VAR33.VAR58 != 1)
        FUN9(VAR43,VAR39);
      break;
    }
    case VAR59:
    case VAR60:
    {
      if ((VAR33.VAR58 < 1) || (VAR33.VAR58 > 32))
        FUN9(VAR43,VAR39);
      switch (VAR33.VAR61)
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
  switch (VAR33.VAR62)
  {
    case 8:
    case 16:
    case 32:
      break;
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR63)
  {
    case VAR64:
    case VAR65:
      break;
    default:
      FUN9(VAR43,VAR39);
  }
  switch (VAR33.VAR66)
  {
    case VAR64:
    case VAR65:
      break;
     default:
       FUN9(VAR43,VAR39);
   }
  if (VAR33.VAR53 > 65535)
    FUN9(VAR43,VAR39);
   if (((VAR33.VAR61 % 8) != 0) || (VAR33.VAR61 > 32))
     FUN9(VAR43,VAR39);
   VAR7=(VAR10) (VAR33.VAR46-VAR42);
  VAR11=(char *) FUN11(VAR7+1,sizeof(*VAR11));
  if (VAR11 == (char *) NULL)
    FUN9(VAR67,VAR39);
  VAR25=FUN8(VAR12,VAR7,(unsigned char *) VAR11);
  VAR11[VAR7]=VAR68;
  (void) FUN12(VAR12,VAR39,VAR11,VAR5);
  VAR11=FUN13(VAR11);
  if (VAR25 != (VAR20) VAR7)
    FUN9(VAR43,VAR39);
  VAR31=(VAR30 *) FUN14(sizeof(*VAR31));
  if (VAR31 == (VAR30 *) NULL)
    FUN9(VAR67,VAR39);
  VAR31->VAR69=(int) VAR33.VAR58;
  VAR31->VAR70=(int) VAR33.VAR56;
  VAR31->VAR71=(int) VAR33.VAR71;
  VAR31->VAR72=(char *) NULL;
  VAR31->VAR8=(int) VAR33.VAR73;
  VAR31->VAR9=(int) VAR33.VAR74;
  VAR31->VAR61=(int) VAR33.VAR61;
  VAR31->VAR75=(int) VAR33.VAR75;
  VAR31->VAR63=(int) VAR33.VAR63;
  VAR31->VAR62=(int) VAR33.VAR62;
  VAR31->VAR66=(int) VAR33.VAR66;
  VAR31->VAR50=(int) VAR33.VAR50;
  VAR31->VAR76=VAR33.VAR76;
  VAR31->VAR77=VAR33.VAR77;
  VAR31->VAR78=VAR33.VAR78;
  if ((VAR31->VAR8 < 0) || (VAR31->VAR9 < 0) || (VAR31->VAR69 < 0) ||
      (VAR31->VAR70 < 0) || (VAR31->VAR63 < 0) ||
      (VAR31->VAR66 < 0) || (VAR31->VAR61 < 0) ||
      (VAR31->VAR75 < 0))
    {
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  if ((VAR31->VAR8 > 65535) || (VAR31->VAR9 > 65535))
    {
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  if ((VAR31->VAR50 > 32) || (VAR31->VAR62 > 32))
    {
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR13=FUN16(VAR31);
  if (VAR13 == 0)
    {
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR15=VAR37;
  VAR29=(VAR28 *) NULL;
  if (VAR33.VAR53 != 0)
    {
       VAR79
         VAR80;
      VAR29=(VAR28 *) FUN11((VAR10) VAR33.VAR53,
        sizeof(*VAR29));
       if (VAR29 == (VAR28 *) NULL)
         {
           VAR31=(VAR30 *) FUN15(VAR31);
          FUN9(VAR67,VAR39);
        }
      for (VAR23=0; VAR23 < (VAR20) VAR33.VAR53; VAR23++)
      {
        VAR25=FUN8(VAR12,VAR81,(unsigned char *) &VAR80);
        if (VAR25 != VAR81)
          {
            VAR29=(VAR28 *) FUN15(VAR29);
            VAR31=(VAR30 *) FUN15(VAR31);
            FUN9(VAR43,VAR39);
          }
        VAR29[VAR23].VAR24=VAR80.VAR24;
        VAR29[VAR23].VAR82=VAR80.VAR82;
        VAR29[VAR23].VAR83=VAR80.VAR83;
        VAR29[VAR23].VAR84=VAR80.VAR84;
        VAR29[VAR23].VAR85=(char) VAR80.VAR85;
        if (VAR80.VAR85 != 0)
          VAR15=VAR86;
      }
      VAR27=1;
      if ((int) (*(char *) &VAR27) != 0)
        for (VAR23=0; VAR23 < (VAR20) VAR33.VAR53; VAR23++)
        {
          FUN10((unsigned char *) &VAR29[VAR23].VAR24,
            sizeof(VAR29[VAR23].VAR24));
          FUN17((unsigned char *) &VAR29[VAR23].VAR82,3*
            sizeof(VAR29[VAR23].VAR82));
        }
    }
  VAR7=(VAR10) VAR31->VAR75*VAR31->VAR9;
  if (FUN2(VAR7,VAR31->VAR75,VAR31->VAR9))
    {
      if (VAR33.VAR53 != 0)
        VAR29=(VAR28 *) FUN15(VAR29);
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  if (VAR31->VAR70 != VAR60)
    {
      VAR10
        VAR87;
      VAR87=VAR7;
      VAR7*=VAR31->VAR69;
      if (FUN2(VAR7,VAR87,VAR31->VAR69))
        {
          if (VAR33.VAR53 != 0)
            VAR29=(VAR28 *) FUN15(VAR29);
          VAR31=(VAR30 *) FUN15(VAR31);
          FUN9(VAR43,VAR39);
        }
    }
  VAR31->VAR72=(char *) FUN11(VAR7,sizeof(*VAR31->VAR72));
  if (VAR31->VAR72 == (char *) NULL)
    {
      if (VAR33.VAR53 != 0)
        VAR29=(VAR28 *) FUN15(VAR29);
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR67,VAR39);
    }
  VAR25=FUN8(VAR12,VAR7,(unsigned char *) VAR31->VAR72);
  if (VAR25 != (VAR20) VAR7)
    {
      if (VAR33.VAR53 != 0)
        VAR29=(VAR28 *) FUN15(VAR29);
      VAR31->VAR72=FUN13(VAR31->VAR72);
      VAR31=(VAR30 *) FUN15(VAR31);
      FUN9(VAR43,VAR39);
    }
  VAR12->VAR88=(VAR10) VAR31->VAR8;
  VAR12->VAR89=(VAR10) VAR31->VAR9;
  VAR12->VAR69=8;
  VAR17=FUN18(VAR12,VAR12->VAR88,VAR12->VAR89,VAR5);
  if (VAR17 == VAR37)
    {
      if (VAR33.VAR53 != 0)
        VAR29=(VAR28 *) FUN15(VAR29);
      VAR31->VAR72=FUN13(VAR31->VAR72);
      VAR31=(VAR30 *) FUN15(VAR31);
      return(FUN7(VAR12));
    }
  if ((VAR33.VAR53 == 0U) || (VAR31->VAR76 != 0) ||
      (VAR31->VAR77 != 0) || (VAR31->VAR78 != 0))
    VAR12->VAR90=VAR91;
  else
    VAR12->VAR90=VAR92;
  VAR12->VAR29=VAR33.VAR53;
  if (VAR3->VAR93 == VAR37)
    switch (VAR12->VAR90)
    {
      case VAR91:
      default:
      {
        register VAR10
          VAR80;
        VAR10
          VAR78,
          VAR94,
          VAR77,
          VAR95,
          VAR76,
          VAR96;
        VAR76=VAR31->VAR76;
        VAR96=0;
        while ((VAR76 != 0) && ((VAR76 & 0x01) == 0))
        {
          VAR76>>=1;
          VAR96++;
        }
        VAR77=VAR31->VAR77;
        VAR95=0;
        while ((VAR77 != 0) && ((VAR77 & 0x01) == 0))
        {
          VAR77>>=1;
          VAR95++;
        }
        VAR78=VAR31->VAR78;
        VAR94=0;
        while ((VAR78 != 0) && ((VAR78 & 0x01) == 0))
        {
          VAR78>>=1;
          VAR94++;
        }
        if ((VAR12->VAR29 != 0) && (VAR15 != VAR37))
          for (VAR26=0; VAR26 < (VAR20) VAR12->VAR89; VAR26++)
          {
            VAR22=FUN19(VAR12,0,VAR26,VAR12->VAR88,1,VAR5);
            if (VAR22 == (VAR18 *) NULL)
              break;
            for (VAR21=0; VAR21 < (VAR20) VAR12->VAR88; VAR21++)
            {
              VAR24=FUN20(VAR31,(int) VAR21,(int) VAR26);
              VAR19=(VAR18) FUN21(VAR12,(VAR20) (VAR24 >>
                VAR96) & VAR76,VAR5);
              FUN22(VAR12,FUN23(
                VAR29[(VAR20) VAR19].VAR82),VAR22);
              VAR19=(VAR18) FUN21(VAR12,(VAR20) (VAR24 >>
                VAR95) & VAR77,VAR5);
              FUN24(VAR12,FUN23(
                VAR29[(VAR20) VAR19].VAR83),VAR22);
              VAR19=(VAR18) FUN21(VAR12,(VAR20) (VAR24 >>
                VAR94) & VAR78,VAR5);
              FUN25(VAR12,FUN23(
                VAR29[(VAR20) VAR19].VAR84),VAR22);
              VAR22+=FUN26(VAR12);
            }
            if (FUN27(VAR12,VAR5) == VAR37)
              break;
            VAR17=FUN28(VAR12,VAR97,(VAR98) VAR26,
              VAR12->VAR89);
            if (VAR17 == VAR37)
              break;
          }
        else
          for (VAR26=0; VAR26 < (VAR20) VAR12->VAR89; VAR26++)
          {
            VAR22=FUN19(VAR12,0,VAR26,VAR12->VAR88,1,VAR5);
            if (VAR22 == (VAR18 *) NULL)
              break;
            for (VAR21=0; VAR21 < (VAR20) VAR12->VAR88; VAR21++)
            {
              VAR24=FUN20(VAR31,(int) VAR21,(int) VAR26);
              VAR80=(VAR24 >> VAR96) & VAR76;
              if (VAR76 != 0)
                VAR80=(VAR80*65535UL)/VAR76;
              FUN22(VAR12,FUN23((unsigned short) VAR80),VAR22);
              VAR80=(VAR24 >> VAR95) & VAR77;
              if (VAR77 != 0)
                VAR80=(VAR80*65535UL)/VAR77;
              FUN24(VAR12,FUN23((unsigned short) VAR80),
                VAR22);
              VAR80=(VAR24 >> VAR94) & VAR78;
              if (VAR78 != 0)
                VAR80=(VAR80*65535UL)/VAR78;
              FUN25(VAR12,FUN23((unsigned short) VAR80),VAR22);
              VAR22+=FUN26(VAR12);
            }
            if (FUN27(VAR12,VAR5) == VAR37)
              break;
            VAR17=FUN28(VAR12,VAR97,(VAR98) VAR26,
              VAR12->VAR89);
            if (VAR17 == VAR37)
              break;
          }
        break;
      }
      case VAR92:
      {
        if (FUN29(VAR12,VAR12->VAR29,VAR5) == VAR37)
          {
            if (VAR33.VAR53 != 0)
              VAR29=(VAR28 *) FUN15(VAR29);
            VAR31->VAR72=FUN13(VAR31->VAR72);
            VAR31=(VAR30 *) FUN15(VAR31);
            FUN9(VAR67,VAR39);
          }
        for (VAR23=0; VAR23 < (VAR20) VAR12->VAR29; VAR23++)
        {
          VAR12->VAR99[VAR23].VAR82=(VAR100) FUN23(
            VAR29[VAR23].VAR82);
          VAR12->VAR99[VAR23].VAR83=(VAR100) FUN23(
            VAR29[VAR23].VAR83);
          VAR12->VAR99[VAR23].VAR84=(VAR100) FUN23(
            VAR29[VAR23].VAR84);
        }
        for (VAR26=0; VAR26 < (VAR20) VAR12->VAR89; VAR26++)
        {
          VAR22=FUN19(VAR12,0,VAR26,VAR12->VAR88,1,VAR5);
          if (VAR22 == (VAR18 *) NULL)
            break;
          for (VAR21=0; VAR21 < (VAR20) VAR12->VAR88; VAR21++)
          {
            VAR19=(VAR18) FUN21(VAR12,(VAR20)
              FUN20(VAR31,(int) VAR21,(int) VAR26),VAR5);
            FUN30(VAR12,VAR19,VAR22);
            FUN31(VAR12,VAR12->VAR99+(VAR20) VAR19,VAR22);
            VAR22+=FUN26(VAR12);
          }
          if (FUN27(VAR12,VAR5) == VAR37)
            break;
          VAR17=FUN28(VAR12,VAR97,(VAR98) VAR26,
            VAR12->VAR89);
          if (VAR17 == VAR37)
            break;
        }
        break;
      }
    }
  if (VAR33.VAR53 != 0)
    VAR29=(VAR28 *) FUN15(VAR29);
  VAR31->VAR72=FUN13(VAR31->VAR72);
  VAR31=(VAR30 *) FUN15(VAR31);
  if (FUN32(VAR12) != VAR37)
    FUN33(VAR5,VAR43,VAR39,
      VAR12->VAR40);
  (void) FUN34(VAR12);
  return(FUN35(VAR12));
}