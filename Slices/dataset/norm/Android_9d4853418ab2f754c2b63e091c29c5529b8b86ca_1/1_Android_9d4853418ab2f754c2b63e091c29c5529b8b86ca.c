 FUN1(VAR1 *VAR2)
 {
   png_byte VAR3 = 0;
    png_byte VAR4 = 0;
    unsigned int VAR5 = 0;
   while (FUN2(&VAR3, &VAR4, &VAR5, 0))
    {
       png_uint_32 VAR6 = 0;
       size_t VAR7;
 char VAR8[64];
      VAR7 = FUN3(VAR8, sizeof VAR8, 0, VAR9);
       for (;;)
       {
          size_t VAR10 = VAR7;
         PNG_CONST VAR11 *VAR12 = 0;
         VAR6 = FUN4(&VAR12, 1, VAR6,
            VAR8, sizeof VAR8, &VAR10, VAR3, VAR4);
 if (VAR6 == 0)
 break;
 do
 {
            VAR2->VAR13 = 0;
            FUN5(VAR2, FUN6(VAR3, VAR4, VAR5,
               VAR2->VAR14, 0, 0, 0), VAR12, VAR8);
 if (FUN7(VAR2))
 return;
 }
 while (VAR2->VAR13);
 }
 }
}