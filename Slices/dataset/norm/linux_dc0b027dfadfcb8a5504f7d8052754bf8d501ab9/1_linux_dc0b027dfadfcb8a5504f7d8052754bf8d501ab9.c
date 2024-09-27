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
 	if (VAR5->VAR15 & VAR16) {
 		VAR9.VAR17 = VAR5->VAR18.open.VAR19;
		VAR9.VAR20 = VAR21;
		if (!FUN2(VAR2))
			VAR9.VAR17 &= ~VAR22->VAR23->VAR24;
	} else {
		VAR9.VAR20 = 0;
		FUN3(VAR5->VAR18.open.VAR15 & VAR25);
	}
	VAR11 = FUN4();
	if (FUN5(VAR11))
		return (struct VAR3 *)VAR11;
 	VAR8 = VAR3->VAR26;
 	FUN6(VAR8);
	VAR13 = FUN7(VAR2, &VAR6, VAR5->VAR18.open.VAR15, &VAR9, VAR11);
 	FUN8(VAR11);
 	if (FUN5(VAR13)) {
 		if (FUN9(VAR13) == -VAR27) {
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
	FUN16(VAR5, &VAR6, VAR13);
 	return VAR14;
 }