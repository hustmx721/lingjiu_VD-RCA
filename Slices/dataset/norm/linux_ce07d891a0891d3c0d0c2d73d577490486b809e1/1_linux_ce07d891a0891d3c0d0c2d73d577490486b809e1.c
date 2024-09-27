static void FUN1(struct VAR1 *VAR2)
{
	FUN2();
	FUN3(VAR2, -1);
	if (FUN4(VAR2->VAR3)) {
		FUN5();
		return;
	}
	FUN6();
	if (FUN7(VAR2)) {
		FUN5();
		FUN8();
		return;
	}
	if (FUN9(VAR2->VAR2.VAR4 & VAR5)) {
		FUN5();
		FUN8();
		return;
	}
	VAR2->VAR2.VAR4 |= VAR5;
 	FUN5();
 	FUN10(&VAR2->VAR6);
 	FUN8();
 	if (FUN4(!(VAR2->VAR2.VAR4 & VAR7))) {
		struct VAR8 *VAR9 = VAR10;
		if (FUN4(!(VAR9->VAR11 & VAR12))) {
			FUN11(&VAR2->VAR13, VAR14);
			if (!FUN12(VAR9, &VAR2->VAR13, true))
				return;
		}
		if (FUN13(&VAR2->VAR15, &VAR16))
			FUN14(&VAR17, 1);
		return;
	}
	FUN15(VAR2);
}