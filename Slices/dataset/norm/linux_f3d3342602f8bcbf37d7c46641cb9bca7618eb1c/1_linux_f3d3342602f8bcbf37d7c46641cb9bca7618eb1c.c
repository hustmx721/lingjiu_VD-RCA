static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
			  struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
 	struct VAR3 *VAR8 = VAR3->VAR8;
 	struct VAR9 *VAR10;
 	int VAR11, VAR12;
	struct VAR13 *VAR14;
 	int VAR15 = 0;
 	VAR12 = -VAR16;
	if (VAR7 & ~(VAR17|VAR18|VAR19|VAR20|VAR21))
		goto VAR22;
#if 0
	if (FUN2(VAR8)->VAR23 < 0)
		return -VAR24;
#VAR25
	if (VAR7 & VAR21) {
		VAR12 = FUN3(VAR8, VAR5, VAR6,
					 VAR26, VAR27);
		goto VAR22;
	}
	VAR10 = FUN4(VAR8, VAR7, VAR7 & VAR18, &VAR12);
	if (VAR10 == NULL)
		goto VAR22;
	if (FUN2(VAR8)->VAR28) {
		struct virtio_net_hdr VAR29 = { 0 };
		VAR12 = -VAR16;
		VAR15 = sizeof(VAR29);
		if (VAR6 < VAR15)
			goto VAR30;
		VAR6 -= VAR15;
		if (FUN5(VAR10)) {
			struct VAR31 *VAR32 = FUN6(VAR10);
			VAR29.VAR33 = FUN7(VAR10);
			VAR29.VAR34 = VAR32->VAR34;
			if (VAR32->VAR35 & VAR36)
				VAR29.VAR35 = VAR37;
			else if (VAR32->VAR35 & VAR38)
				VAR29.VAR35 = VAR39;
			else if (VAR32->VAR35 & VAR40)
				VAR29.VAR35 = VAR41;
			else if (VAR32->VAR35 & VAR42)
				goto VAR30;
			else
				FUN8();
			if (VAR32->VAR35 & VAR43)
				VAR29.VAR35 |= VAR44;
		} else
			VAR29.VAR35 = VAR45;
		if (VAR10->VAR46 == VAR47) {
			VAR29.VAR7 = VAR48;
			VAR29.VAR49 = FUN9(VAR10);
			VAR29.VAR50 = VAR10->VAR50;
		} else if (VAR10->VAR46 == VAR51) {
			VAR29.VAR7 = VAR52;
		}
		VAR12 = FUN10(VAR5->VAR53, (void *)&VAR29,
				     VAR15);
		if (VAR12 < 0)
 			goto VAR30;
 	}
	VAR14 = &FUN11(VAR10)->VAR54.VAR55;
	if (VAR3->VAR56 == VAR57)
		VAR5->VAR58 = sizeof(struct VAR59);
	else
		VAR5->VAR58 = VAR14->VAR60 + FUN12(struct VAR13, VAR61);
 	VAR11 = VAR10->VAR6;
 	if (VAR11 > VAR6) {
 		VAR11 = VAR6;
		VAR5->VAR62 |= VAR19;
	}
	VAR12 = FUN13(VAR10, 0, VAR5->VAR53, VAR11);
	if (VAR12)
		goto VAR30;
 	FUN14(VAR5, VAR8, VAR10);
	if (VAR5->VAR63)
 		memcpy(VAR5->VAR63, &FUN11(VAR10)->VAR54,
 		       VAR5->VAR58);
 	if (FUN2(VAR8)->VAR64) {
 		struct tpacket_auxdata VAR65;
		VAR65.VAR66 = VAR67;
		if (VAR10->VAR46 == VAR47)
			VAR65.VAR66 |= VAR68;
		VAR65.VAR69 = FUN11(VAR10)->VAR70;
		VAR65.VAR71 = VAR10->VAR6;
		VAR65.VAR72 = 0;
		VAR65.VAR73 = FUN15(VAR10);
		if (FUN16(VAR10)) {
			VAR65.VAR74 = FUN17(VAR10);
			VAR65.VAR66 |= VAR75;
		} else {
			VAR65.VAR74 = 0;
		}
		VAR65.VAR76 = 0;
		FUN18(VAR5, VAR26, VAR77, sizeof(VAR65), &VAR65);
	}
	VAR12 = VAR15 + ((VAR7&VAR19) ? VAR10->VAR6 : VAR11);
VAR30:
	FUN19(VAR8, VAR10);
VAR22:
	return VAR12;
}