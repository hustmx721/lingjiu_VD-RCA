static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			    char **VAR5)
{
	uint32_t VAR6[1024];
	VAR7 *VAR8;
	uint32_t VAR9;
	struct VAR10 *VAR11;
	VAR8 = &(VAR6[0]);
	VAR8 = FUN2(VAR8);
	VAR8 = FUN3(VAR8, VAR4);
	VAR9 = VAR8 - &(VAR6[0]);
	VAR11 = FUN4(VAR2, VAR12, VAR13, VAR6, VAR9);
	if (FUN5(VAR11))
		return FUN6(VAR11);
	VAR8 = (void *)VAR11->VAR6 + sizeof(struct VAR14) + 4;
 	VAR8 = FUN7(VAR8, NULL);
 	VAR9 = FUN8(FUN9(VAR8));
 	VAR8++;
 	*VAR5 = FUN10(VAR9 + 1);
	return 0;
}