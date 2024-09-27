 static int FUN1(struct socket *VAR1, struct VAR2 *VAR3, int VAR4)
 {
	struct VAR5 *VAR6 = (struct VAR5 *) VAR3;
 	struct VAR1 *VAR7 = VAR1->VAR7;
	int VAR8 = VAR6->VAR9;
	int VAR10 = 0;
	FUN2(VAR11, VAR7, &VAR6->VAR12);
 	if (!VAR3 || VAR3->VAR13 != VAR14)
 		return -VAR15;
 	FUN3(VAR7);
 	if (VAR7->VAR16 != VAR17) {
		VAR10 = -VAR18;
		goto VAR19;
	}
	if (VAR7->VAR20 != VAR21) {
		VAR10 = -VAR15;
		goto VAR19;
	}
 	FUN4(&VAR22.VAR23);
	if (VAR8 && FUN5(VAR8, &VAR6->VAR12)) {
 		VAR10 = -VAR24;
 	} else {
		FUN6(&FUN7(VAR7)->VAR25, &VAR6->VAR12);
		FUN7(VAR7)->VAR26 = VAR8;
 		VAR7->VAR16 = VAR27;
 	}
	FUN8(&VAR22.VAR23);
VAR19:
	FUN9(VAR7);
	return VAR10;
}