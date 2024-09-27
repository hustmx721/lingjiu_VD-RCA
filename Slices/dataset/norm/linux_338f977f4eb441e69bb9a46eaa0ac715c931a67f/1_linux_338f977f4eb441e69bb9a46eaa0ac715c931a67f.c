static int FUN1(struct VAR1 *VAR2,
			      struct VAR3 *VAR4, int VAR5,
			      int VAR6)
{
	struct VAR7 *VAR8 = VAR2->VAR8;
	struct VAR9 *VAR10;
	struct VAR3 *VAR11;
	int VAR12 = VAR6 - VAR5 - VAR13;
	int VAR14 = VAR5 + VAR12;
	int VAR15 = VAR4->VAR16 - VAR5 - VAR12;
	if (FUN2(VAR15 < 0))
		return -VAR17;
	while (VAR15) {
		int VAR18 = VAR12;
		if (VAR18 > VAR15)
			VAR18 = VAR15;
		VAR15 -= VAR18;
		VAR11 = FUN3(VAR8->VAR19 +
				    VAR6 +
				    VAR2->VAR20->VAR21 +
				    VAR22);
		if (!VAR11)
			return -VAR23;
		FUN4(&VAR2->VAR24, VAR11);
		FUN5(VAR11,
			    VAR8->VAR19 + VAR2->VAR20->VAR21);
		memcpy(VAR11->VAR25, VAR4->VAR25, sizeof(VAR11->VAR25));
		VAR10 = FUN6(VAR11);
		VAR10->VAR26 &= ~(VAR27 |
				 VAR28);
		if (VAR15)
			VAR10->VAR26 |= VAR29;
		FUN7(VAR11, VAR4);
		VAR11->VAR30 = VAR4->VAR30;
		VAR11->VAR31 = VAR4->VAR31;
		memcpy(FUN8(VAR11, VAR5), VAR4->VAR32, VAR5);
		memcpy(FUN8(VAR11, VAR18), VAR4->VAR32 + VAR14, VAR18);
		VAR14 += VAR18;
 	}
	VAR4->VAR16 = VAR5 + VAR12;
 	return 0;
 }