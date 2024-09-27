static struct VAR1 *FUN1(struct VAR1 *VAR2)
{
	struct VAR1 *VAR3;
	struct VAR4 *VAR5;
	unsigned long *VAR6;
	int VAR7;
	FUN2(VAR2);
	VAR3 = FUN3();
	if (!VAR3)
		return NULL;
	VAR5 = FUN4(VAR3);
	if (!VAR5) {
		FUN5(VAR3);
		return NULL;
	}
 	VAR7 = FUN6(VAR3, VAR2);
	if (VAR7)
		goto VAR8;
	VAR3->VAR9 = VAR5;
	VAR7 = FUN7(&VAR3->VAR10);
	if (VAR7)
		goto VAR8;
 	FUN8(VAR3, VAR2);
 	FUN9(VAR3);
	FUN10(VAR3);
 	VAR6 = FUN11(VAR3);
 	*VAR6 = VAR11;
#ifdef VAR12
	VAR3->VAR13 = FUN12();
#VAR14
	FUN13(&VAR3->VAR15,2);
	FUN13(&VAR3->VAR16, 0);
#ifdef VAR17
	VAR3->VAR18 = 0;
#VAR14
	VAR3->VAR19 = NULL;
	FUN14(VAR5, 1);
	return VAR3;
VAR8:
	FUN15(VAR5);
	FUN5(VAR3);
	return NULL;
}