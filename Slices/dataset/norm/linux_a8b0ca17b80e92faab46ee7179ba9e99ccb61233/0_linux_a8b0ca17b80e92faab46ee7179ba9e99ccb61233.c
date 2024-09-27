static void FUN1(unsigned long VAR1,
					struct VAR2 *VAR3)
{
	struct VAR4 *VAR5;
	struct perf_sample_data VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	int VAR11, VAR12;
	FUN2(VAR13)++;
	VAR5 = &FUN2(VAR4);
	FUN3(VAR14, VAR5->VAR15);
	if (FUN4(VAR1 >= VAR16->VAR17)) {
		VAR18++;
		FUN5(VAR19, VAR1);
		FUN3(VAR20, VAR5->VAR15);
		return;
	}
	VAR11 = VAR1;
	FUN6(&VAR6, 0);
	for (VAR12 = 0; VAR12 < VAR5->VAR21; VAR12++) {
		if (VAR5->VAR22[VAR12] == VAR11)
			break;
	}
	if (FUN4(VAR12 == VAR5->VAR21)) {
		FUN3(VAR20, VAR5->VAR15);
		return;
	}
	VAR8 = VAR5->VAR8[VAR12];
	if (FUN4(!VAR8)) {
		VAR18++;
		FUN5(VAR19, VAR11);
		FUN3(VAR20, VAR5->VAR15);
		return;
	}
	VAR10 = &VAR8->VAR23;
	FUN7(VAR8, VAR10, VAR11, VAR16->VAR24[VAR11]+1);
 	VAR6.VAR25 = VAR8->VAR23.VAR26;
 	if (FUN8(VAR8, VAR10, VAR11)) {
		if (FUN9(VAR8, &VAR6, VAR3)) {
			FUN10(VAR8, 0);
		}
	}
	FUN3(VAR20, VAR5->VAR15);
	return;
}