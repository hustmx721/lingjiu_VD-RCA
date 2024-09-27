 int main(int argc, char **argv)
 {
     int         VAR1, VAR2, VAR3, VAR4;
    char       *VAR5, *VAR6, *VAR7;
    VAR8        *VAR9;
    VAR10       *VAR11;
    VAR12      *VAR13;
    pdf_flag_t  VAR14;
    if (argc < 2)
      FUN1();
    VAR3 = VAR4 = VAR14 = 0;
    VAR7 = NULL;
    for (VAR1=1; VAR1<argc; VAR1++)
    {
        if (strncmp(argv[VAR1], VAR15, 2) == 0)
          VAR3 = 1;
        else if (strncmp(argv[VAR1], VAR15, 2) == 0)
          VAR14 |= VAR16;
        else if (strncmp(argv[VAR1], VAR15, 2) == 0)
          VAR14 |= VAR17;
        else if (strncmp(argv[VAR1], VAR15, 2) == 0)
          VAR4 = 1;
        else if (argv[VAR1][0] != VAR18)
          VAR7 = argv[VAR1];
        else if (argv[VAR1][0] == VAR18)
          FUN1();
    }
    if (!VAR7)
      FUN1();
    if (!(VAR11 = fopen(VAR7, VAR15)))
    {
        FUN2(VAR15, argv[1]);
        return -1;
    }
    else if (!FUN3(VAR11))
    {
        FUN2(VAR15, VAR7);
        fclose(VAR11);
        return -1;
    }
    if (!(VAR13 = FUN4(VAR11, VAR7)))
    {
        fclose(VAR11);
        return -1;
    }
    for (VAR1=0, VAR2=0; VAR1<VAR13->VAR19; VAR1++)
      if (VAR13->VAR20[VAR1].VAR21)
        ++VAR2;
    if (VAR2 < 2)
    {
        if (!(VAR14 & (VAR17 | VAR16)))
          printf(VAR15, VAR13->VAR7);
        if (VAR3)
        {
            fclose(VAR11);
            FUN5(VAR13);
            return 0;
        }
    }
    VAR6 = NULL;
    if (VAR3)
    {
        if ((VAR5 = strrchr(VAR7, VAR18)))
          VAR7 = VAR5 + 1;
         if ((VAR5 = strrchr(VAR7, VAR18)))
           *VAR5 = VAR18;
        VAR6 = malloc(strlen(VAR7) + 16);
         sprintf(VAR6, VAR15, VAR7);
         if (!(VAR9 = opendir(VAR6)))
           mkdir(VAR6, VAR22);
        else
        {
            FUN2(VAR15
                VAR15);
            fclose(VAR11);
            closedir(VAR9);
            free(VAR6);
            FUN5(VAR13);
            return -1;
        }
        for (VAR1=0; VAR1<VAR13->VAR19; VAR1++)
          if (VAR13->VAR20[VAR1].VAR21)
            FUN6(VAR11, VAR7, VAR6, &VAR13->VAR20[VAR1]);
    }
    FUN7(VAR11, VAR13, VAR6, VAR14);
    if (VAR4)
      FUN8(VAR11, VAR13);
    if (VAR14 & VAR16)
      FUN9(VAR11, VAR13);
    fclose(VAR11);
    free(VAR6);
    FUN5(VAR13);
    return 0;
}