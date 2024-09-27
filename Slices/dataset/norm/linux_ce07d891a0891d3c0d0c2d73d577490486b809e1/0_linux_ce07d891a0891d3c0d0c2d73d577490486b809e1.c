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
	if (FUN9(!FUN11(&VAR2->VAR7))) {
		struct VAR1 *VAR8, *VAR9;
		FUN12(VAR8, VAR9, &VAR2->VAR7,  VAR10) {
			FUN13(VAR8);
		}
	}
 	FUN8();
 	if (FUN4(!(VAR2->VAR2.VAR4 & VAR11))) {
		struct VAR12 *VAR13 = VAR14;
		if (FUN4(!(VAR13->VAR15 & VAR16))) {
			FUN14(&VAR2->VAR17, VAR18);
			if (!FUN15(VAR13, &VAR2->VAR17, true))
				return;
		}
		if (FUN16(&VAR2->VAR19, &VAR20))
			FUN17(&VAR21, 1);
		return;
	}
	FUN18(VAR2);
}