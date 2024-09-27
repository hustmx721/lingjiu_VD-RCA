static int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
		    struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10 = FUN2(VAR8);
	struct VAR11 *VAR12;
	struct VAR13 *VAR14;
	long VAR15;
	unsigned int VAR16;
	u32 VAR17;
	int VAR18;
	if (FUN3(!VAR6))
		return -VAR19;
	FUN4(VAR8);
	if (FUN3(VAR3->VAR20 == VAR21)) {
		VAR18 = -VAR22;
 		goto VAR23;
 	}
	VAR5->VAR24 = 0;
 	VAR15 = FUN5(VAR8, VAR7 & VAR25);
 VAR26:
	while (FUN6(&VAR8->VAR27)) {
		if (VAR3->VAR20 == VAR28) {
			VAR18 = -VAR22;
			goto VAR23;
		}
		if (VAR15 <= 0L) {
			VAR18 = VAR15 ? VAR15 : -VAR29;
			goto VAR23;
		}
		FUN7(VAR8);
		VAR15 = FUN8(*FUN9(VAR8),
							   FUN10(VAR3),
							   VAR15);
		FUN4(VAR8);
	}
	VAR12 = FUN11(&VAR8->VAR27);
	VAR14 = FUN12(VAR12);
	VAR16 = FUN13(VAR14);
	VAR17 = FUN14(VAR14);
	if ((!VAR16) && (!VAR17)) {
		FUN15(VAR8);
		goto VAR26;
	}
	FUN16(VAR5, VAR14);
	VAR18 = FUN17(VAR5, VAR14, VAR10);
	if (VAR18)
		goto VAR23;
	if (!VAR17) {
		if (FUN3(VAR6 < VAR16)) {
			VAR16 = VAR6;
			VAR5->VAR30 |= VAR31;
		}
		VAR18 = FUN18(VAR12, FUN19(VAR14),
					      VAR5->VAR32, VAR16);
		if (VAR18)
			goto VAR23;
		VAR18 = VAR16;
	} else {
		if ((VAR3->VAR20 == VAR33) ||
		    ((VAR17 == VAR34) || VAR5->VAR35))
			VAR18 = 0;
		else
			VAR18 = -VAR36;
	}
	if (FUN20(!(VAR7 & VAR37))) {
		if ((VAR3->VAR20 != VAR33) &&
		    (++VAR10->VAR38 >= VAR39))
			FUN21(VAR10->VAR40, VAR10->VAR38);
		FUN15(VAR8);
	}
VAR23:
	FUN7(VAR8);
	return VAR18;
}