FUN1(VAR1 *VAR2, BOOL VAR3, VAR1 **VAR4,
  BOOL VAR5, BOOL VAR6, VAR7 *VAR8)
{
int VAR9 = 0;
int VAR10 = FUN2(VAR2)+ 64;
int VAR11;
VAR1 *VAR12 = FUN3(VAR10);
VAR1 *VAR13 = VAR2;
VAR1 *VAR14[VAR15+1];
int VAR16[VAR15+1];
BOOL VAR17 = VAR18;
VAR19 = VAR20;
VAR21 = VAR22;
while (*VAR13 != 0)
  {
  VAR1 *VAR23;
  uschar VAR24[256];
  if (*VAR13 == VAR25)
    {
    if (VAR13[1] == 0)
      {
      VAR21 = VAR22;
      goto VAR26;
      }
    if (VAR13[1] == VAR25)
      {
      VAR1 *VAR27 = VAR13 + 2;
      for (VAR13 = VAR27; *VAR13 != 0; VAR13++) if (*VAR13 == VAR25 && VAR13[1] == VAR25) break;
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, VAR13 - VAR27);
      if (*VAR13 != 0) VAR13 += 2;
      }
    else
      {
      uschar VAR28[1];
      VAR28[0] = FUN5(&VAR13);
      VAR13++;
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR28, 1);
      }
    continue;
    }
  if (VAR3 && *VAR13 == VAR25) break;
  if (*VAR13 != VAR25 || !VAR6)
    {
    VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR13++, 1);
    continue;
    }
  if (FUN6((*(++VAR13))))
    {
    int VAR29;
    int VAR30 = 0;
    VAR13 = FUN7(VAR24, sizeof(VAR24), VAR13, VAR22);
    if (VAR9 == 0 && VAR12 != NULL)
      {
      if (VAR17) FUN8(VAR12);
      VAR12 = NULL;
      VAR10 = 0;
      }
    if (FUN9(VAR24, VAR31, 2) == 0 ||
        FUN9(VAR24, VAR31, 3) == 0 ||
        FUN9(VAR24, VAR31, 3) == 0 ||
        FUN9(VAR24, VAR31, 7) == 0 ||
        FUN9(VAR24, VAR31, 8) == 0 ||
        FUN9(VAR24, VAR31, 8) == 0)
      {
      BOOL VAR32 = (VAR24[0] == VAR25)? VAR18 : VAR20;
      VAR1 *VAR33 = (VAR24[0] == VAR25)? NULL : VAR34;
      VAR13 = FUN10(VAR24, sizeof(VAR24), VAR13);
      VAR23 = FUN11(VAR24, VAR20, &VAR30, VAR32, VAR33);
      if (VAR23 == NULL)
        {
        if (FUN12(VAR24, VAR25) != NULL) VAR35 = VAR18;
        continue;
        }
      }
    else
      {
      VAR23 = FUN13(VAR24, VAR20, VAR5, &VAR30);
      if (VAR23 == NULL)
        {
        VAR21 =
          FUN14(VAR31%VAR13\VAR31, VAR24);
          FUN15(VAR24);
        goto VAR26;
        }
      }
    VAR29 = FUN2(VAR23);
    if (VAR12 == NULL && VAR30 != 0)
      {
      VAR12 = VAR23;
      VAR10 = VAR30;
      VAR9 = VAR29;
      }
    else VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR23, VAR29);
    continue;
    }
  if (FUN16(*VAR13))
    {
    int VAR36;
    VAR13 = FUN17(&VAR36, VAR13);
    if (VAR36 >= 0 && VAR36 <= VAR37)
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR38[VAR36],
        VAR39[VAR36]);
    continue;
    }
  if (*VAR13 != VAR25)
    {
    VAR21 = VAR22;
    goto VAR26;
    }
  if (FUN16((*(++VAR13))))
    {
    int VAR36;
    VAR13 = FUN17(&VAR36, VAR13);
    if (*VAR13++ != VAR25)
      {
      VAR21 = VAR22;
      goto VAR26;
      }
    if (VAR36 >= 0 && VAR36 <= VAR37)
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR38[VAR36],
        VAR39[VAR36]);
    continue;
    }
  if (!FUN6(*VAR13))
    {
    VAR21 = VAR22;
    goto VAR26;
    }
  VAR13 = FUN7(VAR24, sizeof(VAR24), VAR13, VAR22);
  VAR11 = FUN18(VAR24, VAR40, sizeof(VAR40)/sizeof(VAR1 *));
  switch(VAR11)
    {
    case VAR41:
      {
      VAR1 *VAR42[10];
      VAR1 *VAR43;
      switch(FUN19(VAR42, 10, 1, &VAR13, VAR5, VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR5) continue;
      VAR17 = VAR20;
      switch(FUN20(VAR42, sizeof(VAR42)/sizeof(*VAR42), &VAR43))
	{
	case VAR45:
	case VAR46:
	  FUN21(VAR47)
	    FUN22(VAR31, VAR43);
	  if (VAR43)
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR43, FUN2(VAR43));
	  continue;
	case VAR48:
          VAR19 = VAR18;
	default:
          VAR21 = FUN14(VAR31%VAR13\VAR31, VAR42[0]);
	  goto VAR26;
	}
      }
    case VAR49:
      {
      BOOL VAR50 = VAR20;
      VAR1 *VAR51;
      int VAR52 =
        FUN23(VAR14, VAR16);
      while (FUN24(*VAR13)) VAR13++;
      VAR51 = FUN25(VAR13, &VAR17, VAR5? NULL : &VAR50);
      if (VAR51 == NULL) goto VAR26;
      FUN21(VAR47)
        FUN22(VAR31, (int)(VAR51 - VAR13), VAR13,
          VAR50? VAR31 : VAR31);
      VAR13 = VAR51;
      switch(FUN26(
               VAR5,
               VAR50,
               VAR53,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
    case VAR54:
      {
      int VAR55, VAR56, VAR57, VAR58;
      int VAR59 = 0;
      int VAR60 = 0;
      VAR1 *VAR61, *VAR62, *VAR63;
      VAR1 *VAR64 = VAR53;
      int VAR52 =
        FUN23(VAR14, VAR16);
      if ((VAR65 & VAR66) != 0)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13 == VAR25)
        {
        VAR61 = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
        if (VAR61 == NULL) goto VAR26;
        if (*VAR13++ != VAR25) goto VAR44;
        while (FUN24(*VAR13)) VAR13++;
        }
      else VAR61 = NULL;
      if (!FUN6(*VAR13))
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      while (*VAR13 != 0 && *VAR13 != VAR25 && !FUN24(*VAR13))
        {
        if (VAR60 < sizeof(VAR24) - 1) VAR24[VAR60++] = *VAR13;
        VAR13++;
        }
      VAR24[VAR60] = 0;
      while (FUN24(*VAR13)) VAR13++;
      VAR55 = FUN28(VAR24, &VAR56, &VAR63, &VAR57,
        &VAR58);
      if (VAR55 < 0)
        {
        VAR21 = VAR67;
        goto VAR26;
        }
      if (!FUN29(VAR55, VAR68|VAR69))
        {
        if (VAR61 == NULL)
          {
          VAR21 = FUN14(VAR31
            VAR31%VAR13\VAR31, VAR24);
          goto VAR26;
          }
        }
      else
        {
        if (VAR61 != NULL)
          {
          VAR21 = FUN14(VAR31
            VAR31%VAR13\VAR31, VAR24);
          goto VAR26;
          }
        }
      if (*VAR13 != VAR25) goto VAR44;
      VAR62 = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
      if (VAR62 == NULL) goto VAR26;
      if (*VAR13++ != VAR25) goto VAR44;
      while (FUN24(*VAR13)) VAR13++;
      if (VAR61 == NULL)
        {
        while (FUN24(*VAR62)) VAR62++;
        VAR61 = VAR62;
        if (FUN29(VAR55, VAR68))
          {
          VAR62 = NULL;
          }
        else
          {
          if (*VAR62 != VAR25)
            {
            VAR21 = FUN14(
              VAR31%VAR13\VAR31, VAR24);
            goto VAR26;
            }
          while (*VAR61 != 0 && !FUN24(*VAR61)) VAR61++;
          if (*VAR61 != 0) *VAR61++ = 0;
          }
        }
      if (VAR5)
        VAR53 = NULL;
      else
        {
        void *VAR70 = FUN30(VAR62, VAR55, 0, NULL, NULL);
        if (VAR70 == NULL)
          {
          VAR21 = VAR67;
          goto VAR26;
          }
        VAR53 = FUN31(VAR70, VAR62, VAR61, VAR56, VAR63,
          VAR57, VAR58, &VAR59);
        if (VAR71)
          {
          VAR21 =
            FUN14(VAR31%VAR13\VAR31,
              FUN32(VAR61, VAR20), VAR67);
          goto VAR26;
          }
        if (VAR59 > 0) VAR37 = VAR59;
        }
      switch(FUN26(
               VAR5,
               VAR53 != NULL,
               VAR64,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
    #define EXIM_PERL_MAX_ARGS 8
    case VAR72:
    #ifndef VAR73
    VAR21 = VAR22${VAR74\VAR31
      VAR31;
    goto VAR26;
    #else
      {
      VAR1 *VAR75[VAR76 + 2];
      VAR1 *VAR77;
      if ((VAR65 & VAR78) != 0)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      switch(FUN19(VAR75, VAR76 + 1, 1, &VAR13, VAR5, VAR18,
           VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR5) continue;
      if (!VAR79)
        {
        VAR1 *VAR80;
        if (VAR81 == NULL)
          {
          VAR21 = VAR22
            VAR31;
          goto VAR26;
          }
        FUN21(VAR82) FUN22(VAR31);
        VAR80 = FUN33(VAR81);
        if (VAR80 != NULL)
          {
          VAR21 =
            FUN14(VAR31, VAR80);
          goto VAR26;
          }
        VAR79 = VAR18;
        }
      VAR75[VAR76 + 1] = NULL;
      VAR77 = FUN34(VAR12, &VAR10, &VAR9, &VAR21,
        VAR75[0], VAR75 + 1);
      if (VAR77 == NULL)
        {
        if (VAR21 == NULL)
          {
          VAR21 =
            FUN14(VAR31%VAR13\VAR31
              VAR31, VAR75[0]);
          VAR19 = VAR18;
          }
        goto VAR26;
        }
      VAR19 = VAR20;
      VAR12 = VAR77;
      continue;
      }
    #VAR83
    case VAR84:
      {
      VAR1 *VAR75[3];
      VAR1 *VAR85,*VAR86;
      switch(FUN19(VAR75, 3, 2, &VAR13, VAR5, VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR5) continue;
      VAR86 = FUN35(VAR75[0],VAR25);
      if ( (VAR86 == NULL) || (VAR86 == VAR75[0]) || (FUN2(VAR86) == 1) )
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      if (VAR75[2] != NULL &&
          (!FUN16(VAR75[2][0]) || VAR75[2][1] != 0))
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      VAR85 = FUN36(VAR75[0],VAR75[1],VAR75[2],FUN37(7));
      if (VAR85 == NULL)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      *VAR86++ = VAR25;
      VAR12 = FUN4(VAR12,&VAR10,&VAR9,VAR22,5);
      FUN4(VAR12,&VAR10,&VAR9,(VAR75[2] != NULL) ? VAR75[2] : VAR22, 1);
      FUN4(VAR12,&VAR10,&VAR9,FUN37(7),3);
      FUN4(VAR12,&VAR10,&VAR9,VAR85,6);
      FUN4(VAR12,&VAR10,&VAR9,VAR22,1);
      FUN4(VAR12,&VAR10,&VAR9,VAR75[0],FUN2(VAR75[0]));
      FUN4(VAR12,&VAR10,&VAR9,VAR22,1);
      FUN4(VAR12,&VAR10,&VAR9,VAR86,FUN2(VAR86));
      continue;
      }
    case VAR87:
      {
      VAR1 *VAR75[3];
      int VAR88 = 0, VAR89 = 0;
      const VAR90 *VAR91;
      VAR1 *VAR85;
      VAR92 = NULL;
      VAR93 = NULL;
      VAR94 = NULL;
      switch(FUN19(VAR75, 1, 1, &VAR13, VAR5, VAR20, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      VAR91 = FUN38(VAR22,
                              VAR18,VAR20);
      if (FUN39(VAR91,VAR75[0],0,-1))
        {
        VAR1 *VAR95 = FUN40(VAR38[4],VAR39[4]);
        VAR1 *VAR96 = FUN40(VAR38[1],VAR39[1]);
        VAR1 *VAR97 = FUN40(VAR38[2],VAR39[2]);
        VAR1 *VAR98 = FUN40(VAR38[3],VAR39[3]);
        VAR1 *VAR86 = FUN40(VAR38[5],VAR39[5]);
        FUN21(VAR47) FUN22(VAR31, VAR95);
        FUN21(VAR47) FUN22(VAR31, VAR96);
        FUN21(VAR47) FUN22(VAR31, VAR97);
        FUN21(VAR47) FUN22(VAR31, VAR98);
        FUN21(VAR47) FUN22(VAR31, VAR86);
        VAR93 = FUN4(NULL, &VAR88, &VAR89, VAR95, FUN2(VAR95));
        FUN4(VAR93,&VAR88,&VAR89,VAR22,1);
        FUN4(VAR93,&VAR88,&VAR89,VAR86,FUN2(VAR86));
        VAR93[VAR89] = VAR25;
        VAR94 = FUN41(VAR96);
        switch(FUN19(VAR75, 1, 1, &VAR13, VAR5, VAR20, VAR22, &VAR17))
          {
          case 1: goto VAR44;
          case 2:
          case 3: goto VAR26;
          }
        VAR85 = FUN36(VAR93, VAR75[0], VAR94,
          VAR97);
        if (VAR85 == NULL)
          {
          VAR21 = VAR22;
          goto VAR26;
          }
        FUN21(VAR47) FUN22(VAR31, VAR98);
        FUN21(VAR47) FUN22(VAR31, VAR85);
        if (FUN42(VAR85,VAR98) == 0)
          {
          VAR1 *VAR99 = FUN37(0);
          unsigned int VAR100 = 0,VAR101 = 1;
          (void)sscanf(CS VAR99,VAR31,&VAR100);
          (void)sscanf(CS VAR97,VAR31,&VAR101);
          if ( (VAR101 < 7) && (VAR100 >= 993) ) VAR100 = 0;
          if (VAR101 >= VAR100)
            {
            VAR92 = VAR22;
            FUN21(VAR47) FUN22(VAR31);
            }
            else
            {
            VAR92 = NULL;
            FUN21(VAR47) FUN22(VAR31);
            }
          }
        else
          {
          VAR92 = NULL;
          FUN21(VAR47) FUN22(VAR31);
          }
        switch(FUN19(VAR75, 1, 0, &VAR13, VAR5, VAR18, VAR22, &VAR17))
          {
          case 1: goto VAR44;
          case 2:
          case 3: goto VAR26;
          }
        if (VAR75[0] == NULL || *VAR75[0] == VAR25)
          VAR12 = FUN4(VAR12,&VAR10,&VAR9,VAR93,FUN2(VAR93));
        else
          VAR12 = FUN4(VAR12,&VAR10,&VAR9,VAR75[0],FUN2(VAR75[0]));
        VAR93 = NULL;
        VAR94 = NULL;
        }
      else
        {
        switch(FUN19(VAR75, 2, 1, &VAR13, VAR5, VAR18, VAR22, &VAR17))
          {
          case 1: goto VAR44;
          case 2:
          case 3: goto VAR26;
          }
        }
      continue;
      }
    case VAR102:
      {
      VAR103 *VAR104;
      VAR1 *VAR75[2];
      if ((VAR65 & VAR105) != 0)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      switch(FUN19(VAR75, 2, 1, &VAR13, VAR5, VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR5) continue;
      VAR104 = FUN43(VAR75[0], VAR31);
      if (VAR104 == NULL)
        {
        VAR21 = FUN44(VAR106, VAR31, VAR75[0]);
        goto VAR26;
        }
      VAR12 = FUN45(VAR104, VAR12, &VAR10, &VAR9, VAR75[1]);
      (void)fclose(VAR104);
      continue;
      }
    case VAR107:
      {
      int VAR108;
      int VAR109 = 5;
      int VAR110 = VAR9;
      VAR103 *VAR104;
      struct sockaddr_un VAR111;
      VAR1 *VAR112;
      VAR1 *VAR75[4];
      if ((VAR65 & VAR113) != 0)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      switch(FUN19(VAR75, 4, 2, &VAR13, VAR5, VAR20, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR75[2] != NULL)
        {
        VAR109 = FUN46(VAR75[2], 0, VAR20);
        if (VAR109 < 0)
          {
          VAR21 = FUN14(VAR31,
            VAR75[2]);
          goto VAR26;
          }
        }
      else VAR75[3] = NULL;
      if (!VAR5)
        {
        if (FUN9(VAR75[0], VAR31, 5) == 0)
          {
          int VAR114;
          VAR1 *VAR115 = VAR75[0] + 5;
          VAR1 *VAR116 = FUN35(VAR115, VAR25);
          if (VAR116 == NULL)
            {
            VAR21 =
              FUN14(VAR31, VAR75[0]);
            goto VAR26;
            }
          *VAR116++ = 0;
          if (FUN16(*VAR116))
            {
            VAR1 *VAR117;
            VAR114 = FUN47(VAR116, &VAR117, 0);
            if (VAR117 != VAR116 + FUN2(VAR116))
              {
              VAR21 =
                FUN14(VAR31, VAR116);
              goto VAR26;
              }
            }
          else
            {
            struct VAR118 *VAR119 = getservbyname(CS VAR116, VAR31);
            if (VAR119 == NULL)
              {
              VAR21 = FUN14(VAR31%VAR13\VAR31,
                VAR116);
              goto VAR26;
              }
            VAR114 = FUN48(VAR119->VAR120);
            }
	  if ((VAR108 = FUN49(VAR121, VAR115, VAR114, VAR114,
		  VAR109, NULL, &VAR21)) < 0)
              goto VAR122;
          }
        else
          {
          int VAR123;
          if ((VAR108 = socket(VAR124, VAR121, 0)) == -1)
            {
            VAR21 = FUN14(VAR31,
              strerror(VAR106));
            goto VAR122;
            }
          VAR111.VAR125 = VAR126;
          sprintf(VAR111.VAR127, VAR31, (int)(sizeof(VAR111.VAR127)-1),
            VAR75[0]);
          VAR128 = VAR20;
          FUN50(VAR109);
          VAR123 = connect(VAR108, (struct VAR129 *)(&VAR111), sizeof(VAR111));
          FUN50(0);
          if (VAR128)
            {
            VAR21 = US VAR31;
            goto VAR122;
            }
          if (VAR123 < 0)
            {
            VAR21 = FUN14(VAR31
              VAR31, VAR75[0], strerror(VAR106));
            goto VAR122;
            }
          }
        FUN21(VAR47) FUN22(VAR31, VAR75[0]);
	if (VAR130) FUN51(100);
        if (VAR75[1][0] != 0)
          {
          int VAR29 = FUN2(VAR75[1]);
          FUN21(VAR47) FUN22(VAR31%VAR13\VAR31,
            VAR75[1]);
          if (write(VAR108, VAR75[1], VAR29) != VAR29)
            {
            VAR21 = FUN14(VAR31
              VAR31, strerror(VAR106));
            goto VAR122;
            }
          }
        #ifdef VAR131
        FUN52(VAR108, VAR131);
        #VAR83
	if (VAR130) FUN51(100);
        VAR104 = fdopen(VAR108, VAR31);
        VAR128 = VAR20;
        FUN50(VAR109);
        VAR12 = FUN45(VAR104, VAR12, &VAR10, &VAR9, VAR75[3]);
        FUN50(0);
        (void)fclose(VAR104);
        if (VAR128)
          {
          VAR9 = VAR110;
          VAR21 = US VAR31;
          goto VAR122;
          }
        }
      if (*VAR13 == VAR25)
        {
        if (FUN1(VAR13+1, VAR18, &VAR13, VAR18, VAR18, &VAR17) == NULL)
          goto VAR26;
        if (*VAR13++ != VAR25) goto VAR44;
        while (FUN24(*VAR13)) VAR13++;
        }
      if (*VAR13++ != VAR25) goto VAR44;
      continue;
      VAR122:
      if (*VAR13 != VAR25) goto VAR26;
      FUN21(VAR82) FUN22(VAR31, VAR21);
      VAR112 = FUN1(VAR13+1, VAR18, &VAR13, VAR20, VAR18, &VAR17);
      if (VAR112 == NULL) goto VAR26;
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR112, FUN2(VAR112));
      if (*VAR13++ != VAR25) goto VAR44;
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25) goto VAR44;
      continue;
      }
    case VAR132:
      {
      VAR103 *VAR104;
      VAR1 *VAR112;
      VAR1 **argv;
      pid_t VAR133;
      int VAR134, VAR135;
      int VAR136 = 0;
      int VAR137 = 0;
      if ((VAR65 & VAR138) != 0)
        {
        VAR21 = VAR22;
        goto VAR26;
        }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13 != VAR25) goto VAR44;
      VAR112 = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
      if (VAR112 == NULL) goto VAR26;
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25) goto VAR44;
      if (VAR5)
        {
        VAR139 = 0;
        }
      else
        {
        if (!FUN53(&argv,
            VAR112,
            VAR20,
            0,
            NULL,
            VAR22,
            &VAR21))
          {
          goto VAR26;
          }
        VAR133 = FUN54(argv, NULL, 0077, &VAR134, &VAR135, VAR18);
        if (VAR133 < 0)
          {
          VAR21 =
            FUN14(VAR31, strerror(VAR106));
          goto VAR26;
          }
        (void)close(VAR134);
        VAR104 = fdopen(VAR135, VAR31);
        VAR128 = VAR20;
        FUN50(60);
        VAR53 = FUN45(VAR104, VAR53, &VAR136, &VAR137, NULL);
        FUN50(0);
        (void)fclose(VAR104);
        if (VAR128 == VAR18 || (VAR139 = FUN55(VAR133, 30)) < 0)
          {
          if (VAR128 == VAR18 || VAR139 == -256)
            {
            VAR21 = FUN14(VAR31);
            FUN56(VAR133, VAR140);
            }
          else if (VAR139 == -257)
            VAR21 = FUN14(VAR31,
              strerror(VAR106));
          else
            VAR21 = FUN14(VAR31,
              -VAR139);
          goto VAR26;
          }
        }
      switch(FUN26(
               VAR5,
               VAR139 == 0,
               VAR53,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      continue;
      }
    case VAR141:
      {
      int VAR142 = VAR9;
      int VAR143;
      VAR1 *VAR42[3];
      switch(FUN19(VAR42, 3, 3, &VAR13, VAR5, VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42[0], FUN2(VAR42[0]));
      VAR143 = FUN2(VAR42[2]) - 1;
      if (VAR143 >= 0) for (; VAR142 < VAR9; VAR142++)
        {
        VAR1 *VAR144 = FUN35(VAR42[1], VAR12[VAR142]);
        if (VAR144 != NULL)
          {
          int VAR145 = VAR144 - VAR42[1];
          VAR12[VAR142] = VAR42[2][(VAR145 < VAR143)? VAR145 : VAR143];
          }
        }
      continue;
      }
    case VAR146:
    case VAR147:
    case VAR148:
    case VAR149:
      {
      int VAR150;
      int VAR29;
      VAR1 *VAR151;
      int VAR152[2] = { 0, -1 };
      VAR1 *VAR42[3];
      VAR42[2] = NULL;
      switch(FUN19(VAR42, (VAR11 == VAR147)? 2:3, 2, &VAR13, VAR5,
             VAR18, VAR24, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR42[2] == NULL)
        {
        VAR42[2] = VAR42[1];
        VAR42[1] = NULL;
        if (VAR11 == VAR147)
          {
          VAR42[1] = VAR42[0];
          VAR42[0] = NULL;
          }
        }
      for (VAR150 = 0; VAR150 < 2; VAR150++)
        {
        if (VAR42[VAR150] == NULL) continue;
        VAR152[VAR150] = (int)FUN47(VAR42[VAR150], &VAR151, 10);
        if (*VAR151 != 0 || (VAR150 != 0 && VAR152[VAR150] < 0))
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31
            VAR31%VAR13\VAR31, VAR42[VAR150], (VAR150 != 0)? VAR31 : VAR31, VAR24);
          goto VAR26;
          }
        }
      VAR151 =
        (VAR11 == VAR146)?
          FUN57(VAR42[2], VAR152[0], VAR152[1], &VAR29) :
        (VAR11 == VAR148)?
          FUN58(VAR42[2], VAR152[0], VAR152[1], &VAR29) :
          FUN59(VAR42[2], VAR152[0], VAR152[1], &VAR29);
      if (VAR151 == NULL) goto VAR26;
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR151, VAR29);
      continue;
      }
    #define MAX_HASHLEN      20
    #define MAX_HASHBLOCKLEN 64
    case VAR153:
      {
      VAR1 *VAR42[3];
      md5 VAR154;
      sha1 VAR155;
      void *VAR156;
      int VAR157, VAR150;
      int VAR158;
      int VAR159;
      VAR1 *VAR160, *VAR85;
      unsigned int VAR161;
      uschar VAR162[VAR163];
      uschar VAR164[VAR163];
      uschar VAR165[VAR163];
      uschar VAR166[2*VAR163];
      uschar VAR167[VAR168];
      uschar VAR169[VAR168];
      switch (FUN19(VAR42, 3, 3, &VAR13, VAR5, VAR18, VAR24, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (FUN42(VAR42[0], VAR31) == 0)
        {
        VAR157 = VAR170;
        VAR156 = &VAR154;
        VAR158 = 16;
        VAR159 = 64;
        }
      else if (FUN42(VAR42[0], VAR31) == 0)
        {
        VAR157 = VAR171;
        VAR156 = &VAR155;
        VAR158 = 20;
        VAR159 = 64;
        }
      else
        {
        VAR21 =
          FUN14(VAR31%VAR13\VAR31, VAR42[0]);
        goto VAR26;
        }
      VAR160 = VAR42[1];
      VAR161 = FUN2(VAR160);
      if (VAR161 > VAR159)
        {
        FUN60(VAR157, VAR156);
        FUN61(VAR157, VAR156, VAR160, VAR161, VAR162);
        VAR160 = VAR162;
        VAR161 = VAR158;
        }
      memset(VAR167, 0x36, VAR159);
      memset(VAR169, 0x5c, VAR159);
      for (VAR150 = 0; VAR150 < VAR161; VAR150++)
        {
        VAR167[VAR150] ^= VAR160[VAR150];
        VAR169[VAR150] ^= VAR160[VAR150];
        }
      FUN60(VAR157, VAR156);
      FUN62(VAR157, VAR156, VAR167);
      FUN61(VAR157, VAR156, VAR42[2], FUN2(VAR42[2]), VAR164);
      FUN60(VAR157, VAR156);
      FUN62(VAR157, VAR156, VAR169);
      FUN61(VAR157, VAR156, VAR164, VAR158, VAR165);
      VAR85 = VAR166;
      for (VAR150 = 0; VAR150 < VAR158; VAR150++)
        {
        *VAR85++ = VAR172[(VAR165[VAR150] & 0xf0) >> 4];
        *VAR85++ = VAR172[VAR165[VAR150] & 0x0f];
        }
      FUN21(VAR82) FUN22(VAR31, VAR42[0],
        (int)VAR161, VAR160, FUN2(VAR42[2]), VAR42[2], VAR158*2, VAR166);
      VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR166, VAR158*2);
      }
    continue;
    case VAR173:
      {
      const VAR90 *VAR91;
      int VAR174, VAR175, VAR176;
      int VAR177;
      int VAR178;
      const VAR1 *VAR179;
      VAR1 *VAR180;
      VAR1 *VAR42[3];
      int VAR52 =
        FUN23(VAR14, VAR16);
      switch(FUN19(VAR42, 3, 3, &VAR13, VAR5, VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      VAR91 = pcre_compile(CS VAR42[1], VAR181, (const char **)&VAR179, &VAR177,
        NULL);
      if (VAR91 == NULL)
        {
        VAR21 = FUN14(VAR31
          VAR31%VAR13\VAR31, VAR42[1], VAR179, VAR177);
        goto VAR26;
        }
      VAR180 = VAR42[0];
      VAR176 = FUN2(VAR42[0]);
      VAR174 = VAR175 = 0;
      VAR178 = 0;
      for (;;)
        {
        int VAR182[3*(VAR15+1)];
        int VAR36 = FUN63(VAR91, NULL, CS VAR180, VAR176, VAR174 + VAR175,
          VAR183 | VAR178, VAR182, sizeof(VAR182)/sizeof(int));
        int VAR184;
        VAR1 *VAR185;
        if (VAR36 < 0)
          {
          if (VAR178 != 0)
            {
            VAR175 = 1;
            VAR178 = 0;
            continue;
            }
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR180+VAR174, VAR176-VAR174);
          break;
          }
        if (VAR36 == 0) VAR36 = VAR15 + 1;
        VAR37 = 0;
        for (VAR184 = 0; VAR184 < VAR36*2; VAR184 += 2)
          {
          VAR38[VAR37] = VAR180 + VAR182[VAR184];
          VAR39[VAR37++] = VAR182[VAR184+1] - VAR182[VAR184];
          }
        VAR37--;
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR180 + VAR174,
          VAR182[0] - VAR174);
        VAR185 = FUN64(VAR42[2]);
        if (VAR185 == NULL) goto VAR26;
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR185, FUN2(VAR185));
        VAR174 = VAR182[1];
        VAR175 = 0;
        VAR178 = 0;
        if (VAR182[0] == VAR182[1])
          {
          if (VAR182[0] == VAR176) break;
          VAR178 = VAR186 | VAR187;
          }
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
    case VAR188:
      {
      int VAR150;
      int VAR189 = 2;
      int VAR190 = 1;
      BOOL VAR191 = VAR20;
      VAR1 *VAR64 = VAR53;
      VAR1 *VAR42[3];
      int VAR52 =
        FUN23(VAR14, VAR16);
      for (VAR150 = 0; VAR150 < VAR189; VAR150++)
        {
        while (FUN24(*VAR13)) VAR13++;
        if (*VAR13 == VAR25)
          {
          VAR42[VAR150] = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
          if (VAR42[VAR150] == NULL) goto VAR26;
          if (*VAR13++ != VAR25) goto VAR44;
          if (VAR150 == 0)
            {
            int VAR29;
            int VAR192 = 0;
            VAR1 *VAR85 = VAR42[0];
            while (FUN24(*VAR85)) VAR85++;
            VAR42[0] = VAR85;
            VAR29 = FUN2(VAR85);
            while (VAR29 > 0 && FUN24(VAR85[VAR29-1])) VAR29--;
            VAR85[VAR29] = 0;
            if (*VAR85 == 0 && !VAR5)
              {
              VAR21 = VAR193\VAR31
                VAR31;
              goto VAR26;
              }
            if (*VAR85 == VAR25)
              {
              VAR190 = -1;
              VAR85++;
              }
            while (*VAR85 != 0 && FUN16(*VAR85)) VAR192 = VAR192 * 10 + *VAR85++ - VAR25;
            if (*VAR85 == 0)
              {
              VAR190 *= VAR192;
              VAR189 = 3;
              VAR191 = VAR18;
              }
            }
          }
        else goto VAR44;
        }
      VAR53 = VAR5? NULL : VAR191?
        FUN65(VAR190, VAR42[1], VAR42[2]) :
        FUN66(VAR42[0], VAR42[1]);
      switch(FUN26(
               VAR5,
               VAR53 != NULL,
               VAR64,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
    case VAR194:
      {
      int VAR150;
      int VAR190 = 1;
      VAR1 *VAR64 = VAR53;
      VAR1 *VAR42[2];
      int VAR52 =
        FUN23(VAR14, VAR16);
      for (VAR150 = 0; VAR150 < 2; VAR150++)
        {
        while (FUN24(*VAR13)) VAR13++;
        if (*VAR13 != VAR25)
	  goto VAR44;
	VAR42[VAR150] = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
	if (!VAR42[VAR150])     goto VAR26;
	if (*VAR13++ != VAR25) goto VAR44;
	if (VAR150 == 0)
	  {
	  int VAR29;
	  int VAR192 = 0;
	  VAR1 *VAR85 = VAR42[0];
	  while (FUN24(*VAR85)) VAR85++;
	  VAR42[0] = VAR85;
	  VAR29 = FUN2(VAR85);
	  while (VAR29 > 0 && FUN24(VAR85[VAR29-1])) VAR29--;
	  VAR85[VAR29] = 0;
	  if (!*VAR85 && !VAR5)
	    {
	    VAR21 = VAR195\VAR31
	      VAR31;
	    goto VAR26;
	    }
	  if (*VAR85 == VAR25)
	    {
	    VAR190 = -1;
	    VAR85++;
	    }
	  while (*VAR85 && FUN16(*VAR85)) VAR192 = VAR192 * 10 + *VAR85++ - VAR25;
	  if (*VAR85)
	    {
	    VAR21 = VAR195\VAR31
	      VAR31;
	    goto VAR26;
	    }
	  VAR190 *= VAR192;
	  }
        }
      VAR53 = VAR5? NULL : FUN67(VAR190, VAR42[1]);
      switch(FUN26(
               VAR5,
               VAR53 != NULL,
               VAR64,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
#ifdef VAR196
    case VAR197:
      {
      VAR1 *VAR64 = VAR53;
      VAR1 *VAR42[2];
      int VAR52 =
        FUN23(VAR14, VAR16);
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13 != VAR25)
	goto VAR44;
      VAR42[0] = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
      if (!VAR42[0])     goto VAR26;
      if (*VAR13++ != VAR25) goto VAR44;
      {
      int VAR29;
      VAR1 *VAR85 = VAR42[0];
      while (FUN24(*VAR85)) VAR85++;
      VAR42[0] = VAR85;
      VAR29 = FUN2(VAR85);
      while (VAR29 > 0 && FUN24(VAR85[VAR29-1])) VAR29--;
      VAR85[VAR29] = 0;
      }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13 != VAR25)
	goto VAR44;
      if (*++VAR13 != VAR25)
        {
	VAR21 = VAR198\VAR31
	  VAR31;
	goto VAR26;
	}
      VAR42[1] = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR20, &VAR17);
      if (!VAR42[1])     goto VAR26;
      if (*VAR13++ != VAR25) goto VAR44;
      if (VAR5)
	VAR53 = NULL;
      else
	{
	VAR53 = FUN68(VAR42[0], VAR42[1]);
	if (*VAR21) goto VAR26;
	}
      switch(FUN26(
               VAR5,
               VAR53 != NULL,
               VAR64,
               &VAR13,
               &VAR12,
               &VAR10,
               &VAR9,
               VAR22,
	       &VAR17))
        {
        case 1: goto VAR26;
        case 2: goto VAR44;
        }
      FUN27(VAR52, VAR14,
        VAR16);
      continue;
      }
#VAR83
    case VAR199:
    case VAR200:
    case VAR201:
      {
      int VAR202 = 0;
      int VAR110 = VAR9;
      uschar VAR203[2] = { VAR25, VAR25 };
      VAR1 *VAR204, *VAR205, *VAR206;
      VAR1 *VAR207 = VAR208;
      VAR1 *VAR64 = VAR53;
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25) goto VAR44;
      VAR204 = FUN1(VAR13, VAR18, &VAR13, VAR5, VAR18, &VAR17);
      if (VAR204 == NULL) goto VAR26;
      if (*VAR13++ != VAR25) goto VAR44;
      if (VAR11 == VAR201)
        {
        while (FUN24(*VAR13)) VAR13++;
        if (*VAR13++ != VAR25) goto VAR44;
        VAR206 = FUN1(VAR13, VAR18, &VAR13, VAR5, VAR18, &VAR17);
        if (VAR206 == NULL) goto VAR26;
        VAR53 = VAR206;
        if (*VAR13++ != VAR25) goto VAR44;
        }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25) goto VAR44;
      VAR205 = VAR13;
      if (VAR11 == VAR199)
        {
        VAR206 = FUN25(VAR205, &VAR17, NULL);
        if (VAR206 != NULL) VAR13 = VAR206;
        }
      else
        {
        VAR206 = FUN1(VAR13, VAR18, &VAR13, VAR18, VAR18, &VAR17);
        }
      if (VAR206 == NULL)
        {
        VAR21 = FUN14(VAR31%VAR13\VAR31,
          VAR21, VAR24);
        goto VAR26;
        }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25)
        {
        VAR21 = FUN14(VAR31
          VAR31%VAR13\VAR31, VAR24);
        goto VAR26;
        }
      while (FUN24(*VAR13)) VAR13++;
      if (*VAR13++ != VAR25)
        {
        VAR21 = FUN14(VAR31%VAR13\VAR31,
          VAR24);
        goto VAR26;
        }
      if (VAR5) continue;
      while ((VAR208 = FUN69(&VAR204, &VAR202, NULL, 0)) != NULL)
        {
        *VAR203 = (VAR1)VAR202;
        FUN21(VAR47) FUN22(VAR31%VAR13\VAR31, VAR24, VAR208);
        if (VAR11 == VAR199)
          {
          BOOL VAR209;
          if (FUN25(VAR205, &VAR17, &VAR209) == NULL)
            {
            VAR208 = VAR207;
            VAR53 = VAR64;
            VAR21 = FUN14(VAR31%VAR13\VAR31,
              VAR21, VAR24);
            goto VAR26;
            }
          FUN21(VAR47) FUN22(VAR31, VAR24,
            VAR209? VAR31:VAR31);
          if (VAR209)
            VAR206 = VAR208;
          else
            continue;
          }
        else
          {
          VAR206 = FUN1(VAR205, VAR18, NULL, VAR5, VAR18, &VAR17);
          if (VAR206 == NULL)
            {
            VAR208 = VAR207;
            VAR21 = FUN14(VAR31%VAR13\VAR31,
              VAR21, VAR24);
            goto VAR26;
            }
          if (VAR11 == VAR201)
            {
            VAR53 = VAR206;
            continue;
            }
          }
        if (VAR9 != VAR110 && (VAR206[0] == *VAR203 || VAR206[0] == 0))
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 1);
        for (;;)
          {
          size_t VAR210 = FUN70(VAR206, VAR203);
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR206, VAR210 + 1);
          if (VAR206[VAR210] == VAR25) { VAR9--; break; }
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR203, 1);
          VAR206 += VAR210 + 1;
          }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR203, 1);
        }
      if (VAR11 == VAR201)
        {
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR53,
          FUN2(VAR53));
        VAR53 = VAR64;
        }
      else if (VAR9 != VAR110) VAR9--;
      VAR208 = VAR207;
      continue;
      }
    #define EXPAND_DLFUNC_MAX_ARGS 8
    case VAR211:
    #ifndef VAR212
    VAR21 = VAR22${VAR213\VAR31
      VAR31;
    goto VAR26;
    #else
      {
      VAR214 *VAR27;
      VAR215 *VAR216;
      VAR1 *VAR217;
      int VAR218, argc;
      VAR1 *argv[VAR219 + 3];
      if ((VAR65 & VAR220) != 0)
        {
        VAR21 =
          VAR22;
        goto VAR26;
        }
      switch(FUN19(argv, VAR219 + 2, 2, &VAR13, VAR5,
           VAR18, VAR22, &VAR17))
        {
        case 1: goto VAR44;
        case 2:
        case 3: goto VAR26;
        }
      if (VAR5) continue;
      VAR27 = FUN71(VAR221, argv[0]);
      if (VAR27 == NULL)
        {
        void *VAR70 = dlopen(CS argv[0], VAR222);
        if (VAR70 == NULL)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31,
            argv[0], dlerror());
          FUN72(0, VAR223|VAR224, VAR31, VAR21);
          goto VAR26;
          }
        VAR27 = FUN73(sizeof(VAR214) + FUN2(argv[0]));
        FUN74(VAR27->VAR24, argv[0]);
        VAR27->VAR225.VAR9 = VAR70;
        (void)FUN75(&VAR221, VAR27);
        }
      VAR216 = (VAR215 *)dlsym(VAR27->VAR225.VAR9, CS argv[1]);
      if (VAR216 == NULL)
        {
        VAR21 = FUN14(VAR31%VAR13\VAR31%VAR13\VAR31
          VAR31, argv[1], argv[0], dlerror());
        FUN72(0, VAR223|VAR224, VAR31, VAR21);
        goto VAR26;
        }
      VAR17 = VAR20;
      VAR217 = NULL;
      for (argc = 0; argv[argc] != NULL; argc++);
      VAR218 = FUN76(&VAR217, argc - 2, &argv[2]);
      if(VAR218 == VAR45)
        {
        if (VAR217 == NULL) VAR217 = VAR22;
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR217, FUN2(VAR217));
        continue;
        }
      else
        {
        VAR21 = VAR217 == NULL ? VAR22 : VAR217;
        if(VAR218 == VAR226) VAR19 = VAR18;
          else if(VAR218 != VAR46)
            FUN72(0, VAR223|VAR224, VAR31,
              argv[0], argv[1], VAR218, VAR21);
        goto VAR26;
        }
      }
    #VAR83
    }
  if (*VAR13 == VAR25)
    {
    int VAR227;
    VAR1 *VAR112 = NULL;
    VAR1 *VAR42;
    VAR228 *VAR229 = NULL;
    if ((VAR227 = FUN18(VAR24, VAR230,
	sizeof(VAR230)/sizeof(VAR1 *))) < 0)
      {
      VAR112 = FUN12(VAR24, VAR25);
      if (VAR112 != NULL) *VAR112 = 0;
      VAR227 = FUN18(VAR24, VAR231,
        sizeof(VAR231)/sizeof(VAR1 *));
      if (VAR227 >= 0) VAR227 += sizeof(VAR230)/sizeof(VAR1 *);
      if (VAR112 != NULL) *VAR112++ = VAR25;
      }
    switch(VAR227)
      {
#ifdef VAR196
      case VAR232:
      case VAR233:
      case VAR234:
	if (VAR13[1] == VAR25)
	  {
	  VAR1 * VAR235 = VAR13;
	  VAR42 = FUN1(VAR13+2, VAR18, &VAR235, VAR5,
		  VAR20, &VAR17);
	  if (!VAR42)       goto VAR26;
	  if (*VAR235 != VAR25) goto VAR44;
	  if ((VAR229 = FUN77(VAR42)) && VAR229->VAR157 == VAR236)
	    {
	    VAR13 = VAR235+1;
	    break;
	    }
	  VAR229 = NULL;
	  }
#VAR83
      default:
	VAR42 = FUN1(VAR13+1, VAR18, &VAR13, VAR5, VAR18, &VAR17);
	if (!VAR42) goto VAR26;
	VAR13++;
	break;
      }
    if (VAR5 && VAR227 >= 0) continue;
    switch(VAR227)
      {
      case VAR237:
        {
        VAR1 *VAR27;
        unsigned long int VAR36 = FUN78(VAR42, &VAR27, 10);
        if (*VAR27 != 0)
          {
          VAR21 = FUN14(VAR31
            VAR31%VAR13\VAR31, VAR42);
          goto VAR26;
          }
        VAR27 = FUN79(VAR36);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, FUN2(VAR27));
        continue;
        }
      case VAR238:
        {
        uschar VAR239[16];
        VAR1 *VAR240 = VAR42;
        unsigned long int VAR36 = 0;
        while (*VAR240 != 0)
          {
          VAR1 *VAR27 = FUN12(VAR241, *VAR240++);
          if (VAR27 == NULL)
            {
            VAR21 = FUN14(VAR31
              VAR31%VAR13\VAR31, VAR42,
              VAR242);
            goto VAR26;
            }
          VAR36 = VAR36 * VAR242 + (VAR27 - VAR241);
          }
        (void)sprintf(CS VAR239, VAR31, VAR36);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR239, FUN2(VAR239));
        continue;
        }
      case VAR243:
        {
        VAR1 *VAR244 = FUN1(VAR42, VAR20, NULL, VAR5, VAR18, &VAR17);
        if (VAR244 == NULL)
          {
          VAR21 =
            FUN14(VAR31%VAR13\VAR31, VAR42,
              VAR21);
          goto VAR26;
          }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR244, FUN2(VAR244));
        continue;
        }
      case VAR245:
        {
        int VAR246 = 0;
        VAR1 *VAR27 = VAR42 - 1;
        while (*(++VAR27) != 0) { *VAR27 = FUN80(*VAR27); VAR246++; }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42, VAR246);
        continue;
        }
      case VAR247:
        {
        int VAR246 = 0;
        VAR1 *VAR27 = VAR42 - 1;
        while (*(++VAR27) != 0) { *VAR27 = FUN81(*VAR27); VAR246++; }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42, VAR246);
        continue;
        }
      case VAR232:
#ifdef VAR196
	if (VAR229 && *(void **)VAR229->VAR23)
	  {
	  VAR1 * VAR248 = FUN82(*(void **)VAR229->VAR23);
	  VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR248, FUN2(VAR248));
	  }
	else
