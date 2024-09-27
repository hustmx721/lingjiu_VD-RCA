static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = &VAR2->VAR4;
	struct VAR5 *VAR6;
	unsigned int VAR7;
	int VAR8;
	VAR9.VAR10.VAR4 = VAR4;
	VAR9.VAR10.VAR11 = NULL;
	VAR9.VAR10.VAR12 = false;
	VAR9.VAR10.VAR13 = false;
	VAR9.VAR14 = FUN2(&VAR9.VAR10, 0);
	if (FUN3(VAR9.VAR14))
 		return FUN4(VAR9.VAR14);
 	VAR6 = FUN5(VAR2, VAR15, 0);
	if (!VAR6)
		return -VAR16;
 	VAR17 = FUN6(VAR4, VAR6->VAR18, FUN7(VAR6));
 	if (!VAR17)
 		return -VAR19;
	VAR17 += VAR20;
	for (VAR7 = 0; VAR7 < VAR21; VAR7++) {
		VAR8 = FUN8(&VAR2->VAR4, &VAR22[VAR7].VAR23);
		if (VAR8)
			return VAR8;
	}
	return FUN9(&VAR2->VAR4, VAR24,
					   VAR22);
}