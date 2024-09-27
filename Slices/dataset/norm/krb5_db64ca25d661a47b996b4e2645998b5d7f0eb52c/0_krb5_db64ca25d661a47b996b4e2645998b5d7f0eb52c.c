FUN1(krb5_context VAR1,
                            VAR2 * VAR3,
                            VAR4 *VAR5,
                            VAR6 * VAR7,
                            VAR8 * VAR9,
                            VAR10 * VAR11,
                            VAR2 ** VAR12,
                            krb5_kdcpreauth_callbacks VAR13,
                            krb5_kdcpreauth_rock VAR14,
                            krb5_kdcpreauth_moddata VAR15,
                            krb5_kdcpreauth_modreq VAR16)
{
    krb5_error_code VAR17 = 0;
    krb5_data VAR18 = {0, 0, NULL};
    VAR19 *VAR20 = NULL;
    VAR21 *VAR22 = NULL;
    int VAR23 = 0;
    unsigned char *VAR24 = NULL;
    unsigned char *VAR25 = NULL, *VAR26 = NULL;
    unsigned int VAR27 = 0;
    unsigned int VAR28 = 0, VAR29 = 0;
    krb5_kdc_dh_key_info VAR30;
    VAR4 *VAR31 = NULL;
    VAR32 *VAR33 = NULL;
    VAR34 *VAR35 = NULL;
    VAR4 *VAR36 = NULL;
    krb5_octet_data VAR37;
    krb5_enctype VAR38 = -1;
    VAR39 *VAR40 = NULL;
    VAR41 *VAR42 = NULL;
    VAR4 *VAR43 = NULL;
    pkinit_kdc_context VAR44;
    pkinit_kdc_req_context VAR45;
    int VAR46 = 0;
    *VAR12 = NULL;
    if (VAR3->VAR47 == VAR48) {
        return FUN2(VAR1, VAR7, VAR9,
                                VAR11, VAR12);
    }
    if (VAR3->VAR49 <= 0 || VAR3->VAR50 == NULL)
        return 0;
    if (VAR16 == NULL) {
        FUN3(VAR51);
        return VAR52;
    }
    VAR44 = FUN4(VAR1, VAR15, VAR7->VAR53);
    if (VAR44 == NULL) {
        FUN3(VAR51);
        return VAR54;
    }
    FUN3(VAR51);
    VAR45 = (VAR55)VAR16;
    if (VAR11->VAR50) {
        free(VAR11->VAR50);
        VAR11->VAR49 = 0;
        VAR11->VAR50 = NULL;
    }
    for(VAR23 = 0; VAR23 < VAR7->VAR56; VAR23++) {
        VAR38 = VAR7->VAR57[VAR23];
        if (!FUN5(VAR38))
            continue;
        else {
            FUN3(VAR51, VAR38);
            break;
        }
    }
    if (VAR23 == VAR7->VAR56) {
        VAR17 = VAR58;
        goto VAR59;
    }
    switch((int)VAR45->VAR47) {
    case VAR60:
        FUN6(&VAR33);
        if (VAR33 == NULL) {
            VAR17 = VAR61;
            goto VAR59;
        }
        VAR33->VAR62 = VAR63;
        break;
    case VAR64:
    case VAR65:
        FUN7(&VAR35);
        if (VAR35 == NULL) {
            VAR17 = VAR61;
            goto VAR59;
        }
        VAR35->VAR62 = VAR66;
        break;
    default:
        VAR17 = VAR67;
        goto VAR59;
    }
    if (VAR45->VAR68 != NULL &&
        VAR45->VAR68->VAR69 != NULL) {
        VAR24 =
            VAR45->VAR68->VAR69->VAR24.VAR70;
        VAR27 =
            VAR45->VAR68->VAR69->VAR24.VAR49;
        VAR33->VAR62 = VAR71;
    } else if (VAR45->VAR72 != NULL &&
               VAR45->VAR72->VAR69 != NULL) {
        VAR24 =
            VAR45->VAR72->VAR69->VAR24.VAR70;
        VAR27 =
            VAR45->VAR72->VAR69->VAR24.VAR49;
        VAR35->VAR62 = VAR73;
    }
    if (VAR33 != NULL && (VAR33->VAR62 == VAR71 ||
                        VAR33->VAR62 == VAR73)) {
        FUN3(VAR51);
        VAR17 = FUN8(VAR1, VAR44->VAR74,
                                   VAR45->VAR74, VAR44->VAR75, VAR24,
                                   VAR27, &VAR25, &VAR29,
                                   &VAR26, &VAR28);
        if (VAR17) {
            FUN3(VAR51);
            goto VAR59;
        }
    }
    if ((VAR35 != NULL &&
         VAR35->VAR62 == VAR73) ||
        (VAR33 != NULL && VAR33->VAR62 == VAR71)) {
        VAR30.VAR24.VAR49 = VAR29;
        VAR30.VAR24.VAR70 = VAR25;
        VAR30.VAR76 = VAR7->VAR76;
        VAR30.VAR77 = 0;
        VAR17 = FUN9(&VAR30,
                                                   &VAR31);
        if (VAR17) {
            FUN3(VAR51);
            goto VAR59;
        }
#ifdef VAR78
        FUN10((unsigned char *)VAR31->VAR70,
                         VAR31->VAR49,
                         VAR51);
#VAR79
        switch ((int)VAR3->VAR47) {
        case VAR60:
            VAR17 = FUN11(VAR1, VAR44->VAR74,
                                           VAR45->VAR74, VAR44->VAR75, VAR80, 1,
                                           (unsigned char *)VAR31->VAR70,
                                           VAR31->VAR49,
                                           &VAR33->VAR81.VAR82.VAR83.VAR70,
                                           &VAR33->VAR81.VAR82.VAR83.VAR49);
            if (VAR17) {
                FUN3(VAR51);
                goto VAR59;
            }
            break;
        case VAR64:
        case VAR65:
            VAR17 = FUN11(VAR1, VAR44->VAR74,
                                           VAR45->VAR74, VAR44->VAR75, VAR84, 1,
                                           (unsigned char *)VAR31->VAR70,
                                           VAR31->VAR49,
                                           &VAR35->VAR81.VAR83.VAR70,
                                           &VAR35->VAR81.VAR83.VAR49);
            if (VAR17) {
                FUN3(VAR51);
                goto VAR59;
            }
            break;
        }
    } else {
        FUN3(VAR51);
        VAR17 = FUN12(VAR1, VAR38, VAR11);
        if (VAR17) {
            FUN3(VAR51);
            goto VAR59;
        }
        for (VAR23 = 0; VAR7->VAR3[VAR23] != NULL; VAR23++) {
            FUN3(VAR51,
                     VAR85, VAR7->VAR3[VAR23]->VAR47);
            if (VAR7->VAR3[VAR23]->VAR47 == 132)
                VAR46 = 1;
        }
        FUN3(VAR51,
                 VAR85, VAR46);
        if ((int)VAR3->VAR47 == VAR60 || VAR46) {
            FUN13(&VAR40);
            if (VAR40 == NULL) {
                VAR17 = VAR61;
                goto VAR59;
            }
            VAR17 = FUN14(VAR1, 0,
                                          VAR11, VAR86,
                                          VAR5, &VAR40->VAR87);
            if (VAR17) {
                FUN3(VAR51);
                goto VAR59;
            }
#ifdef VAR88
            FUN3(VAR51, VAR5->VAR49);
            FUN15(VAR5->VAR70, VAR5->VAR49);
            FUN3(VAR51, VAR40->VAR87.VAR49);
            FUN15(VAR40->VAR87.VAR50,
                         VAR40->VAR87.VAR49);
            FUN3(VAR51, VAR11->VAR49);
            FUN15(VAR11->VAR50, VAR11->VAR49);
#VAR79
            FUN16(VAR1, VAR11,
                                        &VAR40->VAR89);
            VAR17 = FUN17(VAR40,
                                                      &VAR43);
            if (VAR17) {
                FUN3(VAR51);
                goto VAR59;
            }
        }
        switch ((int)VAR3->VAR47) {
        case VAR60:
            VAR33->VAR62 = VAR63;
            VAR17 = FUN18(VAR1, VAR44->VAR74,
                                              VAR45->VAR74, VAR44->VAR75, VAR3->VAR47, 1,
                                              (unsigned char *)VAR43->VAR70,
                                              VAR43->VAR49,
                                              &VAR33->VAR81.VAR90.VAR70, &VAR33->VAR81.VAR90.VAR49);
            break;
        case VAR64:
        case VAR65:
            if (!VAR46) {
                FUN19(&VAR42);
                if (VAR42 == NULL) {
                    VAR17 = VAR61;
                    goto VAR59;
                }
                VAR42->VAR76 = VAR45->VAR72->VAR91.VAR76;
                FUN16(VAR1, VAR11,
                                            &VAR42->VAR89);
                VAR17 = FUN20(VAR42,
                                                                 &VAR43);
                if (VAR17) {
                    FUN3(VAR51);
                    goto VAR59;
                }
            }
            VAR35->VAR62 = VAR66;
            VAR17 = FUN18(VAR1, VAR44->VAR74,
                                              VAR45->VAR74, VAR44->VAR75, VAR3->VAR47, 1,
                                              (unsigned char *)VAR43->VAR70,
                                              VAR43->VAR49,
                                              &VAR35->VAR81.VAR90.VAR70, &VAR35->VAR81.VAR90.VAR49);
            break;
        }
        if (VAR17) {
            FUN3(VAR51,
                     FUN21(VAR17));
            goto VAR59;
        }
#ifdef VAR78
        FUN10((unsigned char *)VAR43->VAR70,
                         VAR43->VAR49,
                         VAR51);
        switch ((int)VAR3->VAR47) {
        case VAR60:
            FUN10(VAR33->VAR81.VAR90.VAR70,
                             VAR33->VAR81.VAR90.VAR49,
                             VAR51);
            break;
        case VAR64:
        case VAR65:
            FUN10(VAR35->VAR81.VAR90.VAR70,
                             VAR35->VAR81.VAR90.VAR49,
                             VAR51);
            break;
        }
#VAR79
    }
    if ((VAR33 != NULL && VAR33->VAR62 == VAR71) &&
        ((VAR45->VAR68 != NULL &&
          VAR45->VAR68->VAR92 != NULL))) {
        if (VAR45->VAR68 != NULL &&
            VAR45->VAR68->VAR92 != NULL) {
            VAR17 = FUN22(VAR1, VAR45->VAR68->VAR92,
                                         &(VAR33->VAR81.VAR82.VAR93));
            if (VAR17) {
                FUN3(VAR51,
                         FUN21(VAR17));
                goto VAR59;
            }
        }
    }
    switch ((int)VAR3->VAR47) {
    case VAR60:
        VAR17 = FUN23(VAR33, &VAR36);
        break;
    case VAR64:
    case VAR65:
        VAR17 = FUN24(VAR35, &VAR36);
        break;
    }
    if (VAR17) {
        FUN3(VAR51);
        goto VAR59;
    }
#ifdef VAR78
    if (VAR36 != NULL)
        FUN10((unsigned char *)VAR36->VAR70, VAR36->VAR49,
                         VAR51);
#VAR79
    if ((VAR35 != NULL &&
          VAR35->VAR62 == VAR73) ||
         (VAR33 != NULL && VAR33->VAR62 == VAR71)) {
        if (VAR33 != NULL && VAR33->VAR81.VAR82.VAR93) {
            VAR37.VAR70 = (char *)VAR26;
             VAR37.VAR49 = VAR28;
             VAR17 = FUN25(VAR1, &VAR37,
                                            VAR33->VAR81.VAR82.VAR93,
                                            VAR7->VAR94, VAR7->VAR53,
                                            VAR38,
                                            (VAR95 *)VAR5,
                                            (VAR95 *)VAR36,
                                            VAR11);
            if (VAR17) {
                FUN3(VAR51,
                         FUN21(VAR17));
                goto VAR59;
            }
        } else {
            VAR17 = FUN26(VAR1, VAR38, VAR26,
                                            VAR28, VAR11);
            if (VAR17) {
                FUN3(VAR51,
                         FUN21(VAR17));
                goto VAR59;
            }
        }
    }
    *VAR12 = malloc(sizeof(VAR2));
    if (*VAR12 == NULL) {
        VAR17 = VAR61;
        free(VAR36->VAR70);
        free(VAR36);
        VAR36 = NULL;
        goto VAR59;
    }
    (*VAR12)->VAR96 = VAR97;
    switch ((int)VAR3->VAR47) {
    case VAR60:
        (*VAR12)->VAR47 = VAR98;
        break;
    case VAR65:
    case VAR64:
        (*VAR12)->VAR47 = VAR64;
        break;
    }
    (*VAR12)->VAR49 = VAR36->VAR49;
    (*VAR12)->VAR50 = (VAR99 *) VAR36->VAR70;
VAR59:
    FUN27(VAR1, VAR45);
    free(VAR18.VAR70);
    free(VAR36);
    if (VAR31 != NULL)
        FUN28(VAR1, VAR31);
    if (VAR43 != NULL)
        FUN28(VAR1, VAR43);
    free(VAR25);
    free(VAR26);
    switch ((int)VAR3->VAR47) {
    case VAR60:
        FUN29(&VAR20);
        FUN30(&VAR33);
        FUN31(&VAR40);
        break;
    case VAR64:
    case VAR65:
        FUN32(&VAR22);
        FUN33(&VAR35);
        if (!VAR46)
            FUN34(&VAR42);
        else
            FUN31(&VAR40);
        break;
    }
    if (VAR17)
        FUN3(VAR51);
    return VAR17;
}