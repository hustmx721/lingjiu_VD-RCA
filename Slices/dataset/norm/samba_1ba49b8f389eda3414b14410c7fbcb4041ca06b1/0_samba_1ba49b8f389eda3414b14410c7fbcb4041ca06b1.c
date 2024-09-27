FUN1(VAR1 *VAR2,
            VAR3 *VAR4,
            bool VAR5,
            const char *VAR6,
            uint16_t VAR7,
            const char *VAR8,
            char **VAR9,
            char **VAR10,
            char **VAR11,
	    bool *VAR12)
{
	VAR13 *VAR14=NULL;
	char *VAR15 = NULL;
	struct VAR16 *VAR17 = NULL;
	const char *VAR18 = VAR6;
        int VAR19 = (VAR8 != NULL && strcmp(VAR8, VAR20) == 0);
	uint32_t VAR21 = 0;
        const char *VAR22;
 	NTSTATUS VAR23;
        char *VAR24, *VAR25;
        int VAR26 = 0;
        struct VAR27 *VAR28 = NULL;
       int VAR29 = VAR30;
        FUN2(VAR17);
        *VAR12 = false;
	if (VAR6[0] == 0) {
		VAR31 = VAR32;
		return NULL;
	}
        VAR14 = FUN3(VAR2, VAR4, VAR6, VAR8,
                               VAR9, VAR10, VAR11);
        if (VAR14 &&
	    VAR8 != NULL && *VAR8 != VAR33 &&
            FUN4(VAR4)) {
                if (!FUN5(VAR14->VAR34)) {
			FUN6(VAR2, VAR4,
					  FUN7(VAR14->VAR34->VAR35),
					  VAR14->VAR34->VAR8,
                                          VAR9,
                                          VAR10,
                                          VAR11);
			if (!*VAR9 || !*VAR10 || !*VAR11) {
				VAR31 = VAR36;
				FUN8(VAR14->VAR34);
				VAR14->VAR34 = NULL;
				FUN9(VAR4)(VAR4,
                                                                            VAR14);
				return NULL;
			}
			VAR23 = FUN10(VAR14->VAR34,
						  VAR14->VAR34->VAR8,
						  VAR20,
						  *VAR11,
						  strlen(*VAR11)+1);
			if (!FUN11(VAR23)) {
                                VAR31 = FUN12(VAR23);
                                FUN8(VAR14->VAR34);
				VAR14->VAR34 = NULL;
                                FUN9(VAR4)(VAR4,
                                                                            VAR14);
                                VAR14 = NULL;
                        }
                        if (VAR19) {
                                FUN13(4,
                                      (VAR20));
                                VAR23 = VAR37;
                        } else {
                                VAR23 = FUN14(VAR17, &VAR21);
                        }
                        if (!FUN11(VAR23)) {
                                FUN13(4, (VAR20
                                          VAR20,
                                          FUN15(VAR23)));
                                if (FUN16(VAR4)) {
                                        FUN17(VAR17, VAR38);
                                } else {
                                        FUN17(VAR17, VAR39);
                                }
                        } else if (!VAR19) {
                                FUN13(4,
                                      (VAR20,
                                       (VAR21 & VAR40
                                        ? VAR20
                                        : VAR20)));
                                FUN17(
                                        VAR17,
                                        (VAR21 & VAR40
                                         ? VAR38
                                         : VAR39));
                        }
                        if (VAR14) {
				const char *VAR41 =
					FUN7(VAR14->VAR34->VAR35);
				VAR14->VAR42 = (VAR43)(FUN18(VAR41) ^
                                                   FUN18(VAR14->VAR34->VAR8));
                        }
                }
        }
        if (VAR14) {
		*VAR12 = true;
                goto VAR44;
        }
        if (! VAR5) {
                return NULL;
        }
	if (!*VAR9 || !*VAR10 || !*VAR11) {
		VAR31 = VAR36;
		return NULL;
	}
	FUN13(4,(VAR20, VAR18, VAR6));
	FUN13(4,(VAR20, VAR18, VAR6));
	VAR23 = VAR45;
	if (FUN19(VAR4)) {
		VAR26 |= VAR46;
	}
	if (FUN20(VAR4)) {
		VAR26 |= VAR47;
	}
	if (FUN21(VAR4)) {
		VAR26 |= VAR48;
	}
	if (FUN22(VAR4)) {
		VAR26 |= VAR49;
                VAR26 |= VAR49;
        }
       if (VAR4->VAR50->VAR51 != VAR52) {
               VAR29 = VAR53;
       }
        if (VAR7 == 0) {
                if (VAR8 == NULL || *VAR8 == VAR33 || VAR19) {
                        VAR23 = FUN23(VAR18, NULL, VAR54, 0x20,
                                        FUN24(VAR4),
                                       VAR29, VAR26, &VAR17);
                }
        }