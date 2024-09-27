 static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
 {
	struct VAR4 *VAR5 = VAR1->VAR6.VAR7[0];
 	struct VAR4 *VAR8;
 	struct VAR9 *VAR10;
 	size_t VAR11 = VAR3->VAR11;
 	char *VAR12;
 	int VAR13 = 0;
 	if (!VAR5->VAR14)
 		return -VAR15;
 	if (VAR11 <= 0 || VAR11 > 32767 || !VAR3->VAR7)
		return -VAR16;
	VAR12 = FUN2(VAR11 + 1, VAR17);
	if (!VAR12)
		return -VAR18;
	VAR10 = FUN3();
	if (!VAR10) {
		VAR13 = -VAR18;
		goto VAR19;
	}
	VAR8 = FUN4(VAR1);
	if (!VAR8) {
		VAR13 = -VAR18;
		goto VAR19;
	}
	memcpy(VAR12, VAR3->VAR7, VAR11);
	VAR12[VAR11] = VAR20;
	VAR13 = FUN5(VAR12, VAR8, VAR10);
	if (VAR13 != VAR21) {
		VAR13 = -VAR16;
		FUN6(VAR8);
		goto VAR19;
	}
	if (!VAR10->VAR22) {
		VAR13 = -VAR16;
		FUN6(VAR8);
		goto VAR19;
	}
	VAR8->VAR14 = VAR5->VAR14;
	VAR8->VAR23 = VAR5->VAR23;
	memcpy(VAR8->VAR1, VAR5->VAR1, VAR5->VAR23);
	FUN7(VAR5);
	FUN7(VAR8);
	VAR13 = FUN8(VAR8, VAR10);
	if (VAR13 < 0) {
		FUN9(VAR24, VAR13);
		FUN6(VAR8);
		goto VAR19;
	}
	if (VAR10->VAR25) {
		VAR13 = FUN10(VAR10->VAR25);
		if (VAR13 < 0) {
			FUN9(VAR24, VAR13);
			FUN6(VAR8);
			goto VAR19;
		}
	}
	FUN11(VAR1, VAR8);
	FUN12(&VAR5->VAR26, VAR27);
VAR19:
	FUN6(VAR12);
	FUN6(VAR10);
	return VAR13;
}