static int FUN1(struct VAR1 *VAR2,
				unsigned long VAR3)
{
	struct VAR4 *VAR5 = VAR2->VAR5;
	struct VAR6 *VAR7, *VAR8, *VAR9;
	int VAR10;
	struct uffdio_register VAR11;
	struct uffdio_register VAR12 *VAR13;
	unsigned long VAR14, VAR15;
	bool VAR16;
	bool VAR17;
	unsigned long VAR18, VAR19, VAR20;
	VAR13 = (struct uffdio_register VAR12 *) VAR3;
	VAR10 = -VAR21;
	if (FUN2(&VAR11, VAR13,
			   sizeof(VAR11)-sizeof(VAR22)))
		goto VAR23;
	VAR10 = -VAR24;
	if (!VAR11.VAR25)
		goto VAR23;
	if (VAR11.VAR25 & ~(VAR26|
				     VAR27))
		goto VAR23;
	VAR14 = 0;
	if (VAR11.VAR25 & VAR26)
		VAR14 |= VAR28;
	if (VAR11.VAR25 & VAR27) {
		VAR14 |= VAR29;
		VAR10 = -VAR24;
		goto VAR23;
	}
	VAR10 = FUN3(VAR5, VAR11.VAR30.VAR18,
			     VAR11.VAR30.VAR31);
	if (VAR10)
		goto VAR23;
	VAR18 = VAR11.VAR30.VAR18;
	VAR19 = VAR18 + VAR11.VAR30.VAR31;
	VAR10 = -VAR32;
	if (!FUN4(VAR5))
 		goto VAR23;
 	FUN5(&VAR5->VAR33);
	if (!FUN6(VAR5))
		goto VAR34;
 	VAR7 = FUN7(VAR5, VAR18, &VAR8);
 	if (!VAR7)
 		goto VAR34;
	VAR10 = -VAR24;
	if (VAR7->VAR35 >= VAR19)
		goto VAR34;
	if (FUN8(VAR7)) {
		unsigned long VAR36 = FUN9(VAR7);
		if (VAR18 & (VAR36 - 1))
			goto VAR34;
	}
	VAR16 = false;
	VAR17 = false;
	for (VAR9 = VAR7; VAR9 && VAR9->VAR35 < VAR19; VAR9 = VAR9->VAR37) {
		FUN10();
		FUN11(!!VAR9->VAR38.VAR2 ^
		       !!(VAR9->VAR14 & (VAR28 | VAR29)));
		VAR10 = -VAR24;
		if (!FUN12(VAR9))
			goto VAR34;
		VAR10 = -VAR39;
		if (FUN13(!(VAR9->VAR14 & VAR40)))
			goto VAR34;
		if (FUN8(VAR9) && VAR19 <= VAR9->VAR41 &&
		    VAR19 > VAR9->VAR35) {
			unsigned long VAR36 = FUN9(VAR9);
			VAR10 = -VAR24;
			if (VAR19 & (VAR36 - 1))
				goto VAR34;
		}
		VAR10 = -VAR42;
		if (VAR9->VAR38.VAR2 &&
		    VAR9->VAR38.VAR2 != VAR2)
			goto VAR34;
		if (FUN8(VAR9))
			VAR17 = true;
		VAR16 = true;
	}
	FUN11(!VAR16);
	if (VAR7->VAR35 < VAR18)
		VAR8 = VAR7;
	VAR10 = 0;
	do {
		FUN10();
		FUN11(!FUN12(VAR7));
		FUN11(VAR7->VAR38.VAR2 &&
		       VAR7->VAR38.VAR2 != VAR2);
		FUN14(!(VAR7->VAR14 & VAR40));
		if (VAR7->VAR38.VAR2 == VAR2 &&
		    (VAR7->VAR14 & VAR14) == VAR14)
			goto VAR43;
		if (VAR7->VAR35 > VAR18)
			VAR18 = VAR7->VAR35;
		VAR20 = FUN15(VAR19, VAR7->VAR41);
		VAR15 = (VAR7->VAR14 & ~VAR14) | VAR14;
		VAR8 = FUN16(VAR5, VAR8, VAR18, VAR20, VAR15,
				 VAR7->VAR44, VAR7->VAR45, VAR7->VAR46,
				 FUN17(VAR7),
				 ((struct VAR38){ VAR2 }));
		if (VAR8) {
			VAR7 = VAR8;
			goto VAR47;
		}
		if (VAR7->VAR35 < VAR18) {
			VAR10 = FUN18(VAR5, VAR7, VAR18, 1);
			if (VAR10)
				break;
		}
		if (VAR7->VAR41 > VAR19) {
			VAR10 = FUN18(VAR5, VAR7, VAR19, 0);
			if (VAR10)
				break;
		}
	VAR47:
		VAR7->VAR14 = VAR15;
		VAR7->VAR38.VAR2 = VAR2;
	VAR43:
		VAR8 = VAR7;
		VAR18 = VAR7->VAR41;
		VAR7 = VAR7->VAR37;
	} while (VAR7 && VAR7->VAR35 < VAR19);
VAR34:
	FUN19(&VAR5->VAR33);
	FUN20(VAR5);
	if (!VAR10) {
		if (FUN21(VAR17 ? VAR48 :
			     VAR49,
			     &VAR13->VAR50))
			VAR10 = -VAR21;
	}
VAR23:
	return VAR10;
}