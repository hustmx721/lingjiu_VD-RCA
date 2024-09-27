 FUN1(VAR1 *VAR2)
 {
   png_byte VAR3 = 0;
    png_byte VAR4 = 0;
    unsigned int VAR5 = 0;
   while (FUN2(&VAR3, &VAR4, &VAR5, VAR2->VAR6,
            VAR2->VAR7))
    {
       png_uint_32 VAR8 = 0;
       size_t VAR9;
 char VAR10[64];
      VAR9 = FUN3(VAR10, sizeof VAR10, 0, VAR11);
       for (;;)
       {
          size_t VAR12 = VAR9;
         const VAR13 *VAR14 = 0;
         VAR8 = FUN4(&VAR14, 1, VAR8,
            VAR10, sizeof VAR10, &VAR12, VAR3, VAR4);
 if (VAR8 == 0)
 break;
 do
 {
            VAR2->VAR15 = 0;
            FUN5(VAR2, FUN6(VAR3, VAR4, VAR5,
               VAR2->VAR16, 0, 0, 0), VAR14, VAR10);
 if (FUN7(VAR2))
 return;
 }
 while (VAR2->VAR15);
 }
 }
}