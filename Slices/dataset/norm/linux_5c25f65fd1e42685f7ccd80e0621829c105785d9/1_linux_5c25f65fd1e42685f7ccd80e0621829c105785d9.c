static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8 = VAR2->VAR9;
	struct VAR10 *VAR11;
	int VAR12;
	if (VAR8->VAR13)
		return -VAR14;
	VAR11 = FUN2(VAR1, VAR4->VAR15);
	if (VAR11) {
		if (VAR4->VAR16 & VAR17)
			return -VAR18;
		if ((VAR4->VAR16 & VAR19) && VAR11->VAR20 == &VAR21)
			VAR6 = FUN3(VAR11);
		else if ((VAR4->VAR16 & VAR22) && VAR11->VAR20 == &VAR23)
			VAR6 = FUN3(VAR11);
		else
			return -VAR14;
		if (!!(VAR4->VAR16 & VAR24) !=
		    !!(VAR6->VAR25 & VAR24))
			return -VAR14;
		if (FUN4(VAR6))
			return -VAR26;
		VAR12 = FUN5(VAR6->VAR27);
		if (VAR12 < 0)
			return VAR12;
		VAR12 = FUN6(VAR6, VAR2, VAR4->VAR16 & VAR28);
		if (VAR12 < 0)
			return VAR12;
		if (VAR6->VAR25 & VAR24 &&
		    (VAR6->VAR29 + VAR6->VAR30 > 1)) {
			return 0;
		}
	}
	else {
		char *VAR31;
		unsigned long VAR25 = 0;
		int VAR32 = VAR4->VAR16 & VAR24 ?
			     VAR33 : 1;
		if (!FUN7(VAR1->VAR34, VAR35))
			return -VAR26;
		VAR12 = FUN8();
		if (VAR12 < 0)
			return VAR12;
		if (VAR4->VAR16 & VAR19) {
			VAR25 |= VAR19;
			VAR31 = VAR36;
		} else if (VAR4->VAR16 & VAR22) {
			VAR25 |= VAR22;
			VAR31 = VAR36;
		} else
			return -VAR14;
		if (*VAR4->VAR15)
			VAR31 = VAR4->VAR15;
		VAR11 = FUN9(sizeof(struct VAR5), VAR31,
				       VAR37, VAR38, VAR32,
				       VAR32);
 		if (!VAR11)
 			return -VAR39;
 		VAR12 = FUN10(VAR1, VAR11, VAR31);
		if (VAR12)
 			goto VAR40;
 		FUN11(VAR11, VAR1);
		VAR11->VAR41 = &VAR42;
		VAR11->VAR43 = VAR8->VAR43;
		VAR11->VAR44[0] = &VAR45;
		VAR6 = FUN3(VAR11);
		VAR6->VAR11 = VAR11;
		VAR6->VAR25 = VAR25;
		VAR6->VAR46.VAR47 = 0;
		VAR6->VAR48 = sizeof(struct VAR49);
		VAR6->VAR50 = VAR51;
		VAR6->VAR52 = false;
		VAR6->VAR53 = VAR8->socket.VAR54->VAR55;
		VAR6->VAR56 = 0;
		VAR6->VAR57 = FUN12(struct VAR58);
		if (!VAR6->VAR57) {
			VAR12 = -VAR39;
			goto VAR40;
		}
		FUN13(&VAR6->VAR59);
		VAR12 = FUN14(&VAR6->VAR27);
		if (VAR12 < 0)
			goto VAR60;
		FUN15(VAR11);
		FUN16(VAR6);
		VAR11->VAR61 = VAR62 | VAR63 |
				   VAR64 | VAR65 |
				   VAR66;
		VAR11->VAR67 = VAR11->VAR61 | VAR68;
		VAR11->VAR69 = VAR11->VAR67 &
				     ~(VAR65 |
				       VAR66);
		FUN17(&VAR6->VAR70);
		VAR12 = FUN6(VAR6, VAR2, false);
		if (VAR12 < 0)
			goto VAR71;
		VAR12 = FUN18(VAR6->VAR11);
		if (VAR12 < 0)
			goto VAR72;
	}
	FUN19(VAR6->VAR11);
	FUN20(VAR73, VAR6, VAR36);
	VAR6->VAR25 = (VAR6->VAR25 & ~VAR74) |
		(VAR4->VAR16 & VAR74);
	if (FUN21(VAR6->VAR11))
		FUN22(VAR6->VAR11);
	strcpy(VAR4->VAR15, VAR6->VAR11->VAR31);
	return 0;
VAR72:
	FUN23(VAR11);
	goto VAR40;
VAR71:
	FUN24(VAR6);
	FUN25(VAR6->VAR27);
VAR60:
	FUN26(VAR6->VAR57);
VAR40:
	FUN27(VAR11);
	return VAR12;
}