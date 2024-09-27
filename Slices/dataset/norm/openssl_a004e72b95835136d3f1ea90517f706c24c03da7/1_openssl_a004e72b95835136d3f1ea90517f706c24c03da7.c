static int FUN1(VAR1 *VAR2,
                                              const unsigned char *VAR3,
                                              const unsigned char *VAR4,
                                              int *VAR5)
{
    unsigned short VAR6, VAR7, VAR8;
     if (VAR2->VAR9 || VAR2->VAR10->VAR11.VAR12 == 0)
         return 1;
    if (VAR3 >= VAR4 - 2)
         return 1;
     FUN2(VAR3, VAR8);
    if (VAR3 > VAR4 - VAR8)
         return 1;
    while (VAR3 <= VAR4 - 4) {
         FUN2(VAR3, VAR6);
         FUN2(VAR3, VAR7);
        if (VAR3 + VAR7 > VAR4)
             return 1;
         if (FUN3(VAR2, 1  , VAR6, VAR3, VAR7, VAR5) <= 0)
             return 0;
        VAR3 += VAR7;
    }
    return 1;
}