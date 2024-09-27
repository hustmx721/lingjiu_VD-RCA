FUN1(VAR1 *VAR2,
        const struct VAR3 *VAR4, u_int VAR5)
{
	int VAR6;
	const struct VAR7 *VAR8;
 	const VAR9 *VAR10 = VAR2->VAR11;
 	FUN2((VAR2, VAR12));
	if (VAR5 < sizeof(*VAR4) || !FUN3(*VAR4))
 		return (-1);
 	VAR6 = FUN4(&VAR4->VAR13);
 	VAR8 = (const struct VAR7 *)(VAR4 + 1);
 	while (--VAR6 >= 0 && FUN3(*VAR8)) {
		const struct VAR14 *VAR15, *VAR16;
		char VAR17 = VAR18;
		FUN2((VAR2, VAR12,
		    FUN4(&VAR8->VAR19),
		    FUN5(VAR2, &VAR8->VAR20.VAR21),
		    FUN4(&VAR8->VAR20.VAR22)));
		VAR15 = (const struct VAR14 *)(VAR8 + 1);
		for (VAR16 = VAR15 + VAR8->VAR23; VAR15 < VAR16 && FUN3(*VAR15); ++VAR15) {
			FUN2((VAR2, VAR12, VAR17, FUN5(VAR2, &VAR15->VAR24),
			    FUN4(&VAR15->VAR25)));
			VAR17 = VAR18;
		}
		FUN2((VAR2, VAR12));
		VAR8 = (const struct VAR7 *)VAR15;
	}
	return ((const VAR9 *)VAR8 <= VAR10? 0 : -1);
}