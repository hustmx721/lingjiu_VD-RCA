static struct VAR1 *FUN1(struct VAR2 *VAR3,
	int VAR4, const char *VAR5, void *VAR6)
{
	int VAR7;
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	char *VAR12;
	if (VAR4 & VAR13) {
		VAR11 = (struct VAR10 *)VAR6;
		VAR12 = NULL;
	} else {
		VAR11 = FUN2(VAR14);
		VAR12 = VAR6;
		if (!FUN3(VAR11->VAR15, VAR16))
			return FUN4(-VAR17);
	}
	VAR9 = FUN5(VAR3, VAR18, VAR19, VAR4, VAR11);
 	if (FUN6(VAR9))
 		return FUN7(VAR9);
 	if (!FUN8(VAR12, VAR11)) {
 		FUN9(VAR9);
 		return FUN4(-VAR20);
	}
	if (!VAR9->VAR21) {
		VAR7 = FUN10(VAR9);
		if (VAR7) {
			FUN9(VAR9);
			return FUN4(VAR7);
		}
		VAR9->VAR22 |= VAR23;
		VAR9->VAR24 |= VAR25;
	}
	return FUN11(VAR9->VAR21);
}