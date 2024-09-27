FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
 {
     static generic_ret              VAR5;
     char                            *VAR6;
    gss_buffer_desc                 VAR7,
        VAR8;
     OM_uint32                       VAR9;
     kadm5_server_handle_t           VAR10;
     const char                      *VAR11 = NULL;
    FUN2(VAR12, &VAR5);
    if ((VAR5.VAR13 = FUN3(VAR2->VAR14, VAR4, &VAR10)))
        goto VAR15;
    if ((VAR5.VAR13 = FUN4((void *)VAR10)))
        goto VAR15;
    VAR5.VAR14 = VAR10->VAR14;
    if (FUN5(VAR4, &VAR7, &VAR8) < 0) {
        VAR5.VAR13 = VAR16;
        goto VAR15;
    }
    VAR6 = VAR2->VAR17.VAR18;
    if (FUN6(VAR4) || !FUN7(VAR10->VAR19,
                                                       FUN8(VAR4),
                                                       VAR20, NULL, NULL)) {
        VAR5.VAR13 = VAR21;
        FUN9(VAR22, VAR6,
                   &VAR7, &VAR8, VAR4);
    } else {
        VAR5.VAR13 = FUN10((void *)VAR10, &VAR2->VAR17,
                                       VAR2->VAR23);
        if( VAR5.VAR13 != 0 )
            VAR11 = FUN11(VAR10->VAR19, VAR5.VAR13);
        FUN12(VAR22,
                 ((VAR6 == NULL) ? VAR22 : VAR6), VAR11,
                 &VAR7, &VAR8, VAR4);
         if (VAR11 != NULL)
             FUN13(VAR10->VAR19, VAR11);
     }
     FUN14(&VAR9, &VAR7);
     FUN14(&VAR9, &VAR8);
VAR15:
     FUN15(VAR10);
     return &VAR5;
 }