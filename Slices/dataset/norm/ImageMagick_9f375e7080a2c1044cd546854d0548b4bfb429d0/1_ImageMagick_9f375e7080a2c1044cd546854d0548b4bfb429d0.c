static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
#VAR6 FUN2(VAR5,VAR7) \
{ \
  if (VAR8 != (unsigned char *) NULL) \
    VAR8=(unsigned char *) FUN3(VAR8); \
  if (VAR9 != (VAR10 *) NULL) \
    VAR9=(VAR10 *) FUN3(VAR9); \
  FUN4((VAR5),(VAR7)); \
}
  char
    VAR11[VAR12],
    VAR13[VAR12],
    VAR14[VAR12],
    VAR15[VAR12];
  VAR16
    VAR17;
  VAR10
    *VAR9;
  VAR1
    *VAR18;
  int
    *VAR19,
    VAR20,
    *VAR21,
    *VAR22,
    *VAR23;
  VAR24
    VAR25,
    VAR26,
    VAR27,
    VAR28;
  VAR29
    VAR30;
  register unsigned char
    *VAR31;
  register VAR32
    VAR33;
  VAR34
    VAR35,
    VAR36,
    VAR37,
    VAR38,
    VAR39,
    VAR40,
    VAR41;
  VAR32
    VAR42,
    VAR43;
  unsigned char
    *VAR8;
  unsigned short
    VAR44,
    VAR45;
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR46 == VAR47);
  if (VAR3->VAR48 != VAR49)
    (void) FUN5(VAR50,FUN6(),VAR51,
      VAR3->VAR52);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR46 == VAR47);
  VAR18=FUN7(VAR3);
  VAR40=FUN8(VAR3,VAR18,VAR53,VAR5);
  if (VAR40 == VAR49)
    {
      VAR18=FUN9(VAR18);
      return((VAR1 *) NULL);
    }
  VAR18->VAR54=8UL;
  VAR18->VAR55=VAR56;
  VAR8=(unsigned char *) NULL;
  VAR9=(VAR10 *) FUN10(sizeof(*VAR9));
  if (VAR9 == (VAR10 *) NULL)
    FUN2(VAR57,VAR51);
  (void) FUN11(VAR9,0,sizeof(*VAR9));
  VAR42=FUN12(VAR18,128,(unsigned char *) VAR14);
  if (VAR42 != 128)
    FUN2(VAR58,VAR51);
  VAR42=FUN12(VAR18,4,(unsigned char *) VAR14);
  if ((VAR42 != 4) || (FUN13(VAR14,VAR51,4) != 0))
    {
      VAR30=FUN14(VAR18,0L,VAR59);
      if (VAR30 < 0)
        FUN2(VAR58,VAR51);
    }
  (void) FUN15(VAR15,VAR51,VAR12);
  VAR17.VAR60=VAR49;
  VAR17.VAR61=(VAR62 *) NULL;
  VAR17.VAR63=8;
  VAR17.VAR64=1;
  VAR17.VAR54=8;
  VAR17.VAR65=0xffff;
  VAR17.VAR66=255UL;
  VAR17.VAR67=1;
  VAR17.VAR68=(~0UL);
  VAR17.VAR69=0;
  VAR17.VAR70=VAR49;
  VAR17.VAR71=0.0;
  VAR17.VAR72=1.0;
  VAR17.VAR73=0.0;
  VAR17.VAR74=0.0;
  VAR8=(unsigned char *) NULL;
  VAR45=0;
  VAR11[2]=VAR75;
  VAR25=VAR49;
  VAR35=0;
  VAR23=(int *) NULL;
  VAR21=(int *) NULL;
  VAR19=(int *) NULL;
  VAR22=(int *) NULL;
  VAR36=0;
  VAR38=1;
  VAR27=VAR49;
  VAR28=VAR49;
  VAR26 = VAR49;
  VAR41=0;
  for (VAR44=0; (VAR44 != 0x7FE0) || (VAR45 != 0x0010) ||
                (VAR27 != VAR49); )
  {
    VAR18->VAR30=(VAR32) FUN16(VAR18);
    VAR44=FUN17(VAR18);
    VAR45=FUN17(VAR18);
    if ((VAR44 != 0x0002) && (VAR18->VAR55 == VAR76))
      {
        VAR44=(unsigned short) ((VAR44 << 8) | ((VAR44 >> 8) & 0xFF));
        VAR45=(unsigned short) ((VAR45 << 8) | ((VAR45 >> 8) & 0xFF));
      }
    VAR39=0;
    for (VAR33=0; VAR77[VAR33].VAR44 < 0xffff; VAR33++)
      if ((VAR44 == VAR77[VAR33].VAR44) && (VAR45 == VAR77[VAR33].VAR45))
        break;
    (void) FUN15(VAR13,VAR77[VAR33].VAR78,VAR12);
    VAR42=FUN12(VAR18,2,(unsigned char *) VAR11);
    if (VAR42 != 2)
      FUN2(VAR58,VAR51);
    if ((VAR25 == VAR49) && (VAR44 != 0x0002))
      VAR25=(FUN18((unsigned char) *VAR11) != VAR49) &&
        (FUN18((unsigned char) *(VAR11+1)) != VAR49) ?
        VAR79 : VAR49;
    VAR28=((VAR44 == 0x0002) && (VAR26 == VAR49)) ||
      (VAR25 != VAR49) ? VAR79 : VAR49;
    if ((VAR28 != VAR49) && (strncmp(VAR13,VAR51,2) == 0))
      (void) FUN15(VAR13,VAR11,VAR12);
    if ((VAR28 == VAR49) || (strncmp(VAR13,VAR51,2) == 0))
      {
        VAR30=FUN14(VAR18,(VAR29) -2,VAR80);
        if (VAR30 < 0)
          FUN2(VAR58,VAR51);
        VAR39=4;
      }
    else
      {
        VAR39=2;
        if ((strncmp(VAR11,VAR51,2) == 0) ||
            (strncmp(VAR11,VAR51,2) == 0) ||
            (strncmp(VAR11,VAR51,2) == 0) ||
            (strncmp(VAR11,VAR51,2) == 0))
          {
            (void) FUN17(VAR18);
            VAR39=4;
          }
      }
    VAR20=0;
    if (VAR39 == 4)
      {
        if (VAR44 == 0x0002)
          VAR20=FUN19(VAR18);
        else
          VAR20=FUN20(VAR18);
      }
    else
      if (VAR39 == 2)
        {
          if (VAR44 == 0x0002)
            VAR20=FUN21(VAR18);
          else
            VAR20=FUN22(VAR18);
        }
    VAR39=0;
    VAR37=1;
    if (VAR20 != 0)
      {
        if ((strncmp(VAR13,VAR51,2) == 0) ||
            (strncmp(VAR13,VAR51,2) == 0))
          VAR39=2;
        else
          if ((strncmp(VAR13,VAR51,2) == 0) ||
              (strncmp(VAR13,VAR51,2) == 0) ||
              (strncmp(VAR13,VAR51,2) == 0))
            VAR39=4;
          else
            if (strncmp(VAR13,VAR51,2) != 0)
              VAR39=1;
            else
              VAR39=8;
        if (VAR20 != ~0)
          VAR37=(VAR34) VAR20/VAR39;
        else
          {
            VAR39=0;
            VAR37=0;
          }
      }
    if (VAR3->VAR81 != VAR49)
      {
        if (VAR28 == VAR49)
          VAR11[0]=VAR75;
        for (VAR33=0; VAR77[VAR33].VAR82 != (char *) NULL; VAR33++)
          if ((VAR44 == VAR77[VAR33].VAR44) &&
              (VAR45 == VAR77[VAR33].VAR45))
            break;
        (void) FUN23(VAR83,VAR51,
          (unsigned long) VAR18->VAR30,(long) VAR37,VAR13,VAR11,
          (unsigned long) VAR44,(unsigned long) VAR45);
        if (VAR77[VAR33].VAR82 != (char *) NULL)
          (void) FUN23(VAR83,VAR51,VAR77[VAR33].VAR82);
        (void) FUN23(VAR83,VAR51);
      }
    if ((VAR27 == VAR49) && (VAR44 == 0x7FE0) && (VAR45 == 0x0010))
      {
        if (VAR3->VAR81 != VAR49)
          (void) FUN23(VAR83,VAR51);
        break;
      }
    VAR8=(unsigned char *) NULL;
    if ((VAR37 == 1) && (VAR39 == 1))
      VAR20=FUN24(VAR18);
    else
      if ((VAR37 == 1) && (VAR39 == 2))
        {
          if (VAR44 == 0x0002)
            VAR20=FUN21(VAR18);
          else
            VAR20=FUN22(VAR18);
        }
      else
        if ((VAR37 == 1) && (VAR39 == 4))
          {
            if (VAR44 == 0x0002)
              VAR20=FUN19(VAR18);
            else
              VAR20=FUN20(VAR18);
          }
        else
           if ((VAR39 != 0) && (VAR37 != 0))
             {
               if (VAR37 > FUN25(VAR18))
                FUN4(VAR58,
                   VAR51);
               if (~VAR37 >= 1)
                 VAR8=(unsigned char *) FUN26(VAR37+1,VAR39*
                  sizeof(*VAR8));
              if (VAR8 == (unsigned char *) NULL)
                FUN2(VAR57,VAR51);
              VAR42=FUN12(VAR18,(VAR34) VAR39*VAR37,VAR8);
              if (VAR42 != (VAR32) (VAR39*VAR37))
                {
                  if (VAR3->VAR81 != VAR49)
                    (void) FUN23(VAR83,VAR51
                      VAR51,(int) VAR42,(int) VAR39,(int)
                      VAR37,(int) VAR44);
                   FUN2(VAR58,
                     VAR51);
                }
              VAR8[VAR37*VAR39]=VAR75;
            }
          else
            if ((unsigned int) VAR20 == 0xFFFFFFFFU)
              {
                VAR27=VAR79;
                continue;
              }
    if ((unsigned int) ((VAR44 << 16) | VAR45) == 0xFFFEE0DD)
      {
        if (VAR8 != (unsigned char *) NULL)
          VAR8=(unsigned char *) FUN3(VAR8);
        VAR27=VAR49;
        continue;
      }
    if (VAR27 != VAR49)
      {
        if (VAR8 != (unsigned char *) NULL)
          VAR8=(unsigned char *) FUN3(VAR8);
        continue;
      }
    switch (VAR44)
    {
      case 0x0002:
      {
        switch (VAR45)
        {
          case 0x0010:
          {
            char
              VAR84[VAR12];
            if ((VAR20 == 0) && (VAR26 == VAR49))
              {
                VAR26=VAR79;
                (void) FUN14(VAR18,(VAR29) 0,VAR59);
                VAR44=0;
                VAR45=0;
                if (VAR3->VAR81 != VAR49)
                  (void) FUN23(VAR83,
                    VAR51);
                break;
              }
            *VAR84=VAR75;
            if (VAR8 != (unsigned char *) NULL)
              (void) FUN15(VAR84,(char *) VAR8,
                VAR12);
            if (VAR3->VAR81 != VAR49)
              (void) FUN23(VAR83,VAR51,
                (const char *) VAR84);
            if (strncmp(VAR84,VAR51,17) == 0)
              {
                int
                  VAR42,
                  VAR85,
                  VAR86;
                VAR86=1;
                VAR85=0;
                if (strlen(VAR84) > 17)
                  {
                    VAR42=sscanf(VAR84+17,VAR51,&VAR86,&VAR85);
                    if (VAR42 < 1)
                      FUN2(VAR58,
                        VAR51);
                  }
                switch (VAR86)
                {
                  case 1:
                  {
                    VAR18->VAR55=VAR56;
                    break;
                  }
                  case 2:
                  {
                    VAR18->VAR55=VAR76;
                    break;
                  }
                  case 4:
                  {
                    if ((VAR85 >= 80) && (VAR85 <= 81))
                      VAR18->VAR87=VAR88;
                    else
                      if ((VAR85 >= 90) && (VAR85 <= 93))
                        VAR18->VAR87=VAR89;
                      else
                        VAR18->VAR87=VAR88;
                    break;
                  }
                  case 5:
                  {
                    VAR18->VAR87=VAR90;
                    break;
                  }
                }
              }
            break;
          }
          default:
            break;
        }
        break;
      }
      case 0x0028:
      {
        switch (VAR45)
        {
          case 0x0002:
          {
            VAR17.VAR67=(VAR34) VAR20;
            break;
          }
          case 0x0004:
          {
            if (VAR8 == (unsigned char *) NULL)
              break;
            for (VAR33=0; VAR33 < (VAR32) FUN27(VAR37,VAR12-1); VAR33++)
              VAR15[VAR33]=(char) VAR8[VAR33];
            VAR15[VAR33]=VAR75;
            VAR17.VAR60=FUN28(VAR15,VAR51) == 0 ?
              VAR79 : VAR49;
            break;
          }
          case 0x0006:
          {
            if (VAR20 == 1)
              VAR18->VAR91=VAR92;
            break;
          }
          case 0x0008:
          {
            if (VAR8 == (unsigned char *) NULL)
              break;
            VAR38=FUN29((char *) VAR8);
            break;
          }
          case 0x0010:
          {
            VAR36=(VAR34) VAR20;
            break;
          }
          case 0x0011:
          {
            VAR41=(VAR34) VAR20;
            break;
          }
          case 0x0100:
          {
            VAR17.VAR63=(VAR34) VAR20;
            VAR17.VAR64=1;
            if (VAR20 > 8)
              VAR17.VAR64=2;
            VAR17.VAR54=VAR17.VAR63;
            if (VAR17.VAR54 > 32)
              FUN2(VAR58,VAR51);
            VAR17.VAR66=(1UL << VAR17.VAR63)-1;
            VAR18->VAR54=VAR17.VAR54;
            break;
          }
          case 0x0101:
          {
            VAR17.VAR69=(VAR34) VAR20;
            VAR17.VAR64=1;
            if (VAR17.VAR69 > 8)
              VAR17.VAR64=2;
            VAR17.VAR54=VAR17.VAR69;
            if (VAR17.VAR54 > 32)
              FUN2(VAR58,VAR51);
            VAR17.VAR66=(1UL << VAR17.VAR69)-1;
            VAR17.VAR65=(VAR34) FUN30(VAR17.VAR69);
            VAR18->VAR54=VAR17.VAR54;
            break;
          }
          case 0x0102:
          {
            break;
          }
          case 0x0103:
          {
            VAR17.VAR68=(VAR34) VAR20;
            break;
          }
          case 0x1050:
          {
            if (VAR8 != (unsigned char *) NULL)
              VAR17.VAR73=FUN31((char *) VAR8,
                (char **) NULL);
            break;
          }
          case 0x1051:
          {
            if (VAR8 != (unsigned char *) NULL)
              VAR17.VAR74=FUN31((char *) VAR8,
                (char **) NULL);
            break;
          }
          case 0x1052:
          {
            if (VAR8 != (unsigned char *) NULL)
              VAR17.VAR71=FUN31((char *) VAR8,
                (char **) NULL);
            break;
          }
          case 0x1053:
          {
            if (VAR8 != (unsigned char *) NULL)
              VAR17.VAR72=FUN31((char *) VAR8,
                (char **) NULL);
            break;
          }
          case 0x1200:
          case 0x3006:
          {
            if (VAR8 == (unsigned char *) NULL)
              break;
            VAR35=(VAR34) (VAR37/VAR17.VAR64);
            VAR20=(int) VAR35;
            VAR22=(int *) FUN26((VAR34) VAR35,
              sizeof(*VAR22));
            if (VAR22 == (int *) NULL)
              FUN2(VAR57,VAR51);
            for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
              if (VAR17.VAR64 == 1)
                VAR22[VAR33]=(int) VAR8[VAR33];
              else
                VAR22[VAR33]=(int) ((short *) VAR8)[VAR33];
            break;
          }
          case 0x1201:
          {
            unsigned short
              VAR93;
            if (VAR8 == (unsigned char *) NULL)
              break;
            VAR35=(VAR34) (VAR37/2);
            VAR20=(int) VAR35;
            VAR23=(int *) FUN26((VAR34) VAR35,
              sizeof(*VAR23));
            if (VAR23 == (int *) NULL)
              FUN2(VAR57,VAR51);
            VAR31=VAR8;
            for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
            {
              if (VAR18->VAR55 == VAR76)
                VAR93=(unsigned short) ((*VAR31 << 8) | *(VAR31+1));
              else
                VAR93=(unsigned short) (*VAR31 | (*(VAR31+1) << 8));
              VAR23[VAR33]=(int) VAR93;
              VAR31+=2;
            }
            break;
          }
          case 0x1202:
          {
            unsigned short
              VAR93;
            if (VAR8 == (unsigned char *) NULL)
              break;
            VAR35=(VAR34) (VAR37/2);
            VAR20=(int) VAR35;
            VAR21=(int *) FUN26((VAR34) VAR35,
              sizeof(*VAR21));
            if (VAR21 == (int *) NULL)
              FUN2(VAR57,VAR51);
            VAR31=VAR8;
            for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
            {
              if (VAR18->VAR55 == VAR76)
                VAR93=(unsigned short) ((*VAR31 << 8) | *(VAR31+1));
              else
                VAR93=(unsigned short) (*VAR31 | (*(VAR31+1) << 8));
              VAR21[VAR33]=(int) VAR93;
              VAR31+=2;
            }
            break;
          }
          case 0x1203:
          {
            unsigned short
              VAR93;
            if (VAR8 == (unsigned char *) NULL)
              break;
            VAR35=(VAR34) (VAR37/2);
            VAR20=(int) VAR35;
            VAR19=(int *) FUN26((VAR34) VAR35,
              sizeof(*VAR19));
            if (VAR19 == (int *) NULL)
              FUN2(VAR57,VAR51);
            VAR31=VAR8;
            for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
            {
              if (VAR18->VAR55 == VAR76)
                VAR93=(unsigned short) ((*VAR31 << 8) | *(VAR31+1));
              else
                VAR93=(unsigned short) (*VAR31 | (*(VAR31+1) << 8));
              VAR19[VAR33]=(int) VAR93;
              VAR31+=2;
            }
            break;
          }
          default:
            break;
        }
        break;
      }
      case 0x2050:
      {
        switch (VAR45)
        {
          case 0x0020:
          {
            if ((VAR8 != (unsigned char *) NULL) &&
                (strncmp((char *) VAR8,VAR51,7) == 0))
              VAR17.VAR60=VAR79;
            break;
          }
          default:
            break;
        }
        break;
      }
      default:
        break;
    }
    if (VAR8 != (unsigned char *) NULL)
      {
        char
          *VAR94;
        for (VAR33=0; VAR77[VAR33].VAR82 != (char *) NULL; VAR33++)
          if ((VAR44 == VAR77[VAR33].VAR44) &&
              (VAR45 == VAR77[VAR33].VAR45))
            break;
        if (VAR77[VAR33].VAR82 != (char *) NULL)
          {
            VAR94=FUN32(VAR51);
            (void) FUN33(&VAR94,VAR77[VAR33].VAR82);
            for (VAR33=0; VAR33 < (VAR32) FUN34(VAR37,4); VAR33++)
              if (FUN35((int) VAR8[VAR33]) == VAR49)
                break;
            if ((VAR33 == (VAR32) VAR37) || (VAR37 > 4))
              {
                (void) FUN36(&VAR94,VAR51,VAR51);
                (void) FUN37(VAR18,VAR94,(char *) VAR8);
              }
            VAR94=FUN38(VAR94);
          }
      }
    if (VAR3->VAR81 != VAR49)
      {
        if (VAR8 == (unsigned char *) NULL)
          (void) FUN23(VAR83,VAR51,VAR20);
        else
          {
            for (VAR33=0; VAR33 < (VAR32) FUN34(VAR37,4); VAR33++)
              if (FUN35((int) VAR8[VAR33]) == VAR49)
                break;
            if ((VAR33 != (VAR32) VAR37) && (VAR37 <= 4))
              {
                VAR32
                  VAR95;
                VAR20=0;
                for (VAR95=(VAR32) VAR37-1; VAR95 >= 0; VAR95--)
                  VAR20=(256*VAR20+VAR8[VAR95]);
                (void) FUN23(VAR83,VAR51,VAR20);
              }
            else
              for (VAR33=0; VAR33 < (VAR32) VAR37; VAR33++)
                if (FUN35((int) VAR8[VAR33]) != VAR49)
                  (void) FUN23(VAR83,VAR51,VAR8[VAR33]);
                else
                  (void) FUN23(VAR83,VAR51,VAR75);
            (void) FUN23(VAR83,VAR51);
          }
      }
    if (VAR8 != (unsigned char *) NULL)
      VAR8=(unsigned char *) FUN3(VAR8);
    if (FUN39(VAR18) != VAR49)
      {
        FUN40(VAR5,VAR58,VAR51,
          VAR18->VAR52);
        break;
      }
  }
  if ((VAR41 == 0) || (VAR36 == 0))
    FUN2(VAR58,VAR51);
  VAR18->VAR96=(VAR34) VAR41;
  VAR18->VAR97=(VAR34) VAR36;
  if (VAR17.VAR68 == 0xffff)
    VAR17.VAR68=(VAR34) (VAR17.VAR69 == 16 ? 1 : 0);
  if ((VAR18->VAR87 == VAR88) ||
      (VAR18->VAR87 == VAR89))
    {
      VAR1
        *VAR98;
      VAR2
        *VAR99;
      int
        VAR100;
      VAR34
        VAR37;
      unsigned int
        VAR101;
      for (VAR33=0; VAR33 < (VAR32) VAR9->VAR102; VAR33++)
        (void) FUN24(VAR18);
      VAR101=(FUN17(VAR18) << 16) | FUN17(VAR18);
      (void) VAR101;
      VAR37=(VAR34) FUN41(VAR18);
      VAR9->VAR103=VAR37 >> 2;
      if (VAR9->VAR103 != 0)
        {
          VAR29
            VAR30;
          VAR9->VAR104=(VAR32 *) FUN26(
            VAR9->VAR103,sizeof(*VAR9->VAR104));
          if (VAR9->VAR104 == (VAR32 *) NULL)
            FUN2(VAR57,VAR51);
          for (VAR33=0; VAR33 < (VAR32) VAR9->VAR103; VAR33++)
            VAR9->VAR104[VAR33]=(VAR32) FUN19(VAR18);
          VAR30=FUN16(VAR18);
          for (VAR33=0; VAR33 < (VAR32) VAR9->VAR103; VAR33++)
            VAR9->VAR104[VAR33]+=VAR30;
        }
      VAR99=FUN42(VAR3);
      FUN43(VAR99,(void *) NULL,0);
      VAR98=FUN44();
      for (VAR43=0; VAR43 < (VAR32) VAR38; VAR43++)
      {
        char
          VAR52[VAR12];
        const char
          *VAR105;
        VAR106
          *VAR107;
        VAR1
          *VAR108;
        int
          VAR109;
        unsigned int
          VAR101;
        VAR101=(FUN17(VAR18) << 16) | FUN17(VAR18);
        VAR37=(VAR34) FUN41(VAR18);
        if (VAR101 == 0xFFFEE0DD)
          break;
        if (VAR101 != 0xFFFEE000)
          FUN2(VAR58,VAR51);
        VAR107=(VAR106 *) NULL;
        VAR109=FUN45(VAR52);
        if (VAR109 != -1)
          VAR107=fdopen(VAR109,VAR51);
        if (VAR107 == (VAR106 *) NULL)
          {
            (void) FUN46(VAR52);
            FUN40(VAR5,VAR110,
              VAR51,VAR52);
            break;
          }
        for ( ; VAR37 != 0; VAR37--)
        {
          VAR100=FUN24(VAR18);
          if (VAR100 == VAR111)
            {
              FUN40(VAR5,VAR58,
                VAR51,VAR18->VAR52);
              break;
            }
          (void) fputc(VAR100,VAR107);
        }
        (void) fclose(VAR107);
        (void) FUN47(VAR99->VAR52,VAR12,VAR51,
          VAR52);
        if (VAR18->VAR87 == VAR89)
          (void) FUN47(VAR99->VAR52,VAR12,VAR51,
            VAR52);
        VAR108=FUN48(VAR99,VAR5);
        if (VAR108 != (VAR1 *) NULL)
          {
            FUN49(VAR18);
            VAR105=FUN50(VAR18);
            while (VAR105 != (const char *) NULL)
            {
              (void) FUN37(VAR108,VAR105,
                FUN51(VAR18,VAR105));
              VAR105=FUN50(VAR18);
            }
            FUN52(&VAR98,VAR108);
          }
        (void) FUN46(VAR52);
      }
      VAR99=FUN53(VAR99);
      VAR18=FUN54(VAR18);
      return(FUN55(VAR98));
    }
  if (VAR17.VAR54 != (1UL*VAR112))
    {
      VAR113
        VAR114;
      VAR34
        VAR37;
      VAR37=(VAR34) (FUN30(VAR17.VAR54)+1);
      VAR17.VAR61=(VAR62 *) FUN26(VAR37,sizeof(*VAR17.VAR61));
      if (VAR17.VAR61 == (VAR62 *) NULL)
        FUN2(VAR57,VAR51);
      VAR114=FUN30(VAR17.VAR54);
      for (VAR33=0; VAR33 <= (VAR32) FUN30(VAR17.VAR54); VAR33++)
        VAR17.VAR61[VAR33]=FUN56((VAR34) VAR33,VAR114);
    }
  if (VAR18->VAR87 == VAR90)
    {
      VAR34
        VAR37;
      unsigned int
        VAR101;
      for (VAR33=0; VAR33 < (VAR32) VAR9->VAR102; VAR33++)
        (void) FUN24(VAR18);
      VAR101=(FUN17(VAR18) << 16) | FUN17(VAR18);
      (void) VAR101;
      VAR37=(VAR34) FUN41(VAR18);
      VAR9->VAR103=VAR37 >> 2;
      if (VAR9->VAR103 != 0)
        {
          VAR29
            VAR30;
          VAR9->VAR104=(VAR32 *) FUN26(
            VAR9->VAR103,sizeof(*VAR9->VAR104));
          if (VAR9->VAR104 == (VAR32 *) NULL)
            FUN2(VAR57,VAR51);
          for (VAR33=0; VAR33 < (VAR32) VAR9->VAR103; VAR33++)
            VAR9->VAR104[VAR33]=(VAR32) FUN19(VAR18);
          VAR30=FUN16(VAR18)+8;
          for (VAR33=0; VAR33 < (VAR32) VAR9->VAR103; VAR33++)
            VAR9->VAR104[VAR33]+=VAR30;
        }
    }
  for (VAR43=0; VAR43 < (VAR32) VAR38; VAR43++)
  {
    if (VAR3->VAR115 != VAR49)
      break;
    VAR18->VAR96=(VAR34) VAR41;
    VAR18->VAR97=(VAR34) VAR36;
    VAR18->VAR54=VAR17.VAR54;
    VAR40=FUN57(VAR18,VAR18->VAR96,VAR18->VAR97);
    if (VAR40 == VAR49)
      {
        FUN58(VAR5,&VAR18->VAR5);
        break;
      }
    VAR18->VAR116=VAR117;
    if ((VAR18->VAR118 == (VAR119 *) NULL) &&
        (VAR17.VAR67 == 1))
      {
        int
          VAR93;
        VAR34
          VAR120;
        VAR120=1;
        if (VAR35 == 0)
          VAR35=VAR120 << VAR17.VAR54;
        if (FUN59(VAR18,VAR35) == VAR49)
          FUN2(VAR57,VAR51);
        if (VAR23 != (int *) NULL)
          for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
          {
            VAR93=VAR23[VAR33];
            if ((VAR17.VAR61 != (VAR62 *) NULL) &&
                (VAR93 <= (int) VAR17.VAR66))
              VAR93=(int) VAR17.VAR61[VAR93];
            VAR18->VAR118[VAR33].VAR121=(VAR62) VAR93;
          }
        if (VAR21 != (int *) NULL)
          for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
          {
            VAR93=VAR21[VAR33];
            if ((VAR17.VAR61 != (VAR62 *) NULL) &&
                (VAR93 <= (int) VAR17.VAR66))
              VAR93=(int) VAR17.VAR61[VAR93];
            VAR18->VAR118[VAR33].VAR122=(VAR62) VAR93;
          }
        if (VAR19 != (int *) NULL)
          for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
          {
            VAR93=VAR19[VAR33];
            if ((VAR17.VAR61 != (VAR62 *) NULL) &&
                (VAR93 <= (int) VAR17.VAR66))
              VAR93=(int) VAR17.VAR61[VAR93];
            VAR18->VAR118[VAR33].VAR123=(VAR62) VAR93;
          }
        if (VAR22 != (int *) NULL)
          for (VAR33=0; VAR33 < (VAR32) VAR35; VAR33++)
          {
            VAR93=VAR22[VAR33];
            if ((VAR17.VAR61 != (VAR62 *) NULL) &&
                (VAR93 <= (int) VAR17.VAR66))
              VAR93=(int) VAR17.VAR61[VAR93];
            VAR18->VAR118[VAR33].VAR121=(VAR62) VAR93;
            VAR18->VAR118[VAR33].VAR122=(VAR62) VAR93;
            VAR18->VAR118[VAR33].VAR123=(VAR62) VAR93;
          }
      }
    if (VAR18->VAR87 == VAR90)
      {
        unsigned int
          VAR101;
        for (VAR33=0; VAR33 < (VAR32) VAR9->VAR102; VAR33++)
          (void) FUN24(VAR18);
        VAR101=(FUN17(VAR18) << 16) | FUN17(VAR18);
        VAR9->VAR102=(VAR34) FUN41(VAR18);
        if ((VAR101 != 0xFFFEE000) || (VAR9->VAR102 <= 64) ||
            (FUN39(VAR18) != VAR49))
          FUN2(VAR58,VAR51);
        VAR9->VAR42=0;
        VAR9->VAR124=FUN41(VAR18);
        for (VAR33=0; VAR33 < 15; VAR33++)
          VAR9->VAR125[VAR33]=(VAR32) FUN19(VAR18);
        VAR9->VAR102-=64;
        if (VAR9->VAR124 > 1)
          {
            VAR17.VAR64=1;
            VAR17.VAR54=8;
            if (VAR9->VAR103 > 0)
              (void) FUN14(VAR18,VAR9->VAR104[0]+
                VAR9->VAR125[0],VAR59);
          }
      }
    if ((VAR17.VAR67 > 1) && (VAR18->VAR91 == VAR92))
      {
        register VAR32
          VAR126;
        register VAR119
          *VAR127;
        VAR32
          VAR128;
        for (VAR33=0; VAR33 < (VAR32) VAR17.VAR67; VAR33++)
        {
          for (VAR128=0; VAR128 < (VAR32) VAR18->VAR97; VAR128++)
          {
            VAR127=FUN60(VAR18,0,VAR128,VAR18->VAR96,1,VAR5);
            if (VAR127 == (VAR119 *) NULL)
              break;
            for (VAR126=0; VAR126 < (VAR32) VAR18->VAR96; VAR126++)
            {
              switch ((int) VAR33)
              {
                case 0:
                {
                  FUN61(VAR127,FUN62((unsigned char)
                    FUN63(VAR9,VAR18)));
                  break;
                }
                case 1:
                {
                  FUN64(VAR127,FUN62((unsigned char)
                    FUN63(VAR9,VAR18)));
                  break;
                }
                case 2:
                {
                  FUN65(VAR127,FUN62((unsigned char)
                    FUN63(VAR9,VAR18)));
                  break;
                }
                case 3:
                {
                  FUN66(VAR127,FUN62((unsigned char)
                    FUN63(VAR9,VAR18)));
                  break;
                }
                default:
                  break;
              }
              VAR127++;
            }
            if (FUN67(VAR18,VAR5) == VAR49)
              break;
            if (VAR18->VAR129 == (VAR1 *) NULL)
              {
                VAR40=FUN68(VAR18,VAR130,(VAR29) VAR128,
                  VAR18->VAR97);
                if (VAR40 == VAR49)
                  break;
              }
          }
        }
      }
    else
      {
        const char
          *VAR131;
        VAR131=FUN69(VAR3,VAR51);
        if (VAR131 != (const char *) NULL)
          {
            if (FUN28(VAR131,VAR51) == 0)
              VAR17.VAR74=0;
          }
        VAR131=FUN69(VAR3,VAR51);
        if (VAR131 != (char *) NULL)
          {
            VAR132
              VAR133;
            VAR134
              VAR135;
            VAR135=FUN70(VAR131,&VAR133);
            if (VAR135 & VAR136)
              VAR17.VAR73=VAR133.VAR137;
            if (VAR135 & VAR138)
              VAR17.VAR74=VAR133.VAR139;
            VAR17.VAR70=VAR79;
          }
        VAR131=FUN69(VAR3,VAR51);
        if (VAR131 != (char *) NULL)
          VAR17.VAR70=FUN71(VAR131);
        if ((VAR17.VAR73 != 0) && (VAR17.VAR74 == 0))
          VAR17.VAR74=VAR17.VAR73;
        VAR40=FUN72(VAR18,&VAR17,VAR9,VAR79,VAR5);
        if ((VAR40 != VAR49) && (VAR9->VAR124 > 1))
          {
            if (VAR9->VAR103 > 0)
              (void) FUN14(VAR18,VAR9->VAR104[0]+
                VAR9->VAR125[1],VAR59);
            (void) FUN72(VAR18,&VAR17,VAR9,VAR49,VAR5);
          }
      }
    if (FUN73(VAR18,VAR5) != VAR49)
      (void) FUN74(VAR18,VAR140);
    if (FUN39(VAR18) != VAR49)
      {
        FUN40(VAR5,VAR58,VAR51,
          VAR18->VAR52);
        break;
      }
    if (VAR3->VAR38 != 0)
      if (VAR18->VAR43 >= (VAR3->VAR43+VAR3->VAR38-1))
        break;
    if (VAR43 < (VAR32) (VAR38-1))
      {
        FUN75(VAR3,VAR18);
        if (FUN76(VAR18) == (VAR1 *) NULL)
          {
            VAR18=FUN9(VAR18);
            return((VAR1 *) NULL);
          }
        VAR18=FUN77(VAR18);
        VAR40=FUN68(VAR18,VAR141,FUN16(VAR18),
          FUN25(VAR18));
        if (VAR40 == VAR49)
          break;
      }
  }
  if (VAR9->VAR104 != (VAR32 *) NULL)
    VAR9->VAR104=(VAR32 *)
      FUN3(VAR9->VAR104);
  VAR9=(VAR10 *) FUN3(VAR9);
  if (VAR17.VAR61 != (VAR62 *) NULL)
    VAR17.VAR61=(VAR62 *) FUN3(VAR17.VAR61);
  if (VAR22 != (int *) NULL)
    VAR22=(int *) FUN3(VAR22);
  if (VAR19 != (int *) NULL)
    VAR19=(int *) FUN3(VAR19);
  if (VAR21 != (int *) NULL)
    VAR21=(int *) FUN3(VAR21);
  if (VAR23 != (int *) NULL)
    VAR23=(int *) FUN3(VAR23);
  (void) FUN78(VAR18);
  return(FUN55(VAR18));
}