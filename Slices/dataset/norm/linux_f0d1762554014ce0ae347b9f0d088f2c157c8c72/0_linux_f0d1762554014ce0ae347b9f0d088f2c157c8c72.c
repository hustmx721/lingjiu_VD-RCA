static void VAR1 FUN1(void)
{
	struct VAR2 *VAR3;
 	int VAR4;
 	for (VAR4 = 0, VAR3 = VAR5; VAR4 < VAR6; VAR4++, VAR3++) {
		if (!VAR3->VAR7)
			continue;
 		if (VAR3->VAR8) {
 			FUN2(VAR3->VAR7);
 			FUN3(VAR3->VAR9);
			FUN4(&VAR3->VAR10);
		}
		FUN5(VAR3->VAR7->VAR11);
		FUN6(&VAR3->VAR12);
		FUN7(VAR3->VAR7);
	}
	FUN8(VAR13, VAR14);
	FUN9(VAR15);
}