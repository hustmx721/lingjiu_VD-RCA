FUN1(VAR1 *VAR2, char *VAR3)
FUN1(VAR1 *VAR2, char *VAR3, const int VAR4)
 {
     VAR5 *VAR6;
     int VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11;
    int VAR12, VAR13;
    VAR11 = 0;
    strcpy(VAR3, VAR14);
    VAR7 = FUN2(VAR2, VAR14, &VAR8);
    if (VAR7 < 0 || VAR8 < 6)
    {
        FUN3(VAR14);
        return;
    }
    if (VAR7 + 6 > VAR2->VAR8)
    {
        FUN3(VAR14);
        return;
    }
    VAR6 = VAR2->VAR15 + VAR7;
    VAR9 = FUN4(VAR6 + 2);
    VAR10 = FUN4(VAR6 + 4);
    if (VAR10 + VAR7 > VAR2->VAR8
        || VAR7 + 6 + VAR9 * 12 > VAR2->VAR8)
    {
        FUN3(VAR14);
        return;
    }
    if (VAR8 < 6 + (VAR9 * 12))
    {
        FUN3(VAR14);
        return;
    }
    for (VAR12 = 0; VAR12 < VAR9; VAR12++)
    {
        VAR5 *VAR16 = VAR6 + 6 + VAR12 * 12;
        int VAR17 = FUN4(VAR16 + 0);
        int VAR18 = FUN4(VAR16 + 2);
        int VAR19 = FUN4(VAR16 + 4);
        int VAR20 = FUN4(VAR16 + 6);
         VAR8 = FUN4(VAR16 + 8);
         VAR7 = FUN4(VAR16 + 10);
        VAR8 = VAR8 > VAR4 - 1 ? VAR4 - 1: VAR8;
         if (VAR20 == 4 || VAR20 == 6)
         {
                if (VAR11 < 3)
                {
                    memcpy(VAR3, VAR6 + VAR10 + VAR7, VAR8);
                    VAR3[VAR8] = 0;
                    VAR11 = 3;
                }
            }
            if (VAR17 == 3 && VAR18 == 1 && VAR19 == 0x409)
            {
                if (VAR11 < 2)
                {
                    unsigned char *VAR21 = VAR6 + VAR10 + VAR7;
                    int VAR22 = VAR8 / 2;
                    for (VAR13 = 0; VAR13 < VAR22; VAR13 ++)
                    {
                        int VAR23 = FUN4(VAR21 + VAR13 * 2);
                        VAR3[VAR13] = FUN5(VAR23) ? VAR23 : VAR24;
                    }
                    VAR3[VAR13] = 0;
                    VAR11 = 2;
                }
            }
            if (VAR17 == 3 && VAR18 == 10 && VAR19 == 0x409)
            {
                if (VAR11 < 1)
                {
                    unsigned char *VAR21 = VAR6 + VAR10 + VAR7;
                    int VAR22 = VAR8 / 4;
                    for (VAR13 = 0; VAR13 < VAR22; VAR13 ++)
                    {
                        int VAR23 = FUN6(VAR21 + VAR13 * 4);
                        VAR3[VAR13] = FUN5(VAR23) ? VAR23 : VAR24;
                    }
                    VAR3[VAR13] = 0;
                    VAR11 = 1;
                }
            }
        }
    }