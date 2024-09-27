void FUN1(
    VAR1        *VAR2,
    const VAR3 *VAR4,
    const char  *VAR5,
    pdf_flag_t   VAR6)
{
    int   VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR1 *VAR12, *VAR13;
    char *VAR14, *VAR15;
    VAR12 = NULL;
    VAR14 = NULL;
     if (VAR5)
     {
        VAR14 = malloc(strlen(VAR5) * 2 + 16);
         sprintf(VAR14, VAR16, VAR5, VAR5);
         if ((VAR15 = strrchr(VAR14, VAR17)) && (strncmp(VAR15, VAR16, 4) == 0))
          *VAR15 = VAR17;
        strcat(VAR14, VAR16);
        if (!(VAR12 = fopen(VAR14, VAR16)))
        {
            FUN2(VAR16, VAR14);
            return;
        }
    }
    VAR13 = (VAR12) ? VAR12 : VAR18;
    VAR10 = VAR4->VAR19;
    if (VAR10 && VAR4->VAR20[0].VAR21)
      --VAR10;
    for (VAR7=1; VAR7<VAR4->VAR19; ++VAR7)
      if (VAR4->VAR20[VAR7].VAR22 == 0)
        --VAR10;
    if (!VAR4->VAR19 || (!VAR10 && VAR4->VAR20[0].VAR21))
      VAR10 = 1;
    VAR11 = 0;
    for (VAR7=0; !(const int)VAR4->VAR23 && VAR7<VAR4->VAR19; VAR7++)
    {
        if (VAR6 & VAR24)
          continue;
        for (VAR8=0; VAR8<VAR4->VAR20[VAR7].VAR11; VAR8++)
        {
            ++VAR11;
            fprintf(VAR13,
                    VAR16,
                    VAR4->VAR5,
                    FUN3(VAR4, VAR7, VAR8),
                    VAR4->VAR20[VAR7].VAR25,
                    VAR4->VAR20[VAR7].VAR26[VAR8].VAR27,
                    FUN4(VAR2, VAR4->VAR20[VAR7].VAR26[VAR8].VAR27,
                             &VAR4->VAR20[VAR7]));
            if (0 )
              fprintf(VAR13, VAR16, VAR9);
            else
              fprintf(VAR13, VAR16);
        }
    }
    if (!(VAR6 & VAR24))
    {
        if (VAR4->VAR23 || !VAR11)
           fprintf(VAR13,
               VAR16
               VAR16,
               VAR4->VAR5,
               VAR4->VAR5);
        fprintf(VAR13,
                VAR16
                VAR16,
                VAR4->VAR5,
                VAR10);
        if (!VAR4->VAR23)
          for (VAR7=0; VAR7<VAR4->VAR19; VAR7++)
          {
              if (VAR4->VAR20[VAR7].VAR21)
                continue;
              VAR11 = VAR4->VAR20[VAR7].VAR11;
              if (VAR4->VAR20[0].VAR21)
                VAR11 += VAR4->VAR20[0].VAR11;
              if (VAR4->VAR20[VAR7].VAR25 && VAR11)
                fprintf(VAR13,
                        VAR16,
                        VAR4->VAR20[VAR7].VAR25,
                        VAR11);
           }
    }
    else
      fprintf(VAR13, VAR16, VAR4->VAR5, VAR10);
    if (VAR12)
    {
        fclose(VAR12);
        free(VAR14);
    }
}