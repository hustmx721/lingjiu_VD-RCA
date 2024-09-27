static struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4)
{
 	struct VAR5 *VAR6;
 	struct VAR7 *VAR8;
 	struct VAR1 *VAR9, *new;
	int VAR10, VAR11;
 	VAR11 = FUN2(&VAR8);
 	if (VAR11)
		return FUN3(VAR11);
	FUN4();
	FUN5(&VAR8->VAR12);
	VAR9 = FUN6(VAR8, VAR4);
	FUN7(&VAR8->VAR12);
	if (FUN8(VAR9!=NULL))
		goto VAR13;
	VAR6 = FUN9(VAR3, VAR4);
	if (FUN10(VAR6)) {
		FUN11();
		return FUN12(VAR6);
 	}
 	VAR10 = VAR6->VAR14;
	if (!FUN13(VAR6)) {
		FUN11();
		VAR9 = FUN3(-VAR15);
		goto VAR13;
	}
 	FUN11();
	new = FUN14(sizeof(struct VAR1) + sizeof(short)*VAR10, VAR16);
	if (!new) {
		FUN15(VAR6);
		return FUN3(-VAR17);
	}
 	FUN16(VAR6);
 	if (VAR6->VAR18.VAR19) {
		FUN17(VAR6, -1);
 		FUN18(new);
 		VAR9 = FUN3(-VAR15);
 		goto VAR13;
	}
	FUN5(&VAR8->VAR12);
	VAR9 = FUN6(VAR8, VAR4);
	if (VAR9) {
		FUN18(new);
		goto VAR20;
	}
	new->VAR21 = (short *) &new[1];
	new->VAR8 = VAR8;
	new->VAR4 = VAR4;
	FUN19(&VAR8->VAR12);
	FUN20(&new->VAR22, &VAR8->VAR22);
	FUN19(&VAR6->VAR18.VAR12);
	FUN21(&new->VAR23, &VAR6->VAR23);
	VAR9 = new;
 VAR20:
 	FUN7(&VAR8->VAR12);
 	FUN4();
	FUN17(VAR6, -1);
 VAR13:
 	return VAR9;
 }