int VAR1 FUN1(struct VAR2 *VAR3, unsigned long VAR4,
			    unsigned long VAR5)
{
	struct VAR6 * VAR7;
	struct VAR8 *VAR9 = VAR10->VAR9;
	siginfo_t VAR11;
	int VAR12 = VAR13;
	int VAR14 = 0, VAR15;
	int VAR16 = FUN2(VAR3);
 	int VAR17 = VAR16 == 0x400;
#if !(FUN3(VAR18) || FUN3(VAR19))
	if (VAR16 == 0x400)
		VAR5 &= 0x48200000;
	else
		VAR14 = VAR5 & VAR20;
#else
	VAR14 = VAR5 & VAR21;
#VAR22
	if (FUN4(VAR3))
		return 0;
	if (FUN5(FUN6(VAR3)))
		return 0;
	if (!FUN7(VAR3) && (VAR4 >= VAR23))
		return VAR24;
#if !(FUN3(VAR18) || FUN3(VAR19) || \
			     FUN3(VAR25))
  	if (VAR5 & VAR26) {
		FUN8(VAR3, VAR4, VAR5);
		return 0;
	}
#VAR22
	if (FUN9() || VAR9 == NULL) {
		if (!FUN7(VAR3))
			return VAR24;
		FUN10(KERN_EMERG VAR27
		       VAR27, FUN9(), VAR9);
		FUN10(KERN_EMERG VAR27,
		       VAR3->VAR28, VAR3->VAR29);
 		FUN11(VAR27, VAR3, VAR24);
 	}
	FUN12(VAR30, 1, 0, VAR3, VAR4);
	if (!FUN13(&VAR9->VAR31)) {
		if (!FUN7(VAR3) && !FUN14(VAR3->VAR28))
			goto VAR32;
		FUN15(&VAR9->VAR31);
	}
	VAR7 = FUN16(VAR9, VAR4);
	if (!VAR7)
		goto VAR33;
	if (VAR7->VAR34 <= VAR4)
		goto VAR35;
	if (!(VAR7->VAR36 & VAR37))
		goto VAR33;
	if (VAR4 + 0x100000 < VAR7->VAR38) {
		struct VAR2 *VAR39 = VAR10->VAR40.VAR3;
		if (VAR39 == NULL)
			goto VAR33;
		if (VAR4 + 2048 < VAR39->VAR41[1]
		    && (!FUN7(VAR3) || !FUN17(VAR3)))
			goto VAR33;
	}
	if (FUN18(VAR7, VAR4))
		goto VAR33;
VAR35:
	VAR12 = VAR42;
#if FUN3(VAR43)
	if (VAR5 & 0x95700000)
		goto VAR33;
#VAR22
#if FUN3(VAR44)
	if (VAR5 & 0x40000000)
		FUN19(VAR4, 0, 0, 0);
	if (VAR5 & 0x10000000)
		goto VAR33;
#VAR22
	if (VAR17) {
#ifdef VAR45
		if (VAR5 & VAR46)
			goto VAR33;
#VAR22
		if (!(VAR7->VAR36 & VAR47) &&
		    (FUN20(VAR48) ||
		     !(VAR7->VAR36 & (VAR49 | VAR50))))
			goto VAR33;
	} else if (VAR14) {
		if (!(VAR7->VAR36 & VAR50))
			goto VAR33;
	} else {
		if (VAR5 & 0x08000000)
			goto VAR33;
		if (!(VAR7->VAR36 & (VAR49 | VAR47 | VAR50)))
			goto VAR33;
	}
	VAR15 = FUN21(VAR9, VAR7, VAR4, VAR14 ? VAR51 : 0);
	if (FUN5(VAR15 & VAR52)) {
		if (VAR15 & VAR53)
			goto VAR54;
		else if (VAR15 & VAR55)
			goto VAR56;
		FUN22();
 	}
 	if (VAR15 & VAR57) {
 		VAR10->VAR58++;
		FUN12(VAR59, 1, 0,
 				     VAR3, VAR4);
 #ifdef VAR60
 		if (FUN23(VAR61)) {
			FUN24();
			FUN25()->VAR62 += (1 << VAR63);
			FUN26();
		}
 #VAR22
 	} else {
 		VAR10->VAR64++;
		FUN12(VAR65, 1, 0,
 				     VAR3, VAR4);
 	}
 	FUN27(&VAR9->VAR31);
	return 0;
VAR33:
	FUN27(&VAR9->VAR31);
VAR32:
	if (FUN7(VAR3)) {
		FUN28(VAR24, VAR3, VAR12, VAR4);
		return 0;
	}
	if (VAR17 && (VAR5 & VAR46)
	    && FUN29())
		FUN10(KERN_CRIT VAR27
		       VAR27,
		       VAR4, FUN30());
	return VAR24;
VAR54:
	FUN27(&VAR9->VAR31);
	if (!FUN7(VAR3))
		return VAR66;
	FUN31();
	return 0;
VAR56:
	FUN27(&VAR9->VAR31);
	if (FUN7(VAR3)) {
		VAR11.VAR67 = VAR68;
		VAR11.VAR69 = 0;
		VAR11.VAR70 = VAR71;
		VAR11.VAR72 = (void VAR73 *)VAR4;
		FUN32(VAR68, &VAR11, VAR10);
		return 0;
	}
	return VAR68;
}