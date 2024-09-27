VAR1 FUN1(struct VAR2 *VAR2,
				const struct VAR3 *VAR4,
				const struct VAR5 *VAR6,
				const sctp_subtype_t VAR7,
				void *VAR8,
				VAR9 *VAR10)
{
	struct VAR11 *VAR12 = VAR8;
	struct VAR13 *VAR14 = VAR12->VAR14;
	VAR15 *VAR16;
	VAR17 *VAR18;
	VAR19 *VAR20;
	int VAR21 = 0;
	int VAR22 = 0;
	FUN2(VAR2, VAR23);
	VAR16 = (VAR15 *) VAR12->VAR24;
	do {
		if (FUN3(VAR16->VAR25) < sizeof(VAR15))
 			return FUN4(VAR2, VAR4, VAR6, VAR7, VAR8,
 						  VAR10);
		VAR20 = ((VAR19 *)VAR16) + FUN5(FUN3(VAR16->VAR25));
		if (VAR20 > FUN6(VAR14))
			return FUN4(VAR2, VAR4, VAR6, VAR7, VAR8,
						  VAR10);
		if (VAR26 == VAR16->VAR7)
			VAR21 = 1;
		if (VAR27 == VAR16->VAR7)
			return FUN7(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
		if (VAR28 == VAR16->VAR7)
			VAR22 = 1;
		if (VAR29 == VAR16->VAR7) {
			FUN8(VAR18, VAR16) {
				if (VAR30 == VAR18->VAR31) {
					VAR22 = 1;
					break;
				}
 			}
 		}
 		VAR16 = (VAR15 *) VAR20;
 	} while (VAR20 < FUN6(VAR14));
	if (VAR21)
		return FUN9(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
	else if (VAR22)
		return FUN7(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
	else
		return FUN10(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10);
}