#VAR83
	  {
	  md5 VAR249;
	  uschar VAR250[16];
	  int VAR189;
	  char VAR251[33];
	  FUN83(&VAR249);
	  FUN84(&VAR249, VAR42, FUN2(VAR42), VAR250);
	  for(VAR189 = 0; VAR189 < 16; VAR189++) sprintf(VAR251+2*VAR189, VAR31, VAR250[VAR189]);
	  VAR12 = FUN4(VAR12, &VAR10, &VAR9, US VAR251, (int)strlen(VAR251));
	  }
        continue;
      case VAR233:
#ifdef VAR196
	if (VAR229 && *(void **)VAR229->VAR23)
	  {
	  VAR1 * VAR248 = FUN85(*(void **)VAR229->VAR23);
	  VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR248, FUN2(VAR248));
	  }
	else
#VAR83
	  {
	  sha1 VAR249;
	  uschar VAR250[20];
	  int VAR189;
	  char VAR251[41];
	  FUN86(&VAR249);
	  FUN87(&VAR249, VAR42, FUN2(VAR42), VAR250);
	  for(VAR189 = 0; VAR189 < 20; VAR189++) sprintf(VAR251+2*VAR189, VAR31, VAR250[VAR189]);
	  VAR12 = FUN4(VAR12, &VAR10, &VAR9, US VAR251, (int)strlen(VAR251));
	  }
        continue;
      case VAR234:
