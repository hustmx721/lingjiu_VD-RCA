static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
				  VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10,
				  int VAR11, char *VAR12, int VAR13,
				  int VAR14) {
	struct VAR15 *VAR16 = VAR2->VAR16;
	const VAR17 *VAR18 = FUN2 (VAR2->VAR19, VAR14, NULL);
	const VAR17 *VAR20 = VAR18 + VAR2->VAR19->VAR21 - VAR14;
	ut64 VAR22;
	ut64 VAR23;
	ut64 VAR24;
	ut16 VAR25 = VAR13 - VAR10;
	ut64 VAR26 = VAR6->VAR27;
	VAR28 *VAR29, *VAR30, *VAR31 = NULL;
	bool VAR32 = true;
	if (VAR25 > VAR13) {
		return;
	}
	VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR22);
	VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR23);
	ut32 VAR33 = 0;
	ut32 VAR34 = VAR22;
	if (!(VAR30 = FUN4 ((VAR35)free))) {
		return;
	}
	if (!(VAR31 = FUN4 ((VAR35)free))) {
		FUN5 (VAR30);
		return;
	}
	struct dex_debug_local_t VAR36[VAR13];
	memset (VAR36, 0, sizeof (struct VAR37) * VAR13);
	if (!(VAR8 & 0x0008)) {
		VAR36[VAR25].VAR38 = VAR39;
		VAR36[VAR25].VAR40 = FUN6(VAR39, VAR12);
		VAR36[VAR25].VAR41 = 0;
		VAR36[VAR25].VAR42 = NULL;
		VAR36[VAR25].VAR43 = true;
		VAR25++;
	}
	if (!(VAR29 = FUN7 (VAR4, VAR7))) {
		FUN5 (VAR30);
		FUN5 (VAR31);
		return;
	}
	VAR44 *VAR45 = FUN8 (VAR29);
	char *VAR38;
	char *VAR46;
	int VAR47;
	FUN9 (VAR29, VAR45, VAR46) {
		if ((VAR25 >= VAR13) || !VAR46 || VAR23 <= 0) {
			FUN5 (VAR30);
			FUN5 (VAR29);
			FUN5 (VAR31);
			return;
		}
		VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR24);
		VAR24 -= 1;
		VAR38 = FUN10 (VAR4, VAR24);
		VAR47 = VAR25;
		switch (VAR46[0]) {
		case VAR48:
		case VAR48:
			VAR25 += 2;
			break;
		default:
			VAR25 += 1;
			break;
		}
		if (VAR38) {
			VAR36[VAR47].VAR38 = VAR38;
			VAR36[VAR47].VAR40 = VAR46;
			VAR36[VAR47].VAR42 = NULL;
			VAR36[VAR47].VAR41 = VAR33;
			VAR36[VAR47].VAR43 = true;
		}
 		--VAR23;
 	}
 	ut8 VAR49 = *(VAR18++) & 0xff;
 	while (VAR32) {
 		switch (VAR49) {
		case 0x0:
			VAR32 = false;
			break;
		case 0x1:
			{
			ut64 VAR50;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR50);
			VAR33 += VAR50;
			}
			break;
		case 0x2:
			{
			st64 VAR51 = FUN11 (&VAR18, VAR20);
			VAR34 += VAR51;
			}
			break;
		case 0x3:
			{
			ut64 VAR52;
			ut64 VAR53;
			ut64 VAR54;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52);
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR53);
			VAR53 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR54);
			VAR54 -= 1;
			if (VAR52 >= VAR13) {
				FUN5 (VAR30);
				FUN5 (VAR29);
				return;
			}
			if (VAR36[VAR52].VAR43) {
				struct VAR37 *VAR55 = malloc (
					sizeof (struct VAR37));
				if (!VAR55) {
					VAR32 = false;
					break;
				}
				VAR55->VAR38 = VAR36[VAR52].VAR38;
				VAR55->VAR40 = VAR36[VAR52].VAR40;
				VAR55->VAR41 = VAR36[VAR52].VAR41;
				VAR55->VAR42 = VAR36[VAR52].VAR42;
				VAR55->VAR43 = true;
				VAR55->VAR47 = VAR52;
				VAR55->VAR56 = VAR33;
				FUN12 (VAR31, VAR55);
			}
			VAR36[VAR52].VAR38 = FUN10 (VAR4, VAR53);
			VAR36[VAR52].VAR40 = FUN13 (VAR4, VAR54);
			VAR36[VAR52].VAR41 = VAR33;
			VAR36[VAR52].VAR42 = NULL;
			VAR36[VAR52].VAR43 = true;
			}
			break;
		case 0x4:
			{
			ut64 VAR52;
			ut64 VAR53;
			ut64 VAR54;
			ut64 VAR57;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52);
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR53);
			VAR53 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR54);
			VAR54 -= 1;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR57);
			VAR57 -= 1;
			if (VAR52 >= VAR13) {
				FUN5 (VAR30);
				FUN5 (VAR29);
				return;
			}
			if (VAR36[VAR52].VAR43) {
				struct VAR37 *VAR55 = malloc (
					sizeof (struct VAR37));
				if (!VAR55) {
					VAR32 = false;
					break;
				}
				VAR55->VAR38 = VAR36[VAR52].VAR38;
				VAR55->VAR40 = VAR36[VAR52].VAR40;
				VAR55->VAR41 = VAR36[VAR52].VAR41;
				VAR55->VAR42 = VAR36[VAR52].VAR42;
				VAR55->VAR43 = true;
				VAR55->VAR47 = VAR52;
				VAR55->VAR56 = VAR33;
				FUN12 (VAR31, VAR55);
			}
			VAR36[VAR52].VAR38 = FUN10 (VAR4, VAR53);
			VAR36[VAR52].VAR40 = FUN13 (VAR4, VAR54);
			VAR36[VAR52].VAR41 = VAR33;
			VAR36[VAR52].VAR42 = FUN10 (VAR4, VAR57);
			VAR36[VAR52].VAR43 = true;
			}
			break;
		case 0x5:
			{
			ut64 VAR52;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52);
			if (VAR36[VAR52].VAR43) {
				struct VAR37 *VAR55 = malloc (
					sizeof (struct VAR37));
				if (!VAR55) {
					VAR32 = false;
					break;
				}
				VAR55->VAR38 = VAR36[VAR52].VAR38;
				VAR55->VAR40 = VAR36[VAR52].VAR40;
				VAR55->VAR41 = VAR36[VAR52].VAR41;
				VAR55->VAR42 = VAR36[VAR52].VAR42;
				VAR55->VAR43 = true;
				VAR55->VAR47 = VAR52;
				VAR55->VAR56 = VAR33;
				FUN12 (VAR31, VAR55);
			}
			VAR36[VAR52].VAR43 = false;
			}
			break;
		case 0x6:
			{
			ut64 VAR52;
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR52);
			if (!VAR36[VAR52].VAR43) {
				VAR36[VAR52].VAR41 = VAR33;
				VAR36[VAR52].VAR43 = true;
			}
			}
			break;
		case 0x7:
			break;
		case 0x8:
			break;
		case 0x9:
			{
			VAR18 = FUN3 (VAR18, VAR20 - VAR18, &VAR26);
			VAR26--;
			}
			break;
		default:
			{
			int VAR58 = VAR49 - 0x0a;
			VAR33 += (VAR58 / 15);
			VAR34 += -4 + (VAR58 % 15);
			struct VAR59 *VAR60 =
				malloc (sizeof (struct VAR59));
			if (!VAR60) {
				VAR32 = false;
				break;
			}
			VAR60->VAR26 = VAR26;
			VAR60->VAR33 = VAR33;
			VAR60->VAR34 = VAR34;
			FUN12 (VAR30, VAR60);
			}
			break;
		}
		VAR49 = *(VAR18++) & 0xff;
	}
	if (!VAR2->VAR61) {
		VAR2->VAR61 = FUN14 ();
	}
	char *VAR62;
	char VAR63[64];
	char *VAR64;
	VAR44 *VAR65;
	struct VAR59 *VAR66;
	FUN9 (VAR30, VAR65, VAR66) {
		VAR62 = FUN6 (VAR67, FUN10 (VAR4, VAR66->VAR26), VAR66->VAR34);
		VAR64 = FUN15 (VAR66->VAR33 + VAR9, VAR63, 16);
		FUN16 (VAR2->VAR61, VAR64, VAR62, 0);
		FUN16 (VAR2->VAR61, VAR62, VAR64, 0);
	}
	if (!VAR68) {
		FUN5 (VAR30);
		FUN5 (VAR31);
		FUN5 (VAR29);
		return;
	}
	VAR44 *VAR69;
	struct VAR59 *VAR60;
	VAR16->FUN17 (VAR39);
	FUN9 (VAR30, VAR69, VAR60) {
		VAR16->FUN17 (VAR39,
				 VAR60->VAR33, VAR60->VAR34);
	}
	VAR16->FUN17 (VAR39);
	VAR44 *VAR70;
	struct VAR37 *VAR55;
	FUN9 (VAR31, VAR70, VAR55) {
		if (VAR55->VAR42) {
			VAR16->FUN17 (
				VAR39,
				VAR55->VAR41, VAR55->VAR56,
				VAR55->VAR47, VAR55->VAR38, VAR55->VAR40,
				VAR55->VAR42);
		} else {
			VAR16->FUN17 (
				VAR39,
				VAR55->VAR41, VAR55->VAR56,
				VAR55->VAR47, VAR55->VAR38, VAR55->VAR40);
		}
	}
	for (VAR47 = 0; VAR47 < VAR13; VAR47++) {
		if (VAR36[VAR47].VAR43) {
			if (VAR36[VAR47].VAR42) {
				VAR16->FUN17 (
					VAR39
					VAR39,
					VAR36[VAR47].VAR41,
					VAR11, VAR47, VAR36[VAR47].VAR38,
					VAR36[VAR47].VAR40,
					VAR36[VAR47].VAR42);
			} else {
				VAR16->FUN17 (
					VAR39
					VAR39,
					VAR36[VAR47].VAR41,
					VAR11, VAR47, VAR36[VAR47].VAR38,
					VAR36[VAR47].VAR40);
			}
		}
	}
	FUN5 (VAR30);
	FUN5 (VAR31);
	FUN5 (VAR29);
}