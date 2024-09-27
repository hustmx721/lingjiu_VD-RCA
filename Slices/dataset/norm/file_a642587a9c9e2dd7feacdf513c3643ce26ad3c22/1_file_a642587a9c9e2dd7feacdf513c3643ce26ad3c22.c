FUN1(struct VAR1 *VAR2, unsigned char *VAR3, uint32_t VAR4,
    int VAR5, uint32_t VAR6, uint32_t VAR7,
    size_t VAR8, size_t VAR9, int *VAR10, size_t VAR11, int VAR12)
{
#ifdef VAR13
	int VAR14 = -1;
	if ((VAR6 == 4 && strncmp((char *)&VAR3[VAR8], VAR15, 4) == 0) ||
	    (VAR6 == 5 && strcmp((char *)&VAR3[VAR8], VAR15) == 0)) {
		VAR14 = VAR16;
	}
	if ((VAR6 == 8 && strcmp((char *)&VAR3[VAR8], VAR15) == 0)) {
		VAR14 = VAR17;
	}
	if ((VAR6 >= 11 && strncmp((char *)&VAR3[VAR8], VAR15, 11)
	    == 0)) {
		VAR14 = VAR18;
	}
	if (VAR14 != -1 && (*VAR10 & VAR19) == 0) {
		if (FUN2(VAR2, VAR15, VAR20[VAR14])
		    == -1)
			return 1;
		*VAR10 |= VAR19;
		*VAR10 |= VAR14;
	}
	switch (VAR14) {
	case VAR18:
		if (VAR4 == VAR21) {
			char VAR22[512];
			struct NetBSD_elfcore_procinfo VAR23;
			memset(&VAR23, 0, sizeof(VAR23));
			memcpy(&VAR23, VAR3 + VAR9, VAR7);
			if (FUN2(VAR2, VAR15
			    VAR15,
			    FUN3(VAR22, sizeof(VAR22),
			    FUN4(char *, VAR23.VAR24)),
			    FUN5(VAR5, (VAR25)VAR23.VAR26),
			    FUN5(VAR5, VAR23.VAR27),
			    FUN5(VAR5, VAR23.VAR28),
			    FUN5(VAR5, VAR23.VAR29),
			    FUN5(VAR5, (VAR25)VAR23.VAR30),
			    FUN5(VAR5, VAR23.VAR31),
			    FUN5(VAR5, VAR23.VAR32)) == -1)
				return 1;
			*VAR10 |= VAR33;
			return 1;
		}
		break;
	default:
		if (VAR4 == VAR34 && *VAR10 & VAR35) {
			size_t VAR36, VAR37;
			unsigned char VAR38;
			for (VAR36 = 0; VAR36 < VAR39; VAR36++) {
				unsigned char *VAR40, *VAR41;
				size_t VAR42 = FUN6(VAR36);
				size_t VAR43 = VAR9 + VAR42;
				size_t VAR44;
				for (VAR37 = 0; VAR37 < 16; VAR37++, VAR43++,
				    VAR42++) {
					if (VAR43 >= VAR11)
						goto VAR45;
					if (VAR42 >= VAR7)
						goto VAR45;
					VAR38 = VAR3[VAR43];
					if (VAR38 == VAR46) {
						if (VAR37 == 0)
							goto VAR45;
						else
							break;
					} else {
						if (!FUN7(VAR38) || FUN8(VAR38))
							goto VAR45;
					}
				}
				for (VAR44 = VAR36 + 1 ; VAR44 < VAR39; VAR44++) {
					size_t VAR47;
					int VAR48 = 1;
					if (FUN6(VAR44) >= FUN6(VAR36))
						continue;
					for (VAR47 = VAR9 + FUN6(VAR44);
					     VAR47 < VAR9 + FUN6(VAR36); VAR47++)
						VAR48 = VAR48
						         && FUN7(VAR3[VAR47]);
					if (VAR48)
						VAR36 = VAR44;
				}
 				VAR40 = (unsigned char *)
 				    &VAR3[VAR9 + FUN6(VAR36)];
				for (VAR41 = VAR40; *VAR41 && FUN7(*VAR41); VAR41++)
 					continue;
				while (VAR41 > VAR40 && FUN9(VAR41[-1]))
					VAR41--;
				if (FUN2(VAR2, VAR15,
				    (int)(VAR41 - VAR40), VAR40) == -1)
					return 1;
				*VAR10 |= VAR33;
				return 1;
			VAR45:
				;
			}
		}
		break;
	}
#VAR49
	return 0;
}