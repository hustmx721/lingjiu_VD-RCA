 static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
 {
	struct VAR4 *VAR5;
 	struct VAR4 *VAR6;
 	struct VAR7 *VAR8;
 	size_t VAR9 = VAR3->VAR9;
 	char *VAR10;
 	int VAR11 = 0;
	if (FUN2(VAR12, &VAR1->VAR13))
		return -VAR14;
	VAR5 = VAR1->VAR15.VAR16[0];
 	if (!VAR5->VAR17)
 		return -VAR18;
 	if (VAR9 <= 0 || VAR9 > 32767 || !VAR3->VAR16)
		return -VAR19;
	VAR10 = FUN3(VAR9 + 1, VAR20);
	if (!VAR10)
		return -VAR21;
	VAR8 = FUN4();
	if (!VAR8) {
		VAR11 = -VAR21;
		goto VAR22;
	}
	VAR6 = FUN5(VAR1);
	if (!VAR6) {
		VAR11 = -VAR21;
		goto VAR22;
	}
	memcpy(VAR10, VAR3->VAR16, VAR9);
	VAR10[VAR9] = VAR23;
	VAR11 = FUN6(VAR10, VAR6, VAR8);
	if (VAR11 != VAR24) {
		VAR11 = -VAR19;
		FUN7(VAR6);
		goto VAR22;
	}
	if (!VAR8->VAR25) {
		VAR11 = -VAR19;
		FUN7(VAR6);
		goto VAR22;
	}
	VAR6->VAR17 = VAR5->VAR17;
	VAR6->VAR26 = VAR5->VAR26;
	memcpy(VAR6->VAR1, VAR5->VAR1, VAR5->VAR26);
	FUN8(VAR5);
	FUN8(VAR6);
	VAR11 = FUN9(VAR6, VAR8);
	if (VAR11 < 0) {
		FUN10(VAR27, VAR11);
		FUN7(VAR6);
		goto VAR22;
	}
	if (VAR8->VAR28) {
		VAR11 = FUN11(VAR8->VAR28);
		if (VAR11 < 0) {
			FUN10(VAR27, VAR11);
			FUN7(VAR6);
			goto VAR22;
		}
	}
	FUN12(VAR1, VAR6);
	FUN13(&VAR5->VAR29, VAR30);
VAR22:
	FUN7(VAR10);
	FUN7(VAR8);
	return VAR11;
}