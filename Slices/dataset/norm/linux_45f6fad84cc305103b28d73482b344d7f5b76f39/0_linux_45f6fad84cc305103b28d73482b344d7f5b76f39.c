static int FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4,
			      struct VAR5 *VAR6,
			      struct VAR7 *VAR8,
			      struct VAR9 *VAR10,
			      bool VAR11)
{
	struct VAR12 *VAR13 = FUN2(VAR8);
	struct VAR14 *VAR15 = FUN3(VAR2);
	struct VAR16 *VAR17 = &VAR6->VAR18.VAR19;
	struct VAR20 *VAR21;
	int VAR22 = -VAR23;
	if (!VAR4 && (VAR4 = FUN4(VAR2, VAR17, VAR8,
					       VAR24)) == NULL)
		goto VAR25;
	VAR21 = FUN5(VAR2, VAR4, VAR8, VAR10, VAR11);
	if (VAR21) {
		FUN6(VAR21, &VAR13->VAR26,
				    &VAR13->VAR27);
		VAR17->VAR28 = VAR13->VAR27;
 		if (VAR15->VAR29 && VAR13->VAR30)
 			VAR17->VAR31 = FUN7(FUN8(VAR13->VAR30));
		VAR22 = FUN9(VAR2, VAR21, VAR17, FUN10(VAR15->VAR32),
			       VAR15->VAR33);
 		VAR22 = FUN11(VAR22);
 	}
VAR25:
	return VAR22;
}