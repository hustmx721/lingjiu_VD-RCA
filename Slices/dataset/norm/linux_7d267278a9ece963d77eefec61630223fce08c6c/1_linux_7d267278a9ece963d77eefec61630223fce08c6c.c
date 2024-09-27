static int FUN1(struct socket *VAR1, struct VAR2 *VAR3,
			      int VAR4, int VAR5)
{
	struct VAR1 *VAR6 = VAR1->VAR6;
	struct VAR7 *VAR7 = FUN2(VAR6);
	struct VAR8 *VAR9 = (struct VAR8 *)VAR3;
	struct VAR1 *VAR10;
	unsigned int VAR11;
	int VAR12;
	if (VAR3->VAR13 != VAR14) {
		VAR12 = FUN3(VAR9, VAR4, &VAR11);
		if (VAR12 < 0)
			goto VAR15;
		VAR4 = VAR12;
		if (FUN4(VAR16, &VAR1->VAR5) &&
		    !FUN5(VAR6)->VAR3 && (VAR12 = FUN6(VAR1)) != 0)
			goto VAR15;
VAR17:
		VAR10 = FUN7(VAR7, VAR9, VAR4, VAR1->VAR18, VAR11, &VAR12);
		if (!VAR10)
			goto VAR15;
		FUN8(VAR6, VAR10);
		if (FUN9(VAR10, VAR19)) {
			FUN10(VAR6, VAR10);
			FUN11(VAR10);
			goto VAR17;
		}
		VAR12 = -VAR20;
		if (!FUN12(VAR6, VAR10))
			goto VAR21;
		VAR12 = FUN13(VAR6->VAR22, VAR10->VAR22);
		if (VAR12)
			goto VAR21;
	} else {
		VAR10 = NULL;
		FUN8(VAR6, VAR10);
	}
 	if (FUN14(VAR6)) {
 		struct VAR1 *VAR23 = FUN14(VAR6);
 		FUN14(VAR6) = VAR10;
 		FUN10(VAR6, VAR10);
 		if (VAR10 != VAR23)
			FUN15(VAR6, VAR23);
		FUN11(VAR23);
	} else {
		FUN14(VAR6) = VAR10;
		FUN10(VAR6, VAR10);
	}
	return 0;
VAR21:
	FUN10(VAR6, VAR10);
	FUN11(VAR10);
VAR15:
	return VAR12;
}