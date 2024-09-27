static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
			  struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
 	struct VAR3 *VAR8 = VAR3->VAR8;
 	struct VAR9 *VAR10;
 	int VAR11, VAR12;
 	int VAR13 = 0;
 	VAR12 = -VAR14;
	if (VAR7 & ~(VAR15|VAR16|VAR17|VAR18|VAR19))
		goto VAR20;
#if 0
	if (FUN2(VAR8)->VAR21 < 0)
		return -VAR22;
#VAR23
	if (VAR7 & VAR19) {
		VAR12 = FUN3(VAR8, VAR5, VAR6,
					 VAR24, VAR25);
		goto VAR20;
	}
	VAR10 = FUN4(VAR8, VAR7, VAR7 & VAR16, &VAR12);
	if (VAR10 == NULL)
		goto VAR20;
	if (FUN2(VAR8)->VAR26) {
		struct virtio_net_hdr VAR27 = { 0 };
		VAR12 = -VAR14;
		VAR13 = sizeof(VAR27);
		if (VAR6 < VAR13)
			goto VAR28;
		VAR6 -= VAR13;
		if (FUN5(VAR10)) {
			struct VAR29 *VAR30 = FUN6(VAR10);
			VAR27.VAR31 = FUN7(VAR10);
			VAR27.VAR32 = VAR30->VAR32;
			if (VAR30->VAR33 & VAR34)
				VAR27.VAR33 = VAR35;
			else if (VAR30->VAR33 & VAR36)
				VAR27.VAR33 = VAR37;
			else if (VAR30->VAR33 & VAR38)
				VAR27.VAR33 = VAR39;
			else if (VAR30->VAR33 & VAR40)
				goto VAR28;
			else
				FUN8();
			if (VAR30->VAR33 & VAR41)
				VAR27.VAR33 |= VAR42;
		} else
			VAR27.VAR33 = VAR43;
		if (VAR10->VAR44 == VAR45) {
			VAR27.VAR7 = VAR46;
			VAR27.VAR47 = FUN9(VAR10);
			VAR27.VAR48 = VAR10->VAR48;
		} else if (VAR10->VAR44 == VAR49) {
			VAR27.VAR7 = VAR50;
		}
		VAR12 = FUN10(VAR5->VAR51, (void *)&VAR27,
				     VAR13);
		if (VAR12 < 0)
 			goto VAR28;
 	}
 	VAR11 = VAR10->VAR6;
 	if (VAR11 > VAR6) {
 		VAR11 = VAR6;
		VAR5->VAR52 |= VAR17;
	}
	VAR12 = FUN11(VAR10, 0, VAR5->VAR51, VAR11);
	if (VAR12)
		goto VAR28;
 	FUN12(VAR5, VAR8, VAR10);
	if (VAR5->VAR53) {
		if (VAR3->VAR54 == VAR55) {
			VAR5->VAR56 = sizeof(struct VAR57);
		} else {
			struct VAR58 *VAR59 = &FUN13(VAR10)->VAR60.VAR61;
			VAR5->VAR56 = VAR59->VAR62 +
				FUN14(struct VAR58, VAR63);
		}
 		memcpy(VAR5->VAR53, &FUN13(VAR10)->VAR60,
 		       VAR5->VAR56);
	}
 	if (FUN2(VAR8)->VAR64) {
 		struct tpacket_auxdata VAR65;
		VAR65.VAR66 = VAR67;
		if (VAR10->VAR44 == VAR45)
			VAR65.VAR66 |= VAR68;
		VAR65.VAR69 = FUN13(VAR10)->VAR70;
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
		FUN18(VAR5, VAR24, VAR77, sizeof(VAR65), &VAR65);
	}
	VAR12 = VAR13 + ((VAR7&VAR17) ? VAR10->VAR6 : VAR11);
VAR28:
	FUN19(VAR8, VAR10);
VAR20:
	return VAR12;
}