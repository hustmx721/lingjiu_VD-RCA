static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	VAR5 *VAR6 = &VAR2->VAR7.VAR6;
	int VAR8;
	unsigned int VAR9;
	unsigned int VAR10;
 	int_fast32_t VAR11;
 	VAR6->VAR12 = 0;
 	if (FUN2(VAR4, &VAR6->VAR13) ||
 	  FUN3(VAR4, &VAR6->VAR14)) {
		return -1;
	}
	VAR8 = VAR6->VAR13 * VAR6->VAR14;
	if (!(VAR6->VAR12 = FUN4(VAR8, sizeof(VAR15)))) {
		return -1;
	}
	if (!(VAR6->VAR16 = FUN4(VAR6->VAR14, sizeof(VAR17)))) {
		return -1;
	}
	for (VAR9 = 0; VAR9 < VAR6->VAR14; ++VAR9) {
		if (FUN3(VAR4, &VAR6->VAR16[VAR9])) {
			return -1;
		}
	}
	for (VAR9 = 0; VAR9 < VAR6->VAR13; ++VAR9) {
		for (VAR10 = 0; VAR10 < VAR6->VAR14; ++VAR10) {
			if (FUN5(VAR4, (VAR6->VAR16[VAR10] & 0x80) != 0,
			  (VAR6->VAR16[VAR10] & 0x7f) + 1, &VAR11)) {
				return -1;
			}
			VAR6->VAR12[VAR9 * VAR6->VAR14 + VAR10] = VAR11;
		}
	}
	return 0;
}