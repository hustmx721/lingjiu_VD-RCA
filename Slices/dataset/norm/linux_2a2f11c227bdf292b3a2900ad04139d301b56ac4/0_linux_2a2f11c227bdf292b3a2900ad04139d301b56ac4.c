static int FUN1(struct VAR1 *VAR2,
				     struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	int VAR7;
	u32 VAR8 = 0;
	VAR4->VAR9 = FUN2(VAR2->VAR10[VAR11]);
	if (FUN3(VAR2->VAR10[VAR12],
				VAR13,
				VAR14) != 0)
		return -VAR15;
 	FUN4(VAR6, VAR2->VAR10[VAR12], VAR7)
 		if (VAR6->VAR16 == VAR17) {
			if (VAR8 >= VAR18)
 				return -VAR15;
 			VAR4->VAR19[VAR8++] = FUN5(VAR6);
 		}
	while (VAR8 < VAR18)
		VAR4->VAR19[VAR8++] = VAR20;
 	return 0;
 }