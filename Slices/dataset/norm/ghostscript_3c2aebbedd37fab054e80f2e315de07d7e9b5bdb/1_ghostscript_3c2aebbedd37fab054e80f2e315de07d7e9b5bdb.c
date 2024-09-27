FUN1(VAR1 *VAR2, char *VAR3)
 {
     VAR4 *VAR5;
     int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10;
    int VAR11, VAR12;
    VAR10 = 0;
    strcpy(VAR3, VAR13);
    VAR6 = FUN2(VAR2, VAR13, &VAR7);
    if (VAR6 < 0 || VAR7 < 6)
    {
        FUN3(VAR13);
        return;
    }
    if (VAR6 + 6 > VAR2->VAR7)
    {
        FUN3(VAR13);
        return;
    }
    VAR5 = VAR2->VAR14 + VAR6;
    VAR8 = FUN4(VAR5 + 2);
    VAR9 = FUN4(VAR5 + 4);
    if (VAR9 + VAR6 > VAR2->VAR7
        || VAR6 + 6 + VAR8 * 12 > VAR2->VAR7)
    {
        FUN3(VAR13);
        return;
    }
    if (VAR7 < 6 + (VAR8 * 12))
    {
        FUN3(VAR13);
        return;
    }
    for (VAR11 = 0; VAR11 < VAR8; VAR11++)
    {
        VAR4 *VAR15 = VAR5 + 6 + VAR11 * 12;
        int VAR16 = FUN4(VAR15 + 0);
        int VAR17 = FUN4(VAR15 + 2);
        int VAR18 = FUN4(VAR15 + 4);
        int VAR19 = FUN4(VAR15 + 6);
         VAR7 = FUN4(VAR15 + 8);
         VAR6 = FUN4(VAR15 + 10);
         if (VAR19 == 4 || VAR19 == 6)
         {
                if (VAR10 < 3)
                {
                    memcpy(VAR3, VAR5 + VAR9 + VAR6, VAR7);
                    VAR3[VAR7] = 0;
                    VAR10 = 3;
                }
            }
            if (VAR16 == 3 && VAR17 == 1 && VAR18 == 0x409)
            {
                if (VAR10 < 2)
                {
                    unsigned char *VAR20 = VAR5 + VAR9 + VAR6;
                    int VAR21 = VAR7 / 2;
                    for (VAR12 = 0; VAR12 < VAR21; VAR12 ++)
                    {
                        int VAR22 = FUN4(VAR20 + VAR12 * 2);
                        VAR3[VAR12] = FUN5(VAR22) ? VAR22 : VAR23;
                    }
                    VAR3[VAR12] = 0;
                    VAR10 = 2;
                }
            }
            if (VAR16 == 3 && VAR17 == 10 && VAR18 == 0x409)
            {
                if (VAR10 < 1)
                {
                    unsigned char *VAR20 = VAR5 + VAR9 + VAR6;
                    int VAR21 = VAR7 / 4;
                    for (VAR12 = 0; VAR12 < VAR21; VAR12 ++)
                    {
                        int VAR22 = FUN6(VAR20 + VAR12 * 4);
                        VAR3[VAR12] = FUN5(VAR22) ? VAR22 : VAR23;
                    }
                    VAR3[VAR12] = 0;
                    VAR10 = 1;
                }
            }
        }
    }