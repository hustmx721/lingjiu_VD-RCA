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
 	VAR16 = FUN6(VAR4, VAR6->VAR17, FUN7(VAR6));
 	if (!VAR16)
 		return -VAR18;
	VAR16 += VAR19;
	for (VAR7 = 0; VAR7 < VAR20; VAR7++) {
		VAR8 = FUN8(&VAR2->VAR4, &VAR21[VAR7].VAR22);
		if (VAR8)
			return VAR8;
	}
	return FUN9(&VAR2->VAR4, VAR23,
					   VAR21);
}