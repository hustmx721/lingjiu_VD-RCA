FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
 {
     static generic_ret              VAR5;
     char                            *VAR6;
    gss_buffer_desc                 VAR7 = VAR8;
    gss_buffer_desc                 VAR9 = VAR8;
     OM_uint32                       VAR10;
     kadm5_server_handle_t           VAR11;
     const char                      *VAR12 = NULL;
    FUN2(VAR13, &VAR5);
    if ((VAR5.VAR14 = FUN3(VAR2->VAR15, VAR4, &VAR11)))
        goto VAR16;
    if ((VAR5.VAR14 = FUN4((void *)VAR11)))
        goto VAR16;
    VAR5.VAR15 = VAR11->VAR15;
    if (FUN5(VAR4, &VAR7, &VAR9) < 0) {
        VAR5.VAR14 = VAR17;
        goto VAR16;
    }
    VAR6 = VAR2->VAR18.VAR19;
    if (FUN6(VAR4) || !FUN7(VAR11->VAR20,
                                                       FUN8(VAR4),
                                                       VAR21, NULL, NULL)) {
        VAR5.VAR14 = VAR22;
        FUN9(VAR23, VAR6,
                   &VAR7, &VAR9, VAR4);
    } else {
        VAR5.VAR14 = FUN10((void *)VAR11, &VAR2->VAR18,
                                       VAR2->VAR24);
        if( VAR5.VAR14 != 0 )
            VAR12 = FUN11(VAR11->VAR20, VAR5.VAR14);
        FUN12(VAR23,
                 ((VAR6 == NULL) ? VAR23 : VAR6), VAR12,
                 &VAR7, &VAR9, VAR4);
         if (VAR12 != NULL)
             FUN13(VAR11->VAR20, VAR12);
     }
VAR16:
     FUN14(&VAR10, &VAR7);
     FUN14(&VAR10, &VAR9);
     FUN15(VAR11);
     return &VAR5;
 }