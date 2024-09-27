FUN1 (VAR1 * VAR2, const VAR3 * VAR4,
     gint VAR5)
 {
   VAR6 *VAR7;
  VAR8 *VAR9;
   gsize VAR10;
   guint VAR11 = 0;
   gint VAR12 = 0;
   if (VAR5 < 2)
     goto VAR13;
  VAR9 = FUN2 (VAR5 * 3 / 4);
  if (VAR9 == NULL)
    goto VAR14;
  VAR10 = FUN3 (VAR4, VAR5, VAR9,
      &VAR12, &VAR11);
   if (VAR10 == 0)
     goto VAR15;
  VAR7 = FUN4 (VAR9, VAR10,
       VAR16);
   if (VAR7 == NULL)
  FUN5 (VAR2, VAR17,
      VAR18, VAR7, NULL);
       VAR18, VAR7, NULL);
   FUN6 (VAR7);
  FUN7 (VAR9);
   return;
  {
    FUN8 (VAR19);
     FUN8 (VAR19);
     return;
   }
VAR14:
  {
    FUN8 (VAR19);
    return;
  }
 VAR15:
   {
    FUN8 (VAR19);
    FUN7 (VAR9);
     return;
   }
 VAR20:
   {
     FUN8 (VAR19);
    FUN7 (VAR9);
     return;
   }
 }