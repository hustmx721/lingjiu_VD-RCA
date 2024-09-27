FUN1(struct VAR1 *VAR2,
	      const struct VAR3 *VAR4,
	      struct VAR5 *VAR6)
{
	unsigned int VAR7 = VAR4->VAR7;
	static const char VAR8[VAR9] FUN2((FUN3(sizeof(long))));
	unsigned int VAR10 = VAR11;
	const char *VAR12, *VAR13;
	const void *VAR14;
	struct VAR15 *VAR16, **VAR17;
	unsigned int VAR18, VAR19;
	const struct VAR20 *private;
	struct xt_action_param VAR21;
	unsigned int VAR22;
	VAR18 = 0;
	VAR12 = VAR4->VAR23 ? VAR4->VAR23->VAR24 : VAR8;
	VAR13 = VAR4->VAR25 ? VAR4->VAR25->VAR24 : VAR8;
	VAR21.VAR26 = false;
	VAR21.VAR4   = VAR4;
	FUN4(!(VAR6->VAR27 & (1 << VAR7)));
	FUN5();
	VAR22 = FUN6();
	private = FUN7(VAR6->private);
	VAR19        = FUN8();
	VAR14 = private->VAR28;
	VAR17  = (struct VAR15 **)private->VAR17[VAR19];
	if (FUN9(&VAR29))
		VAR17 += private->VAR30 * FUN10(VAR31);
	VAR16 = FUN11(VAR14, private->VAR32[VAR7]);
	do {
		const struct VAR33 *VAR34;
		const struct VAR35 *VAR36;
		struct VAR37 *VAR38;
		FUN4(!VAR16);
		VAR21.VAR39 = 0;
		if (!FUN12(VAR2, VAR12, VAR13, &VAR16->VAR40,
		    &VAR21.VAR39, &VAR21.VAR41, &VAR21.VAR26)) {
 VAR42:
			VAR16 = FUN13(VAR16);
			continue;
		}
		FUN14(VAR36, VAR16) {
			VAR21.VAR43     = VAR36->VAR44.VAR45.VAR43;
			VAR21.VAR46 = VAR36->VAR47;
			if (!VAR21.VAR43->FUN15(VAR2, &VAR21))
				goto VAR42;
		}
		VAR38 = FUN16(&VAR16->VAR48);
		FUN17(*VAR38, VAR2->VAR49, 1);
		VAR34 = FUN18(VAR16);
		FUN4(!VAR34->VAR44.VAR45.VAR50);
#if FUN19(VAR51)
		if (FUN20(VAR2->VAR52))
			FUN21(VAR4->VAR53, VAR2, VAR7, VAR4->VAR23,
				     VAR4->VAR25, VAR6->VAR24, private, VAR16);
#VAR54
		if (!VAR34->VAR44.VAR45.VAR50->VAR50) {
			int VAR55;
			VAR55 = ((struct VAR56 *)VAR34)->VAR10;
			if (VAR55 < 0) {
				if (VAR55 != VAR57) {
					VAR10 = (unsigned int)(-VAR55) - 1;
					break;
				}
				if (VAR18 == 0)
					VAR16 = FUN11(VAR14,
					    private->VAR58[VAR7]);
				else
					VAR16 = FUN13(VAR17[--VAR18]);
				continue;
 			}
 			if (VAR14 + VAR55 != FUN13(VAR16) &&
 			    !(VAR16->VAR40.VAR59 & VAR60)) {
				if (FUN20(VAR18 >= private->VAR30)) {
					VAR10 = VAR11;
					break;
				}
 				VAR17[VAR18++] = VAR16;
 			}
			VAR16 = FUN11(VAR14, VAR55);
			continue;
		}
		VAR21.VAR50   = VAR34->VAR44.VAR45.VAR50;
		VAR21.VAR61 = VAR34->VAR47;
		VAR10 = VAR34->VAR44.VAR45.VAR50->FUN22(VAR2, &VAR21);
		if (VAR10 == VAR62)
			VAR16 = FUN13(VAR16);
		else
			break;
	} while (!VAR21.VAR26);
	FUN23(VAR22);
	FUN24();
	if (VAR21.VAR26)
		return VAR11;
	else return VAR10;
}