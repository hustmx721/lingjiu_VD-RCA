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
	if (VAR5->VAR35 || VAR5->VAR36)
		goto VAR37;
	switch (VAR5->VAR18) {
	case VAR38:
	case VAR39:
		VAR5->VAR40 |= VAR41;
		if (!FUN5(VAR5->VAR18, VAR5->VAR42->VAR43))
			return -VAR44;
		break;
	default:
		VAR5->VAR18 = FUN6(VAR17.VAR18, VAR5->VAR42->VAR43);
		break;
	}
VAR37:
	if (VAR5->VAR18 != VAR17.VAR18) {
		VAR22 = VAR45;
		VAR17.VAR18 = VAR5->VAR18;
		if (VAR5->VAR35 == 1)
			return -VAR44;
		FUN7(&VAR8, VAR32,
					sizeof(VAR17), (unsigned long) &VAR17);
	}
 	if (VAR22 == VAR23) {
		if (VAR20 < VAR46)
			VAR22 = VAR45;
		else {
			VAR5->VAR47 = VAR20;
			VAR5->VAR40 |= VAR48;
		}
		FUN7(&VAR8, VAR28, 2, VAR5->VAR47);
		switch (VAR17.VAR18) {
		case VAR19:
			VAR5->VAR49 = VAR50;
			VAR5->VAR40 |= VAR51;
			break;
		case VAR39:
			VAR5->VAR52 = VAR17.VAR53;
			VAR5->VAR54 = VAR17.VAR55;
			VAR5->VAR56 = VAR17.VAR56;
			VAR17.VAR57 = VAR58;
			VAR17.VAR59 = VAR60;
			VAR5->VAR40 |= VAR51;
			break;
		case VAR38:
			VAR5->VAR52 = VAR17.VAR53;
			VAR5->VAR56 = VAR17.VAR56;
			VAR5->VAR40 |= VAR51;
			break;
		default:
 			VAR22 = VAR45;
 			memset(&VAR17, 0, sizeof(VAR17));
			VAR17.VAR18 = VAR5->VAR18;
		}
		FUN7(&VAR8, VAR32,
 					sizeof(VAR17), (unsigned long) &VAR17);
		if (VAR22 == VAR23)
			VAR5->VAR40 |= VAR61;
	}
 	VAR7->VAR62   = FUN8(VAR5->VAR63);
 	VAR7->VAR22 = FUN8(VAR22);
 	VAR7->VAR64  = FUN8(0x0000);
 	return VAR8 - VAR3;
 }