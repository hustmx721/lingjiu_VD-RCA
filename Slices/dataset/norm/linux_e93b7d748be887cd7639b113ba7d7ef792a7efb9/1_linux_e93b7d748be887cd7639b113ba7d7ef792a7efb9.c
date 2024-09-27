static inline int FUN1(struct VAR1 *VAR2,
			struct VAR3 *VAR4,
			int FUN2(void *VAR5, char *VAR6, int VAR7, int VAR8,
			       int VAR9, struct VAR10 *VAR11),
			void *VAR5, int VAR12, int VAR13, int VAR14,
			int VAR15, int VAR16, unsigned int VAR17)
{
	struct VAR10 *VAR11;
	int VAR18;
	if ((VAR11 = FUN3(VAR4)) == NULL) {
		VAR11 = FUN4(VAR2,
			VAR13 + VAR14 + VAR15 + 20,
			(VAR17 & VAR19), &VAR18);
		if (VAR11 == NULL)
			return VAR18;
		FUN5(VAR11, VAR13);
		FUN6(VAR11, VAR14 + VAR15);
		FUN7(VAR11);
 		VAR11->VAR20 = VAR11->VAR21 + VAR14;
		VAR11->VAR22 = VAR23;
 		VAR11->VAR24 = 0;
		FUN8(VAR11)->VAR25 = VAR16 - VAR14;
		FUN8(VAR11)->VAR26 = VAR27;
 		FUN9(VAR4, VAR11);
 	}
 	return FUN10(VAR2, VAR11, VAR28, VAR5,
 				       (VAR12 - VAR15));
 }