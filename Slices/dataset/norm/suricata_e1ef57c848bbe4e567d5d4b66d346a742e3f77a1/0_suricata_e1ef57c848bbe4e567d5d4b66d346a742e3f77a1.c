int FUN1 (VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
                     VAR7 *VAR8)
{
    FUN2();
    FUN3(VAR4->VAR9);
    FUN4(VAR10, VAR4->VAR11);
    if (FUN5(VAR4->VAR9->VAR12 == 0)) {
        VAR4->VAR9->VAR12 = (VAR13)VAR2->VAR14;
#ifdef VAR15
    } else if (FUN5((VAR13)VAR2->VAR14 != VAR4->VAR9->VAR12)) {
        FUN4(VAR16, VAR4->VAR9->VAR12, VAR2->VAR14);
#VAR17
    }
    VAR18 *VAR19 = (VAR18 *)VAR4->VAR9->VAR20;
    if (VAR19 != NULL) {
        VAR19->VAR21 |= VAR4->VAR22->VAR23;
        if (FUN6(VAR4))
            VAR19->VAR24.VAR25 |= VAR4->VAR22->VAR23;
        else if (FUN7(VAR4))
            VAR19->VAR26.VAR25 |= VAR4->VAR22->VAR23;
        if (VAR19->VAR27 & VAR28 &&
            VAR19->VAR24.VAR25 != 0 &&
            VAR19->VAR26.VAR25 != 0)
        {
            FUN4(VAR16, VAR19);
            VAR19->VAR27 &= ~VAR28;
        }
    }
    if ((VAR4->VAR22->VAR23 & (VAR29|VAR30)) == (VAR29|VAR30)) {
        FUN8(VAR2, VAR6->VAR31);
    } else if (VAR4->VAR22->VAR23 & (VAR29)) {
        FUN8(VAR2, VAR6->VAR32);
    }
    if (VAR4->VAR22->VAR23 & (VAR33)) {
        FUN8(VAR2, VAR6->VAR34);
    }
    if (FUN9(VAR4) == 1) {
        FUN4(VAR16);
        FUN10(VAR4->VAR9);
        FUN11(VAR4);
        FUN12(VAR4->VAR9);
        FUN13(VAR4);
        FUN14(VAR4);
        FUN15(0);
    }
    if (VAR19 == NULL || VAR19->VAR35 == VAR36) {
        if (FUN16(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37) == -1) {
            goto VAR38;
        }
        if (VAR19 != NULL)
            FUN4(VAR39, VAR4->VAR9->VAR40);
    } else {
        if (VAR4->VAR27 & VAR41) {
            if (FUN7(VAR4)) {
                VAR19->VAR24.VAR42 = FUN17(VAR4);
                FUN18(VAR2, VAR6->VAR43, VAR19,
                        &VAR19->VAR26, VAR4, VAR8);
            } else {
                VAR19->VAR26.VAR42 = FUN17(VAR4);
                FUN18(VAR2, VAR6->VAR43, VAR19,
                        &VAR19->VAR24, VAR4, VAR8);
            }
            goto VAR44;
        }
        if (VAR19->VAR27 & VAR45)
            FUN19(VAR19, VAR4);
        if (FUN20(VAR19, VAR4) == 1) {
            goto VAR44;
        }
        if (FUN21(VAR19, VAR4) == 1) {
            FUN22(VAR19, VAR4);
            goto VAR44;
        }
        FUN22(VAR19, VAR4);
        if (FUN23(VAR19, VAR4) == 0)
            if (FUN24(VAR19, VAR4) == 0)
                if (FUN25(VAR19,VAR4))
                    goto VAR44;
        switch (VAR19->VAR35) {
            case VAR46:
                if(FUN26(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR47:
                if(FUN27(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR48:
                if(FUN28(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR49:
                if(FUN29(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR50:
                if(FUN30(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR51:
                if(FUN31(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR52:
                if(FUN32(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR53:
                if(FUN33(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR54:
                if(FUN34(VAR2, VAR4, VAR6, VAR19, &VAR6->VAR37)) {
                    goto VAR38;
                }
                break;
            case VAR55:
                FUN4(VAR16);
                break;
            default:
                FUN4(VAR16);
                break;
        }
    VAR44:
        if (VAR19->VAR35 >= VAR48) {
            VAR4->VAR27 |= VAR56;
        }
    }
    if (VAR19 != NULL) {
        while (VAR6->VAR37.VAR57 > 0) {
            FUN4(VAR16);
            VAR3 *VAR58 = FUN35(&VAR6->VAR37);
            if (VAR58 != NULL) {
                if (FUN6(VAR58)) {
                    FUN4(VAR16);
                    FUN18(VAR2, VAR6->VAR43, VAR19,
                            &VAR19->VAR24, VAR58, NULL);
                } else {
                    FUN4(VAR16);
                    FUN18(VAR2, VAR6->VAR43, VAR19,
                            &VAR19->VAR26, VAR58, NULL);
                }
                FUN36(VAR8, VAR58);
            }
            FUN4(VAR16);
        }
        if (VAR4->VAR27 & VAR59) {
            FUN37(VAR4);
        }
        if ((VAR19->VAR24.VAR27 & VAR60) &&
             (VAR19->VAR26.VAR27 & VAR60))
        {
            if (FUN38()) {
                FUN39(VAR4);
            }
        }
        if ((VAR19->VAR24.VAR27 & VAR60) ||
             (VAR19->VAR26.VAR27 & VAR60))
        {
            VAR4->VAR27 |= VAR61;
        }
        if ((FUN6(VAR4) && (VAR19->VAR24.VAR27 & VAR62)) ||
            (FUN7(VAR4) && (VAR19->VAR26.VAR27 & VAR62)))
        {
            VAR4->VAR27 |= VAR61;
        }
        if (VAR19->VAR27 & VAR63) {
            if (FUN38()) {
                FUN39(VAR4);
            }
        } else if (VAR64 &&
                (VAR19->VAR24.VAR27 & VAR62) &&
                (VAR19->VAR26.VAR27 & VAR62) &&
                FUN38())
        {
            FUN4(VAR16);
            FUN39(VAR4);
        }
    }
    FUN15(0);
VAR38:
    while (VAR6->VAR37.VAR57 > 0) {
        VAR3 *VAR58 = FUN35(&VAR6->VAR37);
        if (VAR58 != NULL) {
            FUN36(VAR8, VAR58);
        }
    }
    if (VAR4->VAR27 & VAR59) {
        FUN37(VAR4);
     }
     if (FUN40()) {
        FUN41(VAR4);
         FUN13(VAR4);
     }
     FUN15(-1);
}