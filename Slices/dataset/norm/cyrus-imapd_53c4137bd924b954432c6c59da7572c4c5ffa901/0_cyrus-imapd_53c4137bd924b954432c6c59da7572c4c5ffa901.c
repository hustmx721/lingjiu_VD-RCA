static void FUN1(void)
{
    int VAR1;
    int VAR2, VAR3, VAR4, VAR5;
    static struct buf VAR6, VAR7, VAR8, VAR9, VAR10;
    char *VAR11, VAR12[VAR13+1], VAR14[100];
    const char *VAR15;
    const char * VAR16;
    double VAR17 = 0.0;
    struct VAR18 *VAR19 =
        FUN2(VAR20);
    struct applepushserviceargs VAR21;
    FUN3(VAR22, VAR23);
    FUN4(VAR24);
    FUN3(VAR22, VAR23);
    if (VAR25) FUN3(VAR22, VAR23, VAR26);
    if (VAR25 == VAR27) {
        FUN3(VAR22, VAR23, FUN5());
    }
    FUN3(VAR22, VAR23);
    FUN6();
    FUN7();
    VAR16 = FUN8(VAR28);
    FUN9(VAR16 ? 1 : 0);
    if (VAR16) {
      VAR17 = atof(VAR16);
    }
    for (;;) {
        FUN10(VAR29);
        FUN11(VAR22);
        if (VAR30) FUN11(VAR30->VAR31);
        FUN12(VAR32, VAR33, VAR34, FUN13(VAR29), NULL);
        if ( !VAR35 && VAR34 &&
             (FUN14(VAR12, sizeof(VAR12)) ||
              FUN15(VAR34, VAR32, VAR12, sizeof(VAR12)))) {
            for (VAR11 = VAR12; *VAR11 == VAR36; VAR11++);
            FUN3(VAR22, VAR23, VAR11);
            FUN16(VAR34);
            FUN17(0);
        }
        FUN18();
        if (!FUN19(VAR37, VAR38, VAR22,
                               VAR30 ? VAR30->VAR39 : NULL,
                               NULL, 0)) {
            continue;
        }
        VAR1 = FUN20(VAR38, &VAR6);
        if (VAR1 == VAR40) {
            if ((VAR15 = FUN21(VAR38))!=NULL
                && strcmp(VAR15, VAR41)) {
                syslog(VAR42, VAR23, VAR15);
                FUN3(VAR22, VAR23, VAR15);
            }
            goto VAR43;
        }
        if (VAR1 != VAR36 || !FUN22(VAR6.VAR44) || (VAR6.VAR44[0] == VAR36 && !VAR6.VAR44[1])) {
            FUN3(VAR22, VAR23);
            FUN23(VAR38, VAR1);
            continue;
        }
        VAR1 = FUN20(VAR38, &VAR7);
        if (!VAR7.VAR44[0]) {
            FUN3(VAR22, VAR23, VAR6.VAR44);
            FUN23(VAR38, VAR1);
            continue;
        }
        FUN24(VAR7.VAR44);
        FUN25(VAR14, VAR7.VAR44, 99);
        VAR7.VAR44[0] = FUN26((unsigned char) VAR7.VAR44[0]);
        if (FUN27(VAR45))
            syslog(VAR46, VAR23, VAR6.VAR44, VAR7.VAR44);
        FUN12(VAR32, VAR33, VAR34, FUN13(VAR29), VAR7.VAR44);
        if (VAR47) {
            FUN28();
            VAR47 = 0;
        }
        if (VAR48) {
            FUN3(VAR22, VAR23,
                        VAR48);
            VAR48 = NULL;
        }
        if (!VAR34 && !strchr(VAR23, VAR7.VAR44[0])) goto VAR49;
        FUN29();
        switch (VAR7.VAR44[0]) {
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                int VAR50 = 0;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN20(VAR38, &VAR8);
                if (!FUN22(VAR8.VAR44)) {
                    FUN3(VAR22, VAR23, VAR6.VAR44);
                    FUN23(VAR38, VAR1);
                    continue;
                }
                if (VAR1 == VAR36) {
                    VAR50 = 1;
                    VAR1 = FUN20(VAR38, &VAR9);
                    if (VAR1 == VAR40) goto VAR51;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                if (VAR34) {
                    FUN3(VAR22, VAR23, VAR6.VAR44);
                    continue;
                }
                FUN31(VAR6.VAR44, VAR8.VAR44, VAR50 ? VAR9.VAR44 : NULL);
                FUN32(VAR53, 1);
            }
            else if (!VAR34) goto VAR49;
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN34(VAR6.VAR44, VAR8.VAR44, NULL);
                FUN32(VAR54, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN35(VAR6.VAR44);
                FUN32(VAR56, 1);
            }
            else if (!VAR34) goto VAR49;
#ifdef VAR57
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN36(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR58, 1);
            }
#VAR59
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN37(VAR6.VAR44, VAR7.VAR44);
                FUN32(VAR61, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            copy:
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 == VAR36) goto VAR51;
                if (VAR1 != VAR36 || !FUN38(VAR8.VAR44)) goto VAR62;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN39(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, VAR2, 0);
                FUN32(VAR63, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct VAR64 *VAR65 = NULL;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) {
                    VAR1 = FUN40(&VAR65);
                    if (VAR1 == VAR40) goto VAR66;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN41(VAR6.VAR44, VAR8.VAR44, VAR65, 0);
                FUN42(&VAR65);
                FUN32(VAR67, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN43(VAR6.VAR44, VAR7.VAR44);
                FUN32(VAR68, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN44(VAR6.VAR44, VAR8.VAR44, 0, 0);
                FUN32(VAR69, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN45(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, NULL);
                FUN32(VAR70, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                int VAR71 = 0;
                if(VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 == VAR36) {
                    VAR1 = FUN33(VAR38, VAR22, &VAR9);
                    if(!FUN46(VAR9.VAR44)) goto VAR52;
                    VAR71 = atoi(VAR9.VAR44);
                }
                if(VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if(VAR1 != VAR36) goto VAR52;
                FUN47(VAR6.VAR44, VAR8.VAR44, VAR71);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!VAR34) goto VAR49;
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN48(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN49(VAR6.VAR44, 0);
                FUN32(VAR72, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                FUN50(VAR1, VAR38);
                FUN51(VAR6.VAR44, VAR7.VAR44, VAR8.VAR44);
                FUN32(VAR73, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR74:
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 == VAR36) goto VAR51;
                if (VAR1 != VAR36 || !FUN38(VAR8.VAR44)) goto VAR62;
                FUN52(VAR6.VAR44, VAR8.VAR44, VAR2);
                FUN32(VAR75, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN53(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR76, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN54(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR77, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN55(VAR6.VAR44);
                FUN32(VAR77, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN56(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR78, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN57(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR79, 1);
            }
#ifdef VAR80
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN58(VAR6.VAR44);
            }
#VAR59
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN59(VAR6.VAR44);
                FUN32(VAR81, 1);
            }
            else if (!VAR34) goto VAR49;
            else if (!strcmp(VAR7.VAR44, VAR23) && FUN60()) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN61(VAR6.VAR44);
                FUN32(VAR82, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 != VAR36) goto VAR51;
                FUN62(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR83, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN32(VAR84, 1);
                if (VAR30) FUN63(NULL, 0);
                FUN3(VAR22, VAR23,
                            FUN64(VAR85));
                FUN3(VAR22, VAR23, VAR6.VAR44,
                            FUN64(VAR86));
                if (VAR34 && *VAR34) {
                    FUN16(VAR34);
                }
                goto VAR43;
            }
            else if (!VAR34) goto VAR49;
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                if (VAR1 != VAR36) goto VAR51;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR88 = VAR89;
                FUN65(VAR6.VAR44, &VAR87);
                if (VAR87.VAR90.VAR91) FUN66(VAR6.VAR44, &VAR87);
                FUN32(VAR92, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR7 = VAR93;
                VAR87.VAR94 = VAR95;
                if (!FUN67(VAR96, VAR23))
                    VAR87.VAR94 |= VAR97;
                VAR87.VAR98 = VAR8.VAR44;
                FUN68(&VAR87.VAR90, VAR9.VAR44);
                FUN66(VAR6.VAR44, &VAR87);
                FUN32(VAR99, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN69(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44);
                FUN32(VAR100, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 != VAR36) goto VAR51;
                FUN34(VAR6.VAR44, VAR8.VAR44, *VAR9.VAR44 ? VAR9.VAR44 : NULL);
                FUN32(VAR54, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct VAR64 *VAR65 = NULL;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) {
                    VAR1 = FUN40(&VAR65);
                    if (VAR1 == VAR40) goto VAR66;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN41(VAR6.VAR44, VAR8.VAR44, VAR65, 1);
                FUN42(&VAR65);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN44(VAR6.VAR44, VAR8.VAR44, 1, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN70(VAR6.VAR44, VAR8.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 == VAR40) goto VAR51;
                if(VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if(VAR1 != VAR36) goto VAR52;
                FUN71(VAR6.VAR44, VAR8.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            move:
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 == VAR36) goto VAR51;
                if (VAR1 != VAR36 || !FUN38(VAR8.VAR44)) goto VAR62;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN39(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, VAR2, 1);
                FUN32(VAR63, 1);
            } else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN37(VAR6.VAR44, VAR7.VAR44);
            }
            else if (!VAR34) goto VAR49;
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN72(VAR6.VAR44);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                VAR3 = 0;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) {
                    VAR3 = 1;
                    VAR1 = FUN20(VAR38, &VAR10);
                    if (!FUN22(VAR10.VAR44)) goto VAR66;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN73(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, VAR3 ? VAR10.VAR44 : 0);
            } else if(!strcmp(VAR7.VAR44, VAR23)) {
                VAR5 = 0;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 == VAR36) {
                    VAR1 = FUN20(VAR38, &VAR9);
                    if(!FUN22(VAR9.VAR44))
                        goto VAR52;
                    else if(!strcasecmp(VAR9.VAR44, VAR23))
                        VAR5 = 1;
                    else
                        goto VAR52;
                }
                if(VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if(VAR1 != VAR36) goto VAR52;
                FUN74(VAR6.VAR44, VAR8.VAR44, VAR5);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR94 = VAR101;
                VAR87.VAR88 = VAR89;
                VAR87.VAR98 = VAR8.VAR44;
                FUN68(&VAR87.VAR90, VAR9.VAR44);
                FUN66(VAR6.VAR44, &VAR87);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR7 = VAR93;
                VAR87.VAR94 = VAR101 | VAR95;
                VAR87.VAR98 = VAR8.VAR44;
                FUN68(&VAR87.VAR90, VAR9.VAR44);
                FUN66(VAR6.VAR44, &VAR87);
            }
#ifdef VAR80
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                int VAR102 = 0, VAR103 = 0;
                if (VAR1 == VAR36) {
                    VAR102 = 1;
                    VAR1 = FUN33(VAR38, VAR22, &VAR8);
                    if (VAR1 == VAR40) goto VAR51;
                    if (VAR1 == VAR36) {
                        VAR103 = 1;
                        VAR1 = FUN20(VAR38, &VAR9);
                    }
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN75(VAR6.VAR44, VAR102 ? VAR8.VAR44 : 0,
                             VAR103 ? VAR9.VAR44 : 0);
            }
#VAR59
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!FUN76()) {
                    goto VAR55;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN11(VAR38);
                if (VAR34 != NULL) {
                    FUN3(VAR22,
               VAR23, VAR6.VAR44);
                    continue;
                }
                if (VAR104 == 1) {
                    FUN3(VAR22,
               VAR23, VAR6.VAR44);
                    continue;
                }
                if (VAR105 == 1) {
                    FUN3(VAR22,
                                VAR23,
                                VAR6.VAR44);
                    continue;
                }
                FUN77(VAR6.VAR44, 0);
                FUN32(VAR106, 1);
                continue;
            }
            if (!VAR34) {
                goto VAR49;
            } else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR107:
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 != VAR36 || !FUN38(VAR8.VAR44)) goto VAR62;
                FUN78(VAR6.VAR44, VAR8.VAR44, VAR2);
                FUN32(VAR108, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                FUN50(VAR1, VAR38);
                FUN51(VAR6.VAR44, VAR7.VAR44, VAR8.VAR44);
                FUN32(VAR109, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR110:
                FUN79(VAR6.VAR44, VAR2);
                FUN32(VAR111, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR4 = 0;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR36) {
                    VAR4 = 1;
                    VAR1 = FUN33(VAR38, VAR22, &VAR9);
                }
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                if (VAR4) {
                    FUN80(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, 1);
                }
                else {
                    FUN80(VAR6.VAR44, (char *)0, VAR8.VAR44, 1);
                }
                FUN32(VAR112, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR10);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN45(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, VAR10.VAR44);
                FUN32(VAR113, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN81(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR114, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN82(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR114, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN83(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR115, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR116:
                FUN84(VAR6.VAR44, VAR2);
                FUN32(VAR117, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN85(VAR6.VAR44, VAR8.VAR44);
                FUN32(VAR118, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR10);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR98 = VAR8.VAR44;
                FUN68(&VAR87.VAR90, VAR9.VAR44);
                VAR87.VAR119 = VAR10.VAR44;
                FUN66(VAR6.VAR44, &VAR87);
                 FUN32(VAR120, 1);
             }
             else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR35) goto VAR55;
                 struct VAR64 *VAR121 = FUN86(VAR38);
                 if (VAR121) {
                    FUN87(VAR6.VAR44, VAR121, VAR19);
                    FUN42(&VAR121);
                }
                 else goto VAR52;
             }
             else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR35) goto VAR55;
                 struct VAR64 *VAR121 = FUN86(VAR38);
                 if (VAR121) {
                    FUN88(VAR6.VAR44, VAR121);
                    FUN42(&VAR121);
                }
                 else goto VAR52;
             }
             else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR35) goto VAR55;
                 if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                 if (VAR1 != VAR36) goto VAR52;
                 FUN89(VAR6.VAR44, &VAR19, 1);
             }
             else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR35) goto VAR55;
                 struct VAR64 *VAR121 = FUN86(VAR38);
                 if (VAR121) {
                    FUN90(VAR6.VAR44, VAR121, VAR19);
                    FUN42(&VAR121);
                }
                else goto VAR52;
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR122:
                FUN91(VAR6.VAR44, VAR2);
                FUN32(VAR123, 1);
            }
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 1;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN20(VAR38, &VAR8);
                if (VAR1 != VAR36) goto VAR51;
                FUN24(VAR8.VAR44);
                FUN25(VAR14, VAR8.VAR44, 99);
                if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR74;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR107;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR110;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR116;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR122;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto copy;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto move;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto move;
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    VAR1 = FUN20(VAR38, &VAR8);
                    if (!FUN38(VAR8.VAR44)) goto VAR62;
                    if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                    if (VAR1 != VAR36) goto VAR52;
                    FUN49(VAR6.VAR44, VAR8.VAR44);
                    FUN32(VAR72, 1);
                }
                else if (!strcmp(VAR8.VAR44, VAR23)) {
                    goto VAR124;
                }
                else {
                    FUN3(VAR22, VAR23, VAR6.VAR44);
                    FUN23(VAR38, VAR1);
                }
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR4 = 0;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR36) {
                    VAR4 = 1;
                    VAR1 = FUN33(VAR38, VAR22, &VAR9);
                }
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                if (VAR4) {
                    FUN80(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44, 0);
                }
                else {
                    FUN80(VAR6.VAR44, (char *)0, VAR8.VAR44, 0);
                }
                FUN32(VAR125, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN43(VAR6.VAR44, VAR7.VAR44);
                FUN32(VAR126, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if(VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 != VAR36) goto VAR51;
                FUN92(VAR6.VAR44, VAR8.VAR44);
            }
#ifdef VAR80
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN93(VAR6.VAR44);
            }
#VAR59
            else goto VAR55;
            break;
        case VAR36:
            if (!strcmp(VAR7.VAR44, VAR23)) {
                int VAR127 = 0;
                if (!FUN27(VAR128))
                    goto VAR55;
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR36) {
                    VAR127 = 1;
                    VAR1 = FUN20(VAR38, &VAR9);
                    if (VAR1 == VAR40) goto VAR51;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN94(VAR6.VAR44, VAR8.VAR44, VAR127 ? VAR9.VAR44 : NULL);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                FUN95(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                if (!VAR29 && !VAR30) goto VAR60;
                FUN96(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                if (!VAR29 && !VAR30) goto VAR60;
                FUN97(VAR6.VAR44, 0);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                if (!VAR29 && !VAR30) goto VAR60;
                FUN97(VAR6.VAR44, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                int VAR3 = 0;
                if(VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if(VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                if(VAR1 == VAR36) {
                    VAR1 = FUN33(VAR38, VAR22, &VAR10);
                    if (!FUN22(VAR10.VAR44)) goto VAR66;
                    VAR3 = 1;
                }
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN98(VAR6.VAR44, VAR8.VAR44, VAR9.VAR44,
                         (VAR3 ? VAR10.VAR44 : NULL));
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                FUN99(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                struct listargs VAR87;
                if (VAR1 != VAR36) goto VAR51;
                memset(&VAR87, 0, sizeof(struct VAR87));
                VAR87.VAR7 = VAR129;
                VAR87.VAR88 = VAR89 | VAR130;
                FUN65(VAR6.VAR44, &VAR87);
                if (VAR87.VAR90.VAR91) FUN66(VAR6.VAR44, &VAR87);
                FUN32(VAR92, 1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
                goto move;
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (!VAR29 && !VAR30) goto VAR60;
                VAR2 = 0;
                if (VAR1 != VAR36) goto VAR51;
            VAR124:
                VAR1 = FUN20(VAR38, &VAR8);
                if (!VAR8.VAR131 || !FUN38(VAR8.VAR44)) goto VAR62;
                FUN100(VAR6.VAR44, VAR8.VAR44, VAR2);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                if (!VAR29 && !VAR30) goto VAR60;
                FUN101(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                FUN102(VAR6.VAR44, VAR1);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                FUN103(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN104(VAR6.VAR44, VAR8.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN105(VAR6.VAR44);
            }
            else if (!strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                VAR1 = FUN33(VAR38, VAR22, &VAR8);
                if (VAR1 == VAR40) goto VAR51;
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR52;
                FUN106(VAR6.VAR44, VAR8.VAR44);
            }
            else if (VAR132 && !strcmp(VAR7.VAR44, VAR23)) {
                if (VAR1 != VAR36) goto VAR51;
                memset(&VAR21, 0, sizeof(struct VAR21));
                do {
                    VAR1 = FUN33(VAR38, VAR22, &VAR8);
                    if (VAR1 == VAR40) goto VAR133;
                    if (!strcmp(VAR8.VAR44, VAR23)) {
                        VAR1 = FUN30(VAR38);
                        if (VAR1 != VAR36)
                            goto VAR133;
                        VAR1 = FUN30(VAR38);
                        if (VAR1 != VAR36) {
                            FUN50(VAR1, VAR38);
                            do {
                                VAR1 = FUN33(VAR38, VAR22, &VAR9);
                                if (VAR1 == VAR40) break;
                                FUN107(&VAR21.VAR134, VAR9.VAR44);
                            } while (VAR1 == VAR36);
                        }
                        if (VAR1 != VAR36)
                            goto VAR133;
                        VAR1 = FUN30(VAR38);
                    }
                    else {
                        VAR1 = FUN33(VAR38, VAR22, &VAR9);
                        if (!strcmp(VAR8.VAR44, VAR23)) {
                            if (!FUN46(VAR9.VAR44)) goto VAR135;
                            VAR21.VAR136 = atoi(VAR9.VAR44);
                        }
                        else if (!strcmp(VAR8.VAR44, VAR23))
                            FUN108(&VAR21.VAR137, &VAR9);
                        else if (!strcmp(VAR8.VAR44, VAR23))
                            FUN108(&VAR21.VAR138, &VAR9);
                        else if (!strcmp(VAR8.VAR44, VAR23))
                            FUN108(&VAR21.VAR139, &VAR9);
                        else
                            goto VAR135;
                    }
                } while (VAR1 == VAR36);
                if (VAR1 == VAR36) VAR1 = FUN30(VAR38);
                if (VAR1 != VAR36) goto VAR135;
                FUN109(VAR6.VAR44, &VAR21);
            }
            else goto VAR55;
            break;
        default:
        VAR55:
            FUN3(VAR22, VAR23, VAR6.VAR44);
            FUN23(VAR38, VAR1);
        }
        if (VAR16 && strcmp(VAR23, VAR14)) {
            double VAR140, VAR141;
            const char *VAR142 = FUN13(VAR29);
            if (!VAR142) VAR142 = VAR23;
            FUN110(&VAR140, &VAR141);
            if (VAR140 >= VAR17) {
                syslog(VAR46, VAR23,
                    VAR34 ? VAR34 : VAR23, VAR14, VAR142,
                    VAR140, VAR141, VAR140 + VAR141);
            }
        }
        continue;
    VAR49:
        FUN3(VAR22, VAR23, VAR6.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    VAR60:
        FUN3(VAR22,
                    VAR23, VAR6.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    VAR133:
        FUN111(&VAR21.VAR137);
        FUN111(&VAR21.VAR138);
        FUN111(&VAR21.VAR139);
        FUN112(&VAR21.VAR134);
    VAR51:
        FUN3(VAR22,
                    VAR23, VAR6.VAR44, VAR7.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    VAR135:
        FUN111(&VAR21.VAR137);
        FUN111(&VAR21.VAR138);
        FUN111(&VAR21.VAR139);
        FUN112(&VAR21.VAR134);
    VAR52:
        FUN3(VAR22,
                    VAR23, VAR6.VAR44, VAR7.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    VAR62:
        FUN3(VAR22,
                    VAR23, VAR6.VAR44, VAR7.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    VAR66:
        FUN3(VAR22,
                    VAR23, VAR6.VAR44, VAR7.VAR44);
        FUN23(VAR38, VAR1);
        continue;
    }
VAR43:
    FUN89(NULL, &VAR19, 0);
}