FUN1(VAR1)
{
	char *VAR2;
	int VAR3;
	VAR4 *VAR5;
	VAR6 *VAR7 = NULL;
	char *VAR8;
	VAR9 *VAR10, *VAR11;
	int VAR12;
	int VAR13, VAR14;
	long VAR15 = -1;
 	if (FUN2(FUN3() VAR16, VAR17, &VAR2, &VAR3, &VAR8, &VAR12, &VAR15) == VAR18) {
 		VAR19;
	}
 	if (VAR15 > 0) {
 		VAR15--;
	}
	if ((VAR5 = FUN4(VAR2, VAR3, FUN5(VAR20), FUN5(VAR21), FUN5(VAR22) VAR16)) == NULL) {
		VAR19;
	}
	FUN6(VAR23);
	VAR11 = VAR10 = (VAR9 *)VAR8;
	VAR14 = 0;
	VAR7 = FUN7();
	while (VAR15 != 0 && (VAR10 - (VAR9 *)VAR8) < VAR12) {
		int VAR24, VAR25;
		VAR14 = FUN8(VAR5, (VAR9 *)VAR8, (VAR9 *)(VAR8 + VAR12), VAR10, (VAR9 *)(VAR8 + VAR12), VAR7, 0);
		if (VAR14 < 0) {
			break;
		}
		VAR24 = VAR7->VAR24[0], VAR25 = VAR7->VAR25[0];
		if ((VAR10 - (VAR9 *)VAR8) < VAR25) {
			if (VAR24 < VAR12 && VAR24 >= (VAR11 - (VAR9 *)VAR8)) {
				FUN9(VAR23, (char *)VAR11, ((VAR9 *)(VAR8 + VAR24) - VAR11), 1);
				--VAR15;
			} else {
				VAR14 = -2;
				break;
			}
			VAR11 = VAR10 = (VAR9 *)VAR8 + VAR25;
		} else {
			VAR10++;
		}
		FUN10(VAR7, 0);
	}
	FUN10(VAR7, 1);
	if (VAR14 <= -2) {
		OnigUChar VAR26[VAR27];
		FUN11(VAR26, VAR14);
		FUN12(NULL VAR16, VAR28, VAR17, VAR26);
		FUN13(VAR23);
		VAR19;
	}
	VAR13 = ((VAR9 *)(VAR8 + VAR12) - VAR11);
	if (VAR13 > 0) {
		FUN9(VAR23, (char *)VAR11, VAR13, 1);
	} else {
		FUN9(VAR23, VAR17, 0, 1);
	}
}