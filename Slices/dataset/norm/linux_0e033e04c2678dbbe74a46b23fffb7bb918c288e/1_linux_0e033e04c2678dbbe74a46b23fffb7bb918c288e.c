static struct VAR1 *FUN1(struct VAR1 *VAR2,
					 netdev_features_t VAR3)
{
	struct VAR1 *VAR4 = FUN2(-VAR5);
	unsigned int VAR6;
	unsigned int VAR7, VAR8;
	struct VAR9 *VAR10;
	VAR11 *VAR12, *VAR13;
	u8 VAR14;
	u8 VAR15 = sizeof(struct VAR9);
	int VAR16;
	__wsum VAR17;
	int VAR18;
	VAR6 = FUN3(VAR2)->VAR19;
	if (FUN4(VAR2->VAR20 <= VAR6))
		goto VAR21;
	if (FUN5(VAR2, VAR3 | VAR22)) {
		int VAR23 = FUN3(VAR2)->VAR24;
		if (FUN4(VAR23 & ~(VAR25 |
				      VAR26 |
				      VAR27 |
				      VAR28 |
				      VAR29 |
				      VAR30 |
				      VAR31) ||
			     !(VAR23 & (VAR25))))
			goto VAR21;
		FUN3(VAR2)->VAR32 = FUN6(VAR2->VAR20, VAR6);
		VAR4 = NULL;
		goto VAR21;
	}
	if (VAR2->VAR33 && FUN3(VAR2)->VAR24 & VAR27)
		VAR4 = FUN7(VAR2, VAR3);
	else {
		VAR16 = FUN8(VAR2);
		VAR17 = FUN9(VAR2, VAR16, VAR2->VAR20 - VAR16, 0);
		VAR16 += VAR2->VAR34;
		*(VAR35 *)(VAR2->VAR36 + VAR16) = FUN10(VAR17);
		VAR2->VAR37 = VAR38;
 		VAR18 = FUN11(VAR2);
		if (FUN12(VAR2) < (VAR18 + VAR15)) {
 			if (FUN13(VAR2, VAR18 + VAR15))
 				goto VAR21;
 		}
		VAR7 = FUN14(VAR2, &VAR13);
		VAR14 = *VAR13;
		*VAR13 = VAR39;
		VAR8 = (FUN15(VAR2) - FUN16(VAR2)) +
			     VAR7 + VAR18;
		VAR12 = (VAR11 *) VAR2->VAR40 + FUN17(VAR2)->VAR41;
		memmove(VAR12-VAR15, VAR12, VAR8);
		FUN17(VAR2)->VAR41 -= VAR15;
		VAR2->VAR42 -= VAR15;
		VAR2->VAR43 -= VAR15;
		VAR10 = (struct VAR9 *)(FUN15(VAR2) + VAR7);
		VAR10->VAR14 = VAR14;
		VAR10->VAR44 = 0;
		FUN18(VAR10, (struct VAR45 *)FUN19(VAR2));
		VAR4 = FUN20(VAR2, VAR3);
	}
VAR21:
	return VAR4;
}