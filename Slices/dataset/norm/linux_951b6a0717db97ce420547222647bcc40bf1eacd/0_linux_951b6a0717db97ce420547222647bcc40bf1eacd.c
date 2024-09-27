 static int FUN1(struct socket *VAR1, struct VAR2 *VAR3, int VAR4)
 {
	struct sockaddr_rc VAR5;
 	struct VAR1 *VAR6 = VAR1->VAR6;
	int VAR7, VAR8 = 0;
 	if (!VAR3 || VAR3->VAR9 != VAR10)
 		return -VAR11;
	memset(&VAR5, 0, sizeof(VAR5));
	VAR7 = FUN2(unsigned int, sizeof(VAR5), VAR4);
	memcpy(&VAR5, VAR3, VAR7);
	FUN3(VAR12, VAR6, &VAR5.VAR13);
 	FUN4(VAR6);
 	if (VAR6->VAR14 != VAR15) {
		VAR8 = -VAR16;
		goto VAR17;
	}
	if (VAR6->VAR18 != VAR19) {
		VAR8 = -VAR11;
		goto VAR17;
	}
 	FUN5(&VAR20.VAR21);
	if (VAR5.VAR22 &&
	    FUN6(VAR5.VAR22, &VAR5.VAR13)) {
 		VAR8 = -VAR23;
 	} else {
		FUN7(&FUN8(VAR6)->VAR24, &VAR5.VAR13);
		FUN8(VAR6)->VAR25 = VAR5.VAR22;
 		VAR6->VAR14 = VAR26;
 	}
	FUN9(&VAR20.VAR21);
VAR17:
	FUN10(VAR6);
	return VAR8;
}