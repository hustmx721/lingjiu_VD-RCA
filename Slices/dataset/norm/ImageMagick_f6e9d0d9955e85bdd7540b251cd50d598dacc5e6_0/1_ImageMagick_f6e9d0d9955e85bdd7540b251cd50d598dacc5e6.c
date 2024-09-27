static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  unsigned char
    VAR6,
    VAR7[3];
  VAR1
    *VAR8;
  VAR9
    VAR10;
  VAR11
    VAR12;
  VAR13
    VAR14;
  VAR15
    VAR16;
  register VAR9
    *VAR17;
  register VAR18
    VAR19;
  register VAR20
    *VAR21;
  register unsigned char
    *VAR22;
  VAR23
    VAR24,
    VAR25,
    VAR26,
    VAR27;
  VAR18
    VAR28,
    VAR29,
    VAR30 = 0,
    VAR31;
  unsigned char
    *VAR32;
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR33 == VAR34);
  if (VAR3->VAR35 != VAR36)
    (void) FUN2(VAR37,FUN3(),VAR38,
      VAR3->VAR39);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR33 == VAR34);
  VAR8=FUN4(VAR3);
  VAR12=FUN5(VAR3,VAR8,VAR40,VAR5);
  if (VAR12 == VAR36)
    {
      VAR8=FUN6(VAR8);
      return((VAR1 *) NULL);
    }
  VAR28=FUN7(VAR8,32,(unsigned char *) VAR16.VAR41);
  VAR16.VAR6=(short) FUN8(VAR8);
  VAR16.VAR42=(short) FUN8(VAR8);
  VAR16.VAR43=FUN9(VAR8);
  VAR16.VAR44=FUN9(VAR8);
  VAR16.VAR45=FUN9(VAR8);
  VAR16.VAR46=FUN9(VAR8);
  VAR16.VAR47=FUN9(VAR8);
  VAR16.VAR48=FUN9(VAR8);
  VAR28=FUN7(VAR8,4,(unsigned char *) VAR16.VAR49);
  VAR28=FUN7(VAR8,4,(unsigned char *) VAR16.VAR50);
  if ((VAR28 == 0) || (memcmp(VAR16.VAR49,VAR38,4) != 0) ||
      (memcmp(VAR16.VAR50,VAR38,4) != 0))
    FUN10(VAR51,VAR38);
  VAR16.VAR52=FUN9(VAR8);
  VAR16.VAR53=FUN9(VAR8);
  VAR16.VAR54=(short) FUN8(VAR8);
  if (VAR16.VAR53 != 0)
    FUN10(VAR55,VAR38);
  VAR29=(VAR18) ((int) FUN9(VAR8));
  VAR6=(unsigned char) ((int) FUN11(VAR8));
  (void) VAR6;
  VAR28=FUN7(VAR8,3,(unsigned char *) VAR7);
  if (VAR28 != 3  ||  memcmp(VAR7,VAR38,3) != 0)
    FUN10(VAR51,VAR38);
  if (VAR16.VAR54 > 1)
    {
      VAR30=(VAR18) ((int) FUN9(VAR8));
      VAR6=(unsigned char) ((int) FUN11(VAR8));
      VAR28=FUN7(VAR8,3,(unsigned char *) VAR7);
      if (VAR28 != 3  ||  memcmp(VAR7,VAR38,3) != 0)
        FUN10(VAR51,VAR38);
    }
  VAR25 = (VAR23) (VAR29 - FUN12( VAR8 ));
  while (VAR25--) FUN11( VAR8 );
  VAR28=FUN7(VAR8,32,(unsigned char *) VAR14.VAR41);
  VAR14.VAR42=FUN11(VAR8);
  VAR14.VAR49=(unsigned char) FUN11(VAR8);
  VAR14.VAR56=FUN9(VAR8);
  VAR14.VAR57=FUN9(VAR8);
  VAR14.VAR58=(short) FUN8(VAR8);
  VAR14.VAR59=(short) FUN8(VAR8);
  VAR14.VAR60=FUN9(VAR8);
  VAR14.VAR61=FUN8(VAR8);
  VAR14.VAR62=FUN8(VAR8);
  VAR14.VAR63=(short) FUN8(VAR8);
  VAR14.VAR64=(short) FUN8(VAR8);
  VAR8->VAR65=(VAR23) VAR14.VAR63;
  VAR8->VAR66=(VAR23) VAR14.VAR64;
  VAR8->VAR67=8;
  VAR8->VAR68=VAR69;
  VAR24=VAR14.VAR49 == 0 ? 2UL : VAR14.VAR49 == 2 ? 4UL : 1UL;
  VAR26=1;
  if (FUN13(VAR8,VAR26 << VAR24) == VAR36)
    FUN10(VAR70,VAR38);
  if (VAR3->VAR71 != VAR36)
    {
       (void) FUN14(VAR8);
       return(FUN15(VAR8));
     }
   VAR27=(VAR24*VAR8->VAR65+7)/8;
   VAR32=(unsigned char *) FUN16(VAR27+256UL,VAR8->VAR66*
     sizeof(*VAR32));
  if (VAR32 == (unsigned char *) NULL)
    FUN10(VAR70,VAR38);
  switch (VAR14.VAR42 & 0x07)
  {
    case 0:
    {
      VAR8->VAR72=VAR73;
      VAR28=(VAR18) FUN7(VAR8, VAR27 * VAR8 -> VAR66, VAR32);
      break;
    }
    case 1:
    {
      VAR8->VAR72=VAR74;
      if (!FUN17(VAR8, VAR32, VAR27 * VAR8 -> VAR66))
        FUN10( VAR51, VAR38 );
      break;
    }
    default:
      FUN10(VAR51,
         VAR38 );
  }
  VAR22=VAR32;
  switch (VAR24)
  {
    case 1:
    {
      int
        VAR75;
      for (VAR31=0; VAR31 < (VAR18) VAR8->VAR66; VAR31++)
      {
        VAR21=FUN18(VAR8,0,VAR31,VAR8->VAR65,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR17=FUN19(VAR8);
        for (VAR19=0; VAR19 < ((VAR18) VAR8->VAR65-7); VAR19+=8)
        {
          for (VAR75=0; VAR75 < 8; VAR75++)
          {
            VAR10=(VAR9) (*VAR22 & (0x80 >> VAR75) ? 0x00 : 0x01);
            FUN20(VAR17+VAR19+VAR75,VAR10);
          }
          VAR22++;
        }
        if (FUN21(VAR8,VAR5) == VAR36)
          break;
        VAR12=FUN22(VAR8,VAR76,(VAR77) VAR31,
          VAR8->VAR66);
        if (VAR12 == VAR36)
          break;
      }
      (void) FUN23(VAR8);
      break;
    }
    case 2:
    {
      for (VAR31=0; VAR31 < (VAR18) VAR8->VAR66; VAR31++)
      {
        VAR21=FUN18(VAR8,0,VAR31,VAR8->VAR65,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR17=FUN19(VAR8);
        for (VAR19=0; VAR19 < (VAR18) VAR8->VAR65; VAR19+=4)
        {
          VAR10=FUN24(VAR8,3UL-((*VAR22 >> 6) & 0x03));
          FUN20(VAR17+VAR19,VAR10);
          VAR10=FUN24(VAR8,3UL-((*VAR22 >> 4) & 0x03));
          FUN20(VAR17+VAR19+1,VAR10);
          VAR10=FUN24(VAR8,3UL-((*VAR22 >> 2) & 0x03));
          FUN20(VAR17+VAR19+2,VAR10);
          VAR10=FUN24(VAR8,3UL-((*VAR22) & 0x03));
          FUN20(VAR17+VAR19+3,VAR10);
          VAR22++;
        }
        if (FUN21(VAR8,VAR5) == VAR36)
          break;
        VAR12=FUN22(VAR8,VAR76,(VAR77) VAR31,
          VAR8->VAR66);
        if (VAR12 == VAR36)
          break;
      }
      (void) FUN23(VAR8);
      break;
    }
    case 4:
    {
      for (VAR31=0; VAR31 < (VAR18) VAR8->VAR66; VAR31++)
      {
        VAR21=FUN18(VAR8,0,VAR31,VAR8->VAR65,1,VAR5);
        if (VAR21 == (VAR20 *) NULL)
          break;
        VAR17=FUN19(VAR8);
        for (VAR19=0; VAR19 < (VAR18) VAR8->VAR65; VAR19+=2)
        {
          VAR10=FUN24(VAR8,15UL-((*VAR22 >> 4) & 0x0f));
          FUN20(VAR17+VAR19,VAR10);
          VAR10=FUN24(VAR8,15UL-((*VAR22) & 0x0f));
          FUN20(VAR17+VAR19+1,VAR10);
          VAR22++;
        }
        if (FUN21(VAR8,VAR5) == VAR36)
          break;
        VAR12=FUN22(VAR8,VAR76,(VAR77) VAR31,
          VAR8->VAR66);
        if (VAR12 == VAR36)
          break;
      }
      (void) FUN23(VAR8);
      break;
    }
    default:
      FUN10(VAR51,VAR38);
  }
  VAR32=(unsigned char *) FUN25(VAR32);
  if (FUN26(VAR8) != VAR36)
    FUN27(VAR5,VAR51,VAR38,
      VAR8->VAR39);
  if (VAR16.VAR54 > 1)
    {
      char
        *VAR78;
      int
        VAR79;
      register char
        *VAR22;
      VAR23
        VAR80;
      VAR25 = (VAR23) (VAR30 - FUN12( VAR8 ));
      while (VAR25--) FUN11( VAR8 );
      VAR79=FUN11(VAR8);
      VAR80=VAR81;
      VAR78=FUN28((char *) NULL);
      for (VAR22=VAR78; VAR79 != VAR82; VAR22++)
      {
        if ((VAR23) (VAR22-VAR78+VAR81) >= VAR80)
          {
            *VAR22=VAR83;
            VAR80<<=1;
            VAR80+=VAR81;
            VAR78=(char *) FUN29(VAR78,VAR80+VAR81,
              sizeof(*VAR78));
            if (VAR78 == (char *) NULL)
              break;
            VAR22=VAR78+strlen(VAR78);
          }
        *VAR22=VAR79;
        VAR79=FUN11(VAR8);
      }
      *VAR22=VAR83;
      if (VAR78 == (char *) NULL)
        FUN10(VAR70,VAR38);
      (void) FUN30(VAR8,VAR38,VAR78);
      VAR78=FUN31(VAR78);
    }
  (void) FUN14(VAR8);
  return(FUN15(VAR8));
}