void FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    EAS_I32 VAR7;
    EAS_I32 VAR8;
    EAS_I32 VAR9;
 const VAR10 *VAR11;
 const VAR10 *VAR12;
    EAS_I32 VAR13;
    EAS_I32 VAR14;
    EAS_I32 VAR15;
     VAR15 = VAR4->VAR15;
     VAR6 = VAR4->VAR16;
     VAR12 = (const VAR10*) VAR2->VAR12 + 1;
    VAR11 = (const VAR10*) VAR2->VAR17;
    VAR8 = VAR2->VAR8;
    VAR7 = VAR4->VAR18.VAR19;
#if FUN2(VAR20)
    VAR13 = VAR11[0] << 8;
    VAR14 = VAR11[1] << 8;
#else
    VAR13 = VAR11[0];
    VAR14 = VAR11[1];
#VAR21
 while (VAR15--) {
        VAR9 = VAR14 - VAR13;
        VAR9 = VAR9 * VAR8;
        VAR9 = VAR13 + (VAR9 >> VAR22);
 *VAR6++ = (VAR23)(VAR9 >> 2);
        VAR8 += VAR7;
        VAR9 = VAR8 >> VAR22;
 if (VAR9 > 0) {
            VAR11 += VAR9;
            VAR8 = (VAR24)((VAR25)VAR8 & VAR26);
            VAR9 = (VAR24) (VAR11 - VAR12);
 if (VAR9 >= 0)
                VAR11 = (const VAR10*) VAR2->VAR27 + VAR9;
#if FUN2(VAR20)
            VAR13 = VAR11[0] << 8;
            VAR14 = VAR11[1] << 8;
#else
            VAR13 = VAR11[0];
            VAR14 = VAR11[1];
#VAR21
 }
 }
    VAR2->VAR17 = (VAR25) VAR11;
    VAR2->VAR8 = (VAR25) VAR8;
}