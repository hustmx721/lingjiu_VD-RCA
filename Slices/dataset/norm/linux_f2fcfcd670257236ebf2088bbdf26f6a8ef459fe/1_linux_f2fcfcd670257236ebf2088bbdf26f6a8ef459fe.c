static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR2);
	struct VAR6 *VAR7 = VAR3;
	void *VAR8 = VAR7->VAR3;
	void *VAR9 = VAR5->VAR10;
	int VAR11 = VAR5->VAR12;
	int VAR13, VAR14, VAR15;
	unsigned long VAR16;
	struct l2cap_conf_rfc VAR17 = { .VAR18 = VAR19 };
	u16 VAR20 = VAR21;
	u16 VAR22 = VAR23;
	FUN3(VAR24, VAR2);
	while (VAR11 >= VAR25) {
		VAR11 -= FUN4(&VAR9, &VAR13, &VAR15, &VAR16);
		VAR14  = VAR13 & VAR26;
		VAR13 &= VAR27;
		switch (VAR13) {
		case VAR28:
			VAR20 = VAR16;
			break;
		case VAR29:
			VAR5->VAR30 = VAR16;
			break;
		case VAR31:
			break;
		case VAR32:
			if (VAR15 == sizeof(VAR17))
				memcpy(&VAR17, (void *) VAR16, VAR15);
			break;
		default:
			if (VAR14)
				break;
			VAR22 = VAR33;
			*((VAR34 *) VAR8++) = VAR13;
			break;
 		}
 	}
 	if (VAR22 == VAR23) {
		if (VAR17.VAR18 == VAR19) {
			if (VAR20 < VAR5->VAR35)
				VAR22 = VAR36;
			else {
				VAR5->VAR35 = VAR20;
				VAR5->VAR37 |= VAR38;
			}
			FUN5(&VAR8, VAR28, 2, VAR5->VAR35);
		} else {
 			VAR22 = VAR36;
 			memset(&VAR17, 0, sizeof(VAR17));
			VAR17.VAR18 = VAR19;
			FUN5(&VAR8, VAR32,
 					sizeof(VAR17), (unsigned long) &VAR17);
		}
	}
 	VAR7->VAR39   = FUN6(VAR5->VAR40);
 	VAR7->VAR22 = FUN6(VAR22);
 	VAR7->VAR41  = FUN6(0x0000);
 	return VAR8 - VAR3;
 }