#ifdef VAR196
	if (VAR229 && *(void **)VAR229->VAR23)
	  {
	  VAR1 * VAR248 = FUN88(*(void **)VAR229->VAR23);
	  VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR248, (int)FUN2(VAR248));
	  }
	else
#VAR83
	  VAR21 = VAR22;
        continue;
      case VAR252:
        {
        int VAR227 = 0;
        int VAR253 = -1;
        VAR1 *VAR254 = VAR42;
        VAR1 *VAR255 = VAR42;
        VAR1 *VAR256;
        for (VAR256 = VAR42; *VAR256 != 0; VAR256++)
          {
          if (!FUN89(*VAR256))
            {
            VAR21 = FUN14(VAR31%VAR13\VAR31
              VAR31, VAR42);
            goto VAR26;
            }
          VAR227++;
          }
        if ((VAR227 & 1) != 0)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31
            VAR31, VAR42);
          goto VAR26;
          }
        while ((VAR227 = *VAR254++) != 0)
          {
          if (FUN16(VAR227)) VAR227 -= VAR25;
          else VAR227 = FUN81(VAR227) - VAR25 + 10;
          if (VAR253 == -1)
            {
            VAR253 = VAR227 << 4;
            }
          else
            {
            *VAR255++ = VAR253 | VAR227;
            VAR253 = -1;
            }
          }
        VAR256 = FUN90(VAR42, VAR255 - VAR42);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR256, FUN2(VAR256));
        continue;
        }
      case VAR257:
	{
        VAR1 *VAR27 = VAR42 - 1;
        while (*(++VAR27) != 0)
          {
          if (*VAR27 < 0x21 || 0x7E < *VAR27)
            VAR12 = FUN4(VAR12, &VAR10, &VAR9,
	      FUN14(VAR31, *VAR27), 4);
	  else
	    VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, 1);
          }
	continue;
	}
      case VAR258:
        {
	int VAR259 = 0;
	int VAR202 = 0;
	VAR1 * VAR248;
	uschar VAR260[256];
	while (FUN69(&VAR42, &VAR202, VAR260, sizeof(VAR260)) != NULL) VAR259++;
	VAR248 = FUN14(VAR31, VAR259);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR248, FUN2(VAR248));
        continue;
        }
      case VAR261:
	{
	VAR214 *VAR27 = NULL;
	VAR1 * VAR204;
	int VAR202 = 0;
	VAR1 * VAR262;
	VAR1 * VAR263 = VAR22;
	BOOL VAR264 = VAR20;
	uschar VAR260[256];
	if (*VAR42 == VAR25) VAR42++;
	if (VAR112 == NULL)
	  {
	  if (!(VAR27 = FUN71(VAR265, VAR42)) &&
	      !(VAR27 = FUN71(VAR266,  VAR42)) &&
	      !(VAR27 = FUN71(VAR267,    VAR42)))
	    VAR27 = FUN71(VAR268, VAR42);
	  }
	else switch(*VAR112)
	  {
	  case VAR25: VAR27 = FUN71(VAR265,   VAR42); VAR263 = VAR22; break;
	  case VAR25: VAR27 = FUN71(VAR266,    VAR42); VAR263 = VAR22; break;
	  case VAR25: VAR27 = FUN71(VAR267,      VAR42); VAR263 = VAR22; break;
	  case VAR25: VAR27 = FUN71(VAR268, VAR42); VAR263 = VAR22; break;
	  default:
            VAR21 = FUN14(VAR269\VAR31);
	    goto VAR26;
	  }
	if(!VAR27)
	  {
          VAR21 = FUN14(VAR31%VAR13\VAR31,
            VAR42, !VAR112?VAR31
	      : *VAR112==VAR25?VAR31
	      : *VAR112==VAR25?VAR31
	      : *VAR112==VAR25?VAR31
	      : *VAR112==VAR25?VAR31
	      : 0);
	  goto VAR26;
	  }
	VAR204 = ((VAR270 *)(VAR27->VAR225.VAR9))->VAR2;
	while ((VAR262 = FUN69(&VAR204, &VAR202, VAR260, sizeof(VAR260))) != NULL)
	  {
	  VAR1 * VAR239 = VAR22;
	  if (VAR264)
	    VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR239, 3);
	  else
	    VAR264 = VAR18;
	  if (*VAR262 == VAR25)
	    {
	    VAR1 * VAR42 = FUN14(VAR31, VAR263, VAR262);
	    VAR262 = FUN1(VAR42, VAR20, NULL, VAR20, VAR18, &VAR17);
	    }
	  else if (VAR202 != VAR25)
	    {
	    char * VAR248;
	    char VAR271[3];
	    VAR271[0] = VAR202; VAR271[1] = VAR25; VAR271[2] = 0;
	    while ((VAR248= strpbrk((const char *)VAR262, VAR271)))
	      {
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR262, VAR248-(char *)VAR262);
	      if (*VAR248++ == VAR25)
	        {
                VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 2);
	        VAR262 = (VAR1 *)VAR248;
		}
	      else
	        {
                VAR12 = FUN4(VAR12, &VAR10, &VAR9, (VAR1 *)VAR271, 1);
		if (*VAR248 == VAR202) VAR248++;
	        VAR262 = (VAR1 *)VAR248;
		}
	      }
	    }
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR262, FUN2(VAR262));
	  }
        continue;
	}
      case VAR272:
        {
        int VAR246;
        VAR1 *VAR273;
        int VAR274[4];
        int VAR275, VAR276;
        int VAR157 = FUN91(VAR42, &VAR276);
        uschar VAR260[64];
        if (VAR157 == 0)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31,
           VAR42);
          goto VAR26;
          }
        if (VAR276 == 0)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31,
            VAR42);
          goto VAR26;
          }
        VAR275 = FUN47(VAR42 + VAR276 + 1, &VAR273, 10);
        if (*VAR273 != 0 || VAR275 < 0 || VAR275 > ((VAR157 == 4)? 32 : 128))
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31,
            VAR42);
          goto VAR26;
          }
        VAR42[VAR276] = 0;
        VAR246 = FUN92(VAR42, VAR274);
        FUN93(VAR246, VAR274, VAR275);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR260,
          FUN94(VAR246, VAR274, VAR275, VAR260, VAR25));
        continue;
        }
      case VAR277:
      case VAR278:
      case VAR279:
        {
        VAR1 *VAR280;
        int VAR281, VAR117, VAR86;
        VAR1 *VAR27 = FUN95(VAR42, &VAR280, &VAR281, &VAR117, &VAR86,
          VAR20);
        if (VAR27 != NULL)
          {
          if (VAR227 != VAR279)
            {
            if (VAR227 == VAR278 && VAR86 != 0) VAR117 = VAR281 + VAR86 - 1;
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42+VAR281, VAR117-VAR281);
            }
          else if (VAR86 != 0)
            {
            VAR86 += VAR281;
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42+VAR86, VAR117-VAR86);
            }
          }
        continue;
        }
      case VAR282:
        {
        uschar VAR203[2] = { VAR25, VAR25 };
        VAR1 *VAR283, *VAR280;
        int VAR110 = VAR9;
        int VAR281, VAR117, VAR86;
        while (FUN24(*VAR42)) VAR42++;
        if (*VAR42 == VAR25) { *VAR203 = *++VAR42; ++VAR42; }
        VAR284 = VAR18;
        for (;;)
          {
          VAR1 *VAR85 = FUN96(VAR42, VAR20);
          uschar VAR285 = *VAR85;
          *VAR85 = VAR25;
          VAR283 = FUN95(VAR42, &VAR280, &VAR281, &VAR117, &VAR86,
            VAR20);
          *VAR85 = VAR285;
          if (VAR283 != NULL)
            {
            if (VAR9 != VAR110 && VAR283[0] == *VAR203)
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 1);
            for (;;)
              {
              size_t VAR210 = FUN70(VAR283, VAR203);
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR283, VAR210 + 1);
              if (VAR283[VAR210] == VAR25) { VAR9--; break; }
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR203, 1);
              VAR283 += VAR210 + 1;
              }
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR203, 1);
            }
          if (VAR285 == VAR25) break;
          VAR42 = VAR85 + 1;
          }
        if (VAR9 != VAR110) VAR9--;
        VAR284 = VAR20;
        continue;
        }
      case VAR286:
      case VAR287:
      if (VAR112 == NULL)
        {
        BOOL VAR288 = (*VAR42 == 0);
        VAR1 *VAR27 = VAR42 - 1;
        if (VAR227 == VAR286)
          {
          while (!VAR288 && *(++VAR27) != 0)
            VAR288 = !FUN97(*VAR27) && !strchr(VAR31, *VAR27);
          }
        else
          {
          while (!VAR288 && *(++VAR27) != 0)
            VAR288 = !FUN97(*VAR27) &&
              strchr(VAR31, *VAR27) == NULL &&
              (*VAR27 != VAR25 || VAR27 == VAR42 || VAR27[1] == 0);
          }
        if (VAR288)
          {
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22", 1);
          VAR27 = VAR42 - 1;
          while (*(++VAR27) != 0)
            {
            if (*VAR27 == VAR25)
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 2);
            else if (*VAR27 == VAR25)
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 2);
            else
              {
              if (*VAR27 == VAR25 || *VAR27 == VAR25)
                VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 1);
              VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, 1);
              }
            }
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22", 1);
          }
        else VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42, FUN2(VAR42));
        continue;
        }
      else
        {
        int VAR36;
        VAR1 *VAR289 = FUN12(VAR112, VAR25);
        if (VAR289 != NULL) *VAR289++ = 0;
        VAR36 = FUN98(VAR112, FUN2(VAR112));
        if (VAR36 < 0)
          {
          VAR21 = VAR67;
          goto VAR26;
          }
        if (VAR290[VAR36]->VAR291 != NULL)
          VAR42 = (VAR290[VAR36]->VAR291)(VAR42, VAR289);
        else if (VAR289 != NULL) VAR42 = NULL;
        if (VAR42 == NULL)
          {
          VAR21 = FUN14(
            VAR31%VAR13\VAR31${VAR292%VAR13\VAR31,
            VAR289, VAR112);
          goto VAR26;
          }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR42, FUN2(VAR42));
        continue;
        }
      case VAR293:
        {
        VAR1 *VAR27 = VAR42 - 1;
        while (*(++VAR27) != 0)
          {
          if (!FUN97(*VAR27))
            VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR22, 1);
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, 1);
          }
        continue;
        }
      case VAR294:
        {
        uschar VAR260[2048];
        VAR1 *VAR2 = FUN99(VAR42, FUN2(VAR42), VAR34,
          VAR260, sizeof(VAR260), VAR20);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR2, FUN2(VAR2));
        continue;
        }
      case VAR295:
        {
        int VAR29;
        VAR1 *VAR280;
        VAR1 *VAR296 = FUN100(VAR42, VAR297,
          VAR34, VAR25, &VAR29, &VAR280);
        if (VAR280 != NULL)
          {
          VAR21 = VAR280;
          goto VAR26;
          }
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR296, VAR29);
        continue;
        }
      case VAR298:
        {
        while (*VAR42 != 0)
          {
          int VAR227;
          uschar VAR299[4];
          FUN101(VAR227, VAR42);
          if (VAR227 > 255) VAR227 = VAR25;
          VAR299[0] = VAR227;
          VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR299, 1);
          }
        continue;
        }
      #define UTF8_REPLACEMENT_CHAR VAR22
      case VAR300:
        {
        int VAR301, VAR302 = 0;
        int VAR303 = 0;
        uschar VAR304[4];
        while (*VAR42 != 0)
	  {
	  int VAR305;
	  long VAR306;
	  uschar VAR227;
	  VAR305 = 0;
	  VAR227 = *VAR42++;
	  if (VAR303)
	    {
	    if ((VAR227 & 0xc0) != 0x80)
	      {
	      VAR305 = 1;
	      }
	    else
	      {
	      VAR306 = (VAR306 << 6) | (VAR227 & 0x3f);
	      VAR304[VAR302++] = VAR227;
	      if (--VAR303 == 0)
		{
		if(VAR306 > 0x10FFFF)
		  VAR305 = -1;
		else
		  {
		  VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR304, VAR301);
		  VAR302 = 0;
		  }
		}
	      }
	    }
	  else
	    {
	    if((VAR227 & 0x80) == 0)
	      {
	      VAR12 = FUN4(VAR12, &VAR10, &VAR9, &VAR227, 1);
	      continue;
	      }
	    if((VAR227 & 0xe0) == 0xc0)
	      {
	      if(VAR227 == 0xc0 || VAR227 == 0xc1)
		VAR305 = -1;
	      else
		{
		  VAR303 = 1;
		  VAR306 = VAR227 & 0x1f;
		}
	      }
	    else if((VAR227 & 0xf0) == 0xe0)
	      {
	      VAR303 = 2;
	      VAR306 = VAR227 & 0x0f;
	      }
	    else if((VAR227 & 0xf8) == 0xf0)
	      {
	      VAR303 = 3;
	      VAR306 = VAR227 & 0x07;
	      }
	    else
	      VAR305 = -1;
	    VAR304[VAR302++] = VAR227;
	    VAR301 = VAR303 + 1;
	    }
	  if (VAR305 != 0)
	    {
	    VAR303 = VAR302 = 0;
	    VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR307, 1);
	    }
	  if ((VAR305 == 1) && ((VAR227 & 0x80) == 0))
	    {
	      VAR12 = FUN4(VAR12, &VAR10, &VAR9, &VAR227, 1);
	    }
	  }
        continue;
        }
      case VAR308:
        {
        VAR1 *VAR27 = FUN102(VAR42);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, FUN2(VAR27));
        continue;
        }
      case VAR309:
      case VAR310:
        {
        VAR1 *VAR311 = VAR42;
        VAR1 *VAR280 = NULL;
        int_eximarith_t VAR36 = FUN103(&VAR42, (VAR227 == VAR310), &VAR280, VAR20);
        if (VAR280 != NULL)
          {
          VAR21 = FUN14(VAR31
            VAR31%.*VAR13\VAR31, VAR280, VAR42-VAR311,
              VAR311);
          goto VAR26;
          }
        sprintf(CS VAR312, VAR313, VAR36);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR312, FUN2(VAR312));
        continue;
        }
      case VAR314:
        {
        int VAR36 = FUN46(VAR42, 0, VAR20);
        if (VAR36 < 0)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31
            VAR31%VAR13\VAR31, VAR42, VAR24);
          goto VAR26;
          }
        sprintf(CS VAR312, VAR31, VAR36);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR312, FUN2(VAR312));
        continue;
        }
      case VAR315:
        {
        int VAR36;
        VAR1 *VAR27 = FUN17(&VAR36, VAR42);
        if (*VAR27 != 0)
          {
          VAR21 = FUN14(VAR31%VAR13\VAR31
            VAR31%VAR13\VAR31, VAR42, VAR24);
          goto VAR26;
          }
        VAR27 = FUN104(VAR36);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR27, FUN2(VAR27));
        continue;
        }
      case VAR316:
        {
        VAR1 *VAR317 = FUN90(VAR42, FUN2(VAR42));
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR317, FUN2(VAR317));
        continue;
        }
      case VAR318:
        {
        uschar VAR299[24];
        (void)sprintf(CS VAR299, VAR31, FUN2(VAR42));
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR299, FUN2(VAR299));
        continue;
        }
      case VAR319:
      case VAR320:
      case VAR321:
      case VAR322:
      case VAR323:
      case VAR324:
      case VAR325:
      case VAR326:
        {
        int VAR327 = 1;
        int VAR328 = 0;
        int VAR329 = -1;
        int *VAR330;
        int VAR29;
        VAR1 *VAR151;
        if (VAR112 == NULL)
          {
          VAR21 = FUN14(VAR31,
            VAR24);
          goto VAR26;
          }
        if (VAR227 == VAR319 || VAR227 == VAR320)
          {
          VAR330 = &VAR329;
          VAR329 = 0;
          }
        else
          {
          VAR330 = &VAR328;
          if (VAR24[0] == VAR25 && *VAR112 == VAR25) { VAR327 = -1; VAR112++; }
          }
        VAR151 = VAR112;
        while (*VAR112 != 0)
          {
          if (VAR112 != VAR151 && *VAR112 == VAR25 && VAR330 == &VAR328)
            {
            VAR330 = &VAR329;
            VAR329 = 0;
            if (VAR112[1] != 0) VAR112++;
            }
          else if (!FUN16(*VAR112))
            {
            VAR21 =
              FUN14(VAR31%VAR13\VAR31, VAR24);
            goto VAR26;
            }
          else *VAR330 = (*VAR330)*10 + *VAR112++ - VAR25;
          }
        VAR328 *= VAR327;
        VAR151 =
          (VAR227 == VAR323 || VAR227 == VAR324)?
             FUN57(VAR42, VAR328, VAR329, &VAR29) :
          (VAR227 == VAR325 || VAR227 == VAR326)?
             FUN58(VAR42, VAR328, VAR329, &VAR29) :
             FUN59(VAR42, VAR328, VAR329, &VAR29);
        if (VAR151 == NULL) goto VAR26;
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR151, VAR29);
        continue;
        }
      case VAR331:
        {
        VAR1 *VAR13;
        uschar VAR332[12];
        VAR1 **VAR333[3];
        int VAR150;
        mode_t VAR334;
        struct stat VAR251;
        if ((VAR65 & VAR335) != 0)
          {
          VAR21 = VAR22;
          goto VAR26;
          }
        if (stat(CS VAR42, &VAR251) < 0)
          {
          VAR21 = FUN14(VAR31,
            VAR42, strerror(VAR106));
          goto VAR26;
          }
        VAR334 = VAR251.VAR336;
        switch (VAR334 & VAR337)
          {
          case VAR338: VAR332[0] = VAR25; break;
          case VAR339: VAR332[0] = VAR25; break;
          case VAR340: VAR332[0] = VAR25; break;
          case VAR341: VAR332[0] = VAR25; break;
          case VAR342: VAR332[0] = VAR25; break;
          default: VAR332[0] = VAR25; break;
          }
        VAR333[0] = ((VAR334 & 01000) == 0)? VAR343 : VAR344;
        VAR333[1] = ((VAR334 & 02000) == 0)? VAR343 : VAR345;
        VAR333[2] = ((VAR334 & 04000) == 0)? VAR343 : VAR345;
        for (VAR150 = 0; VAR150 < 3; VAR150++)
          {
          memcpy(FUN105(VAR332 + 7 - VAR150*3), FUN105(VAR333[VAR150][VAR334 & 7]), 3);
          VAR334 >>= 3;
          }
        VAR332[10] = 0;
        VAR13 = FUN14(VAR31
          STRING OFF_T_FMT VAR31,
          (long)(VAR251.VAR336 & 077777), VAR332, (long)VAR251.VAR346,
          (long)VAR251.VAR347, (long)VAR251.VAR348, (long)VAR251.VAR349,
          (long)VAR251.VAR350, VAR251.VAR351, (long)VAR251.VAR352,
          (long)VAR251.VAR353, (long)VAR251.VAR354);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR13, FUN2(VAR13));
        continue;
        }
      case VAR355:
        {
         int_eximarith_t VAR356;
         VAR1 *VAR13;
        VAR356 = FUN106(VAR42, VAR18);
         if (VAR21 != NULL)
           goto VAR26;
         VAR13 = FUN14(VAR31, FUN107((int)VAR356));
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR13, FUN2(VAR13));
        continue;
        }
      case VAR357:
        {
        int VAR358, VAR359;
        uschar VAR360[128];
        VAR358 = FUN91(VAR42, &VAR359);
        if (VAR358 == 0)
          {
          VAR21 = FUN14(
              VAR31, VAR42);
          goto VAR26;
          }
        FUN108(VAR360, VAR42);
        VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR360, FUN2(VAR360));
        continue;
        }
      default:
      VAR21 =
        FUN14(VAR31%VAR13\VAR31, VAR24);
      goto VAR26;
      }
    }
  if (*VAR13++ == VAR25)
    {
    int VAR29;
    int VAR30 = 0;
    if (VAR9 == 0)
      {
      if (VAR17) FUN8(VAR12);
      VAR12 = NULL;
      VAR10 = 0;
      }
    VAR23 = FUN13(VAR24, VAR20, VAR5, &VAR30);
    if (VAR23 == NULL)
      {
      VAR21 =
        FUN14(VAR31${%VAR13}\VAR31, VAR24);
      FUN15(VAR24);
      goto VAR26;
      }
    VAR29 = FUN2(VAR23);
    if (VAR12 == NULL && VAR30 != 0)
      {
      VAR12 = VAR23;
      VAR10 = VAR30;
      VAR9 = VAR29;
      }
    else VAR12 = FUN4(VAR12, &VAR10, &VAR9, VAR23, VAR29);
    continue;
    }
  VAR21 =
    FUN14(VAR31${%VAR13\VAR31
    VAR31, VAR24);
  goto VAR26;
  }
if (VAR3 && *VAR13 == 0)
  {
  VAR21 = VAR35?
    VAR22
    :
    VAR22;
  goto VAR26;
  }
if (VAR12 == NULL) VAR12 = FUN3(1);
VAR12[VAR9] = 0;
if (VAR4 != NULL) *VAR4 = VAR13;
if (VAR17) FUN8(VAR12 + VAR9 + 1);
else if (VAR8) *VAR8 = VAR20;
FUN21(VAR47)
  {
  FUN22(VAR31, (int)(VAR13 - VAR2), VAR2,
    VAR12);
  if (VAR5) FUN22(VAR31);
  }
return VAR12;
VAR44:
VAR21 = VAR35?
  VAR22
  :
  VAR22;
VAR26:
if (VAR4 != NULL) *VAR4 = VAR13;
FUN21(VAR47)
  {
  FUN22(VAR31, VAR2);
  FUN22(VAR31, VAR21);
  if (VAR19) FUN22(VAR31);
  }
if (VAR8) *VAR8 = VAR17;
return NULL;
}