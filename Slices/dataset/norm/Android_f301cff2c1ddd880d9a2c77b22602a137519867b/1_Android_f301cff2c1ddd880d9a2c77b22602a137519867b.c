VAR1 FUN1(VAR2 *VAR3)
{
 VAR4 *VAR5;
    VAR5 = &VAR3->VAR6;
    UWORD16 VAR7;
    UWORD16 VAR8;
 if (FUN2(VAR5,VAR9) != VAR10)
 {
        FUN3(VAR5,VAR9);
 return VAR11;
 }
    FUN3(VAR5,VAR9);
    VAR8    = FUN4(VAR5,12);
    VAR7   = FUN4(VAR5,12);
 if ((VAR8 != VAR3->VAR12)
 || (VAR7 != VAR3->VAR13))
 {
 if (0 == VAR3->VAR14)
 {
            VAR3->VAR12 = VAR8;
            VAR3->VAR13 = VAR7;
 if (0 == VAR3->VAR15)
 {
                VAR3->VAR15  = (VAR16) FUN5(VAR8);
 }
 }
 else
 {
 if((VAR8 > VAR3->VAR17)
 || (VAR7 > VAR3->VAR18))
 {
                IMPEG2D_ERROR_CODES_T VAR19 = VAR20;
                VAR3->VAR21   = VAR7;
                VAR3->VAR22    = VAR8;
 return VAR19;
 }
 else
 {
 return (VAR1)VAR23;
 }
 }
 }
 if((VAR3->VAR12 > VAR3->VAR17)
 || (VAR3->VAR13 > VAR3->VAR18))
 {
        IMPEG2D_ERROR_CODES_T VAR19 = VAR20;
 return FUN6(VAR19);
 }
    VAR3->VAR24 = FUN4(VAR5,4);
     VAR3->VAR25 = FUN4(VAR5,4);
    FUN3(VAR5,18);
    FUN7(VAR3,VAR5);
    FUN3(VAR5,11);
 if(FUN8(VAR5) == 1)
 {
        UWORD16 VAR26;
 for(VAR26 = 0; VAR26 < VAR27; VAR26++)
 {
            VAR3->VAR28[VAR29[VAR26]] = (VAR30)FUN4(VAR5,8);
 }
 }
 else
 {
        memcpy(VAR3->VAR28,VAR31,
                VAR27);
 }
 if(FUN8(VAR5) == 1)
 {
        UWORD16 VAR26;
 for(VAR26 = 0; VAR26 < VAR27; VAR26++)
 {
            VAR3->VAR32[VAR29[VAR26]] = (VAR30)FUN4(VAR5,8);
 }
 }
 else
 {
        memcpy(VAR3->VAR32,VAR33,
            VAR27);
 }
    FUN9(VAR3);
 return (VAR1)VAR34;
}