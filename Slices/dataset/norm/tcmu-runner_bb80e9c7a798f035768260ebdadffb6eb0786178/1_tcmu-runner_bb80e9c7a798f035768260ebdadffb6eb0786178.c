FUN1(VAR1 *VAR2,
		      VAR3 *VAR4,
		      VAR5 *VAR6,
		      gpointer VAR7)
{
	struct VAR8 *VAR9 = FUN2(VAR6);
	struct VAR10 *VAR11 = VAR9 ? VAR9->VAR12 : NULL;
	if (!VAR9) {
		FUN3(VAR4,
			FUN4(VAR13, VAR14,
 				      VAR13));
 		return VAR15;
 	}
 	FUN5(VAR9);
	FUN6(VAR9);
 	FUN7(VAR11->VAR16);
 	FUN8(VAR11);
 	FUN8(VAR9);
	FUN3(VAR4,
		FUN4(VAR13, VAR15, VAR13));
	return VAR15;
}