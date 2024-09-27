int FUN1(VAR1 *VAR2, int VAR3, const void *VAR4, int VAR5)
{
    const unsigned char *VAR6 = VAR4;
    int VAR7;
    unsigned int VAR8, VAR9, VAR10;
#if !FUN2(VAR11) && VAR12
    unsigned int VAR13, VAR14;
    unsigned int VAR15 = (unsigned int)VAR5;
#VAR16
    VAR17 *VAR18 = &VAR2->VAR19.VAR20[0];
    int VAR21;
    if (VAR5 < 0) {
        FUN3(VAR22, VAR23);
        return -1;
    }
    VAR2->VAR24 = VAR25;
    VAR7 = VAR2->VAR19.VAR26;
    if ((unsigned int)VAR5 < VAR2->VAR19.VAR26) {
        FUN3(VAR22, VAR27);
        return -1;
    }
    VAR2->VAR19.VAR26 = 0;
    if (FUN4(VAR2) && !FUN5(VAR2)) {
        VAR21 = VAR2->FUN6(VAR2);
        if (VAR21 < 0)
            return (VAR21);
        if (VAR21 == 0) {
            FUN3(VAR22, VAR28);
            return -1;
        }
    }
    if (VAR18->VAR29 != 0) {
        VAR21 = FUN7(VAR2, VAR3, &VAR6[VAR7], VAR2->VAR19.VAR30);
        if (VAR21 <= 0) {
            VAR2->VAR19.VAR26 = VAR7;
            return VAR21;
        }
        VAR7 += VAR21;
    }
#if !FUN2(VAR11) && VAR12
     if (VAR3 == VAR31 &&
         VAR15 >= 4 * (VAR13 = VAR2->VAR13) &&
         VAR2->VAR32 == NULL && VAR2->VAR33 == NULL &&
        !FUN8(VAR2) && FUN9(VAR2) &&
         FUN10(FUN11(VAR2->VAR34)) &
         VAR12) {
         unsigned char VAR35[13];
        EVP_CTRL_TLS1_1_MULTIBLOCK_PARAM VAR36;
        int VAR37;
        if ((VAR13 & 0xfff) == 0)
            VAR13 -= 512;
        if (VAR7 == 0 || VAR18->VAR6 == NULL) {
            FUN12(VAR2);
            VAR37 = FUN13(VAR2->VAR34,
                                          VAR38,
                                          VAR13, NULL);
            if (VAR15 >= 8 * VAR13)
                VAR37 *= 8;
            else
                VAR37 *= 4;
            if (!FUN14(VAR2, 1, VAR37)) {
                FUN3(VAR22, VAR39);
                return -1;
            }
        } else if (VAR7 == VAR5) {
            FUN12(VAR2);
            return VAR7;
        }
        VAR8 = (VAR5 - VAR7);
        for (;;) {
            if (VAR8 < 4 * VAR13) {
                FUN12(VAR2);
                break;
            }
            if (VAR2->VAR40->VAR41) {
                VAR21 = VAR2->VAR42->FUN15(VAR2);
                if (VAR21 <= 0) {
                    VAR2->VAR19.VAR26 = VAR7;
                    return VAR21;
                }
            }
            if (VAR8 >= 8 * VAR13)
                VAR14 = VAR13 * (VAR36.VAR43 = 8);
            else
                VAR14 = VAR13 * (VAR36.VAR43 = 4);
            memcpy(VAR35, VAR2->VAR19.VAR44, 8);
            VAR35[8] = VAR3;
            VAR35[9] = (unsigned char)(VAR2->VAR45 >> 8);
            VAR35[10] = (unsigned char)(VAR2->VAR45);
            VAR35[11] = 0;
            VAR35[12] = 0;
            VAR36.VAR46 = NULL;
            VAR36.VAR47 = VAR35;
            VAR36.VAR5 = VAR14;
            VAR37 = FUN13(VAR2->VAR34,
                                          VAR48,
                                          sizeof(VAR36), &VAR36);
            if (VAR37 <= 0 || VAR37 > (int)VAR18->VAR5) {
                FUN12(VAR2);
                break;
            }
            VAR36.VAR46 = VAR18->VAR6;
            VAR36.VAR47 = &VAR6[VAR7];
            VAR36.VAR5 = VAR14;
            if (FUN13(VAR2->VAR34,
                                    VAR49,
                                    sizeof(VAR36), &VAR36) <= 0)
                return -1;
            VAR2->VAR19.VAR44[7] += VAR36.VAR43;
            if (VAR2->VAR19.VAR44[7] < VAR36.VAR43) {
                int VAR50 = 6;
                while (VAR50 >= 0 && (++VAR2->VAR19.VAR44[VAR50--]) == 0) ;
            }
            VAR18->VAR51 = 0;
            VAR18->VAR29 = VAR37;
            VAR2->VAR19.VAR30 = VAR14;
            VAR2->VAR19.VAR52 = &VAR6[VAR7];
            VAR2->VAR19.VAR53 = VAR3;
            VAR2->VAR19.VAR54 = VAR14;
            VAR21 = FUN7(VAR2, VAR3, &VAR6[VAR7], VAR14);
            if (VAR21 <= 0) {
                if (VAR21 < 0 && (!VAR2->VAR55 || !FUN16(VAR2->VAR55))) {
                    FUN12(VAR2);
                }
                VAR2->VAR19.VAR26 = VAR7;
                return VAR21;
            }
            if (VAR21 == (int)VAR8) {
                FUN12(VAR2);
                return VAR7 + VAR21;
            }
            VAR8 -= VAR21;
            VAR7 += VAR21;
        }
    } else
#VAR16
    if (VAR7 == VAR5) {
        if (VAR2->VAR56 & VAR57 && !FUN17(VAR2))
            FUN12(VAR2);
        return VAR7;
    }
    VAR8 = (VAR5 - VAR7);
    VAR9 = VAR2->VAR9;
    VAR10 = VAR2->VAR58;
    if (VAR10 > VAR59) {
        FUN3(VAR22, VAR60);
        return -1;
    }
    if (VAR10 == 0
        || VAR2->VAR34 == NULL
        || !(FUN10(FUN11(VAR2->VAR34))
             & VAR61)
        || !FUN9(VAR2))
        VAR10 = 1;
    if (VAR2->VAR13 == 0 || VAR9 > VAR2->VAR13
        || VAR9 == 0) {
        FUN3(VAR22, VAR60);
        return -1;
    }
    for (;;) {
        unsigned int VAR62[VAR59], VAR63, VAR64;
        unsigned int VAR65, VAR50;
        if (VAR8 == 0)
            VAR65 = 1;
        else
            VAR65 = ((VAR8 - 1) / VAR9) + 1;
        if (VAR65 > VAR10)
            VAR65 = VAR10;
        if (VAR8 / VAR65 >= VAR2->VAR13) {
            for (VAR50 = 0; VAR50 < VAR65; VAR50++) {
                VAR62[VAR50] = VAR2->VAR13;
            }
        } else {
            VAR63 = VAR8 / VAR65;
            VAR64 = VAR8 % VAR65;
            for (VAR50 = 0; VAR50 < VAR65; VAR50++) {
                VAR62[VAR50] = VAR63;
                if (VAR50 < VAR64)
                    VAR62[VAR50]++;
            }
        }
        VAR21 = FUN18(VAR2, VAR3, &(VAR6[VAR7]), VAR62, VAR65, 0);
        if (VAR21 <= 0) {
            VAR2->VAR19.VAR26 = VAR7;
            return VAR21;
        }
        if ((VAR21 == (int)VAR8) ||
            (VAR3 == VAR31 &&
             (VAR2->VAR56 & VAR66))) {
            VAR2->VAR40->VAR67 = 0;
            if ((VAR21 == (int)VAR8) && VAR2->VAR56 & VAR57 &&
                !FUN17(VAR2))
                FUN12(VAR2);
            return VAR7 + VAR21;
        }
        VAR8 -= VAR21;
        VAR7 += VAR21;
    }
}