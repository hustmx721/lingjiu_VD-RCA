static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5.VAR4;
	struct VAR6 *VAR6;
	if (!VAR4 || !VAR4->VAR7)
		return 0;
	VAR6 = FUN2(VAR2->VAR8, VAR4->VAR7 >> VAR9);
	if (FUN3(VAR6))
		return -VAR10;
	VAR2->VAR5.VAR4->VAR11 = VAR6;
	return 0;
}