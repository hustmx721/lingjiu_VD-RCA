 FUN1(png_structp VAR1, png_bytep VAR2, png_bytep VAR3)
 {
#ifndef VAR4
    PNG_CONST VAR5;
    PNG_CONST int VAR6[7] = {0xff, 0x0f, 0xff, 0x33, 0xff, 0x55,
       0xff};
    PNG_CONST int VAR7[7] = {0x80, 0x08, 0x88, 0x22, 0xaa, 0x55, 0xff};
#VAR8
    int VAR9;
    if (VAR1 == NULL)
      return;
   FUN2(1, VAR10,
      VAR1->VAR11, VAR1->VAR12);
   if (!(VAR1->VAR13 & VAR14))
      FUN3(VAR1);
   if (VAR1->VAR11 == 0 && VAR1->VAR12 == 0)
   {
#if FUN4(VAR15) && !FUN4(VAR16)
   if (VAR1->VAR17 & VAR18)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR19) && !FUN4(VAR20)
   if (VAR1->VAR17 & VAR21)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR22) && \
    !FUN4(VAR23)
   if (VAR1->VAR17 & VAR24)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR25) && !FUN4(VAR26)
   if (VAR1->VAR17 & VAR27)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR28) && !FUN4(VAR29)
   if (VAR1->VAR17 & VAR30)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR31) && !FUN4(VAR32)
   if (VAR1->VAR17 & VAR33)
      FUN5(VAR1, VAR10);
#VAR8
#if FUN4(VAR34) && !FUN4(VAR35)
   if (VAR1->VAR17 & VAR36)
      FUN5(VAR1, VAR10);
#VAR8
   }
#ifdef VAR37
   if (VAR1->VAR38 && (VAR1->VAR17 & VAR39))
   {
      switch (VAR1->VAR12)
      {
         case 0:
            if (VAR1->VAR11 & 0x07)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 1:
            if ((VAR1->VAR11 & 0x07) || VAR1->VAR40 < 5)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 2:
            if ((VAR1->VAR11 & 0x07) != 4)
            {
               if (VAR3 != NULL && (VAR1->VAR11 & 4))
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 3:
            if ((VAR1->VAR11 & 3) || VAR1->VAR40 < 3)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 4:
            if ((VAR1->VAR11 & 3) != 2)
            {
               if (VAR3 != NULL && (VAR1->VAR11 & 2))
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 5:
            if ((VAR1->VAR11 & 1) || VAR1->VAR40 < 2)
            {
               if (VAR3 != NULL)
                  FUN6(VAR1, VAR3,
                     VAR6[VAR1->VAR12]);
               FUN7(VAR1);
               return;
            }
            break;
         case 6:
            if (!(VAR1->VAR11 & 1))
            {
               FUN7(VAR1);
               return;
            }
            break;
      }
   }
#VAR8
   if (!(VAR1->VAR41 & VAR42))
      FUN8(VAR1, VAR10);
   VAR1->VAR43.VAR44 = VAR1->VAR45;
   VAR1->VAR43.VAR46 =
       (VAR47)(FUN9(VAR1->VAR48,
       VAR1->VAR49) + 1);
   do
   {
      if (!(VAR1->VAR43.VAR50))
      {
         while (!VAR1->VAR51)
         {
            FUN10(VAR1, 0);
            VAR1->VAR51 = FUN11(VAR1);
            if (FUN12(VAR1->VAR52, VAR53, 4))
               FUN8(VAR1, VAR10);
         }
         VAR1->VAR43.VAR50 = (VAR47)VAR1->VAR54;
         VAR1->VAR43.VAR55 = VAR1->VAR56;
         if (VAR1->VAR54 > VAR1->VAR51)
            VAR1->VAR43.VAR50 = (VAR47)VAR1->VAR51;
         FUN13(VAR1, VAR1->VAR56,
            (VAR57)VAR1->VAR43.VAR50);
         VAR1->VAR51 -= VAR1->VAR43.VAR50;
      }
      VAR9 = inflate(&VAR1->VAR43, VAR58);
      if (VAR9 == VAR59)
      {
         if (VAR1->VAR43.VAR46 || VAR1->VAR43.VAR50 ||
            VAR1->VAR51)
            FUN8(VAR1, VAR10);
         VAR1->VAR41 |= VAR60;
         VAR1->VAR13 |= VAR61;
         break;
      }
      if (VAR9 != VAR62)
         FUN8(VAR1, VAR1->VAR43.VAR63 ? VAR1->VAR43.VAR63 :
                   VAR10);
   } while (VAR1->VAR43.VAR46);
   VAR1->VAR64.VAR65 = VAR1->VAR65;
   VAR1->VAR64.VAR40 = VAR1->VAR49;
   VAR1->VAR64.VAR66 = VAR1->VAR66;
   VAR1->VAR64.VAR67 = VAR1->VAR67;
   VAR1->VAR64.VAR48 = VAR1->VAR48;
   VAR1->VAR64.VAR68 = FUN9(VAR1->VAR64.VAR48,
       VAR1->VAR64.VAR40);
   if (VAR1->VAR45[0])
   FUN14(VAR1, &(VAR1->VAR64),
      VAR1->VAR45 + 1, VAR1->VAR69 + 1,
      (int)(VAR1->VAR45[0]));
   FUN15(VAR1, VAR1->VAR69, VAR1->VAR45,
      VAR1->VAR68 + 1);
#ifdef VAR70
   if ((VAR1->VAR71 & VAR72) &&
      (VAR1->VAR73 == VAR74))
   {
      FUN16(&(VAR1->VAR64), VAR1->VAR45 + 1);
   }
#VAR8
   if (VAR1->VAR17 || (VAR1->VAR13&VAR75))
      FUN17(VAR1);
#ifdef VAR37
   if (VAR1->VAR38 &&
      (VAR1->VAR17 & VAR39))
   {
      if (VAR1->VAR12 < 6)
         FUN18(VAR1);
      if (VAR3 != NULL)
         FUN6(VAR1, VAR3,
            VAR6[VAR1->VAR12]);
      if (VAR2 != NULL)
         FUN6(VAR1, VAR2,
            VAR7[VAR1->VAR12]);
   }
   else
#VAR8
   {
      if (VAR2 != NULL)
         FUN6(VAR1, VAR2, 0xff);
      if (VAR3 != NULL)
         FUN6(VAR1, VAR3, 0xff);
   }
   FUN7(VAR1);
   if (VAR1->VAR76 != NULL)
      (*(VAR1->VAR76))(VAR1, VAR1->VAR11, VAR1->VAR12);
}