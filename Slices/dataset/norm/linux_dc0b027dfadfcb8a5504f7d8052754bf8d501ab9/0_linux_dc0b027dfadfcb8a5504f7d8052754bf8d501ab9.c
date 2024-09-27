FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, struct VAR4 *VAR5)
{
	struct path VAR6 = {
		.VAR7 = VAR5->VAR6.VAR7,
		.VAR3 = VAR3,
	};
	struct VAR3 *VAR8;
	struct iattr VAR9;
 	struct VAR10 *VAR11;
 	struct VAR12 *VAR13;
 	struct VAR3 *VAR14;
	fmode_t VAR15 = VAR5->VAR16.open.VAR17 & (VAR18 | VAR19 | VAR20);
 	if (VAR5->VAR17 & VAR21) {
 		VAR9.VAR22 = VAR5->VAR16.open.VAR23;
		VAR9.VAR24 = VAR25;
		if (!FUN2(VAR2))
			VAR9.VAR22 &= ~VAR26->VAR27->VAR28;
	} else {
		VAR9.VAR24 = 0;
		FUN3(VAR5->VAR16.open.VAR17 & VAR29);
	}
	VAR11 = FUN4();
	if (FUN5(VAR11))
		return (struct VAR3 *)VAR11;
 	VAR8 = VAR3->VAR30;
 	FUN6(VAR8);
	VAR13 = FUN7(VAR2, &VAR6, VAR15, VAR5->VAR16.open.VAR17, &VAR9, VAR11);
 	FUN8(VAR11);
 	if (FUN5(VAR13)) {
 		if (FUN9(VAR13) == -VAR31) {
			FUN10(VAR3, NULL);
			FUN11(VAR3, FUN12(VAR2));
		}
		FUN13(VAR8);
		return (struct VAR3 *)VAR13;
	}
	VAR14 = FUN14(VAR3, FUN15(VAR13->VAR1));
	if (VAR14 != NULL)
 		VAR6.VAR3 = VAR14;
 	FUN11(VAR6.VAR3, FUN12(VAR2));
 	FUN13(VAR8);
	FUN16(VAR5, &VAR6, VAR13, VAR15);
 	return VAR14;
 }