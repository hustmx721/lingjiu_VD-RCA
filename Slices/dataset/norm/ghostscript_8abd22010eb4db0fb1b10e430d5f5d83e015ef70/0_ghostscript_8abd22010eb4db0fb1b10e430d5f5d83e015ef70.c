FUN1(gs_file_path_ptr  VAR1, const VAR2 *VAR3, VAR4 *VAR5,
                       const char *VAR6, uint VAR7, char *VAR8, int VAR9, VAR10 *VAR11, VAR12 *VAR13)
{
    bool VAR14 = (VAR5 == NULL) ? true : VAR5->VAR14;
    bool VAR15 = false;
    bool VAR16 = false;
    char VAR17[2] = { VAR18, 0};
    VAR19 *VAR20 = FUN2(VAR3);
     VAR21 *VAR22 = FUN3(VAR3);
     int VAR23;
    if (VAR5 && VAR14)
        VAR5->VAR14 = false;
     if (VAR20 == 0)
         VAR20 = (VAR19 *)VAR24[0];
       VAR16 = false;
    } else {
       VAR15 = VAR14;
       VAR16 = true;
    }