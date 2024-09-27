static void FUN1(void *VAR1, struct VAR2 *VAR3, long VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	int VAR11;
	int VAR12;
 	int VAR13;
 	VAR11 = FUN2(VAR14, VAR3);
	if (VAR11 < 0)
 		return;
 	if (!FUN3(VAR11, VAR15))
 		return;
	VAR6 = FUN4(VAR11);
	if (!VAR6)
		return;
	VAR10 = FUN5(VAR6->VAR16->VAR17);
	if (FUN6(VAR10))
		return;
	VAR13 = sizeof(unsigned long) * VAR6->VAR18 + sizeof(*VAR8);
	VAR13 = FUN7(VAR13 + sizeof(VAR19), sizeof(VAR20));
	VAR13 -= sizeof(VAR19);
	VAR8 = (struct VAR7 *)FUN8(VAR13,
				VAR6->VAR16->VAR21.VAR22, VAR3, &VAR12);
	if (!VAR8)
		return;
	VAR8->VAR23 = VAR11;
	FUN9(VAR14, VAR3, 0, VAR6->VAR18,
			       (unsigned long *)&VAR8->VAR24);
	FUN10(VAR8, VAR13, VAR12, 0, 1, VAR3, VAR10, NULL);
}