FUN1(VAR1* PNG_CONST VAR2, png_byte PNG_CONST VAR3,
FUN1(VAR1* const VAR2, png_byte const VAR3,
    png_byte const VAR4, int const VAR5,
    png_uint_32 const VAR6, png_uint_32 const VAR7,
    int const VAR8)
 {
    FUN2(VAR2, VAR9);
    FUN3(VAR5);
    VAR10
 {
      png_infop VAR11;
      png_structp VAR12;
 unsigned int VAR13;
       char VAR14[VAR15];
      const png_uint_32 VAR16 = FUN4(VAR3, VAR4, 0,
          VAR5, VAR6, VAR7, VAR8);
       FUN5(VAR14, sizeof VAR14, 0, VAR16);
      VAR12 = FUN6(VAR2, &VAR11, VAR14);
 if (VAR12 == NULL)
 Throw VAR2;
      FUN7(VAR12, VAR11, VAR6, VAR7, VAR4, VAR3, VAR5,
         VAR17, VAR18);
#ifdef VAR19
 {
 static char VAR20[] = VAR21;
 size_t VAR22;
         png_text VAR23;
 char copy[VAR15];
         VAR23.VAR24 = VAR25;
         VAR23.VAR20 = VAR20;
         VAR22 = FUN8(copy, sizeof copy, 0, VAR2->VAR26);
         VAR23.VAR23 = copy;
         VAR23.VAR27 = VAR22;
         VAR23.VAR28 = 0;
         VAR23.VAR29 = 0;
         VAR23.VAR30 = 0;
         FUN9(VAR12, VAR11, &VAR23, 1);
 }
#VAR31
 if (VAR3 == 3)
         FUN10(VAR2, VAR12, VAR11, 1U << VAR4, 0);
      png_write_info(VAR12, VAR11);
       VAR13 = FUN11(VAR12, VAR3, VAR4);
       if (FUN12(VAR12, VAR11) != ((VAR6 * VAR13) + 7) / 8)
         FUN13(VAR12, VAR21);
       else
       {
 int VAR32 = FUN14(VAR12, VAR5);
         png_uint_32 VAR33;
 int VAR34;
#        ifdef VAR35
 int VAR36 = VAR37;
#        VAR31
         png_byte VAR38[16][VAR39];
          memset(VAR38, 0xff, sizeof VAR38);
         if (!VAR8 &&
             VAR32 != FUN15(VAR12, VAR5))
             FUN13(VAR12, VAR21);
 for (VAR33=0; VAR33<VAR7; ++VAR33)
            FUN16(VAR38[VAR33], VAR6 * VAR13, VAR33);
          for (VAR34=0; VAR34<VAR32; ++VAR34)
          {
            const png_uint_32 VAR40 = FUN17(VAR6, VAR34);
 for (VAR33=0; VAR33<VAR7; ++VAR33)
 {
               png_const_bytep VAR41 = VAR38[VAR33];
               png_byte VAR42[VAR39];
 if (VAR8 && VAR5 == VAR43)
 {
 if (FUN18(VAR33, VAR34) && VAR40 > 0)
 {
                      memset(VAR42, 0xff, sizeof VAR42);
                     FUN19(VAR42, VAR41, VAR13, VAR6, VAR34,
                           0);
                      VAR41 = VAR42;
                   }
                   else
 continue;
 }
#           ifdef VAR35
               FUN20(VAR12, 0,
                  VAR36 >= VAR37 ? VAR44 : VAR36);
 if (VAR36-- == 0)
                  VAR36 = VAR37-1;
#           VAR31
               FUN21(VAR12, VAR41);
 }
 }
 }
#ifdef VAR19
 {
 static char VAR20[] = VAR21;
 static char VAR45[] = VAR21;
         png_text VAR23;
         VAR23.VAR24 = VAR25;
         VAR23.VAR20 = VAR20;
         VAR23.VAR23 = VAR45;
         VAR23.VAR27 = (sizeof VAR45)-1;
         VAR23.VAR28 = 0;
         VAR23.VAR29 = 0;
         VAR23.VAR30 = 0;
         FUN9(VAR12, VAR11, &VAR23, 1);
 }
#VAR31
      png_write_end(VAR12, VAR11);
      FUN22(VAR2, VAR16);
      FUN23(VAR2);
 }
 FUN24(VAR9)
 {
      FUN23(VAR9);
 }
 }