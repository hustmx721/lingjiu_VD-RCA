 FUN1(png_structp VAR1, png_bytep VAR2, png_bytep VAR3)
 {
    PNG_CONST VAR4;
    PNG_CONST int VAR5[7] = {0xff, 0x0f, 0xff, 0x33, 0xff, 0x55,
       0xff};
    PNG_CONST int VAR6[7] = {0x80, 0x08, 0x88, 0x22, 0xaa, 0x55, 0xff};
    int VAR7;
    if (VAR1 == NULL)
      return;
   FUN2(1, VAR8,
      VAR1->VAR9, VAR1->VAR10);
   if (!(VAR1->VAR11 & VAR12))
      FUN3(VAR1);
   if (VAR1->VAR9 == 0 && VAR1->VAR10 == 0)
   {
#if FUN4(VAR13) && !FUN4(VAR14)
   if (VAR1->VAR15 & VAR16)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR18) && !FUN4(VAR19)
   if (VAR1->VAR15 & VAR20)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR21) && \
    !FUN4(VAR22)
   if (VAR1->VAR15 & VAR23)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR24) && !FUN4(VAR25)
   if (VAR1->VAR15 & VAR26)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR27) && !FUN4(VAR28)
   if (VAR1->VAR15 & VAR29)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR30) && !FUN4(VAR31)
   if (VAR1->VAR15 & VAR32)
      FUN5(VAR1, VAR8);
#VAR17
#if FUN4(VAR33) && !FUN4(VAR34)
   if (VAR1->VAR15 & VAR35)
      FUN5(VAR1, VAR8);
#VAR17
   }
#ifdef VAR36
   if (VAR1->VAR37 && (VAR1->VAR15 & VAR38))
   {
      switch (VAR1->VAR10)
      {
         case 0:
            if (VAR1->VAR9 & 0x07)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 1:
            if ((VAR1->VAR9 & 0x07) || VAR1->VAR39 < 5)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 2:
            if ((VAR1->VAR9 & 0x07) != 4)
            {
               if (VAR3 != NULL && (VAR1->VAR9 & 4))
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 3:
            if ((VAR1->VAR9 & 3) || VAR1->VAR39 < 3)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 4:
            if ((VAR1->VAR9 & 3) != 2)
            {
               if (VAR3 != NULL && (VAR1->VAR9 & 2))
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 5:
            if ((VAR1->VAR9 & 1) || VAR1->VAR39 < 2)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR5[VAR1->VAR10]);
               FUN7(VAR1);
               return;
            }
            break;
         case 6:
            if (!(VAR1->VAR9 & 1))
            {
               FUN7(VAR1);
               return;
            }
            break;
      }
   }
#VAR17
   if (!(VAR1->VAR40 & VAR41))
      FUN8(VAR1, VAR8);
   VAR1->VAR42.VAR43 = VAR1->VAR44;
   VAR1->VAR42.VAR45 =
       (VAR46)(FUN9(VAR1->VAR47,
       VAR1->VAR48) + 1);
   do
   {
      if (!(VAR1->VAR42.VAR49))
      {
         while (!VAR1->VAR50)
         {
            FUN10(VAR1, 0);
            VAR1->VAR50 = FUN11(VAR1);
            if (FUN12(VAR1->VAR51, VAR52, 4))
               FUN8(VAR1, VAR8);
         }
         VAR1->VAR42.VAR49 = (VAR46)VAR1->VAR53;
         VAR1->VAR42.VAR54 = VAR1->VAR55;
         if (VAR1->VAR53 > VAR1->VAR50)
            VAR1->VAR42.VAR49 = (VAR46)VAR1->VAR50;
         FUN13(VAR1, VAR1->VAR55,
            (VAR56)VAR1->VAR42.VAR49);
         VAR1->VAR50 -= VAR1->VAR42.VAR49;
      }
      VAR7 = inflate(&VAR1->VAR42, VAR57);
      if (VAR7 == VAR58)
      {
         if (VAR1->VAR42.VAR45 || VAR1->VAR42.VAR49 ||
            VAR1->VAR50)
            FUN8(VAR1, VAR8);
         VAR1->VAR40 |= VAR59;
         VAR1->VAR11 |= VAR60;
         break;
      }
      if (VAR7 != VAR61)
         FUN8(VAR1, VAR1->VAR42.VAR62 ? VAR1->VAR42.VAR62 :
                   VAR8);
   } while (VAR1->VAR42.VAR45);
   VAR1->VAR63.VAR64 = VAR1->VAR64;
   VAR1->VAR63.VAR39 = VAR1->VAR48;
   VAR1->VAR63.VAR65 = VAR1->VAR65;
   VAR1->VAR63.VAR66 = VAR1->VAR66;
   VAR1->VAR63.VAR47 = VAR1->VAR47;
   VAR1->VAR63.VAR67 = FUN9(VAR1->VAR63.VAR47,
       VAR1->VAR63.VAR39);
   if (VAR1->VAR44[0])
   FUN14(VAR1, &(VAR1->VAR63),
      VAR1->VAR44 + 1, VAR1->VAR68 + 1,
      (int)(VAR1->VAR44[0]));
   FUN15(VAR1, VAR1->VAR68, VAR1->VAR44,
      VAR1->VAR67 + 1);
#ifdef VAR69
   if ((VAR1->VAR70 & VAR71) &&
      (VAR1->VAR72 == VAR73))
   {
      FUN16(&(VAR1->VAR63), VAR1->VAR44 + 1);
   }
#VAR17
   if (VAR1->VAR15 || (VAR1->VAR11&VAR74))
      FUN17(VAR1);
#ifdef VAR36
   if (VAR1->VAR37 &&
      (VAR1->VAR15 & VAR38))
   {
      if (VAR1->VAR10 < 6)
         FUN18(VAR1);
      if (VAR3 != NULL)
         FUN6(VAR1, VAR3,
            VAR5[VAR1->VAR10]);
      if (VAR2 != NULL)
         FUN6(VAR1, VAR2,
            VAR6[VAR1->VAR10]);
   }
   else
#VAR17
   {
      if (VAR2 != NULL)
         FUN6(VAR1, VAR2, 0xff);
      if (VAR3 != NULL)
         FUN6(VAR1, VAR3, 0xff);
   }
   FUN7(VAR1);
   if (VAR1->VAR75 != NULL)
      (*(VAR1->VAR75))(VAR1, VAR1->VAR9, VAR1->VAR10);
}