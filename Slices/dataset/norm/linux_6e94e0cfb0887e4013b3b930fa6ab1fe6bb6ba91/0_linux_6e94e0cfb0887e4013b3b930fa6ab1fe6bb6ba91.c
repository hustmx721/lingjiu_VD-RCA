static inline int FUN1(struct VAR1 *VAR2,
					     struct VAR3 *VAR4,
					     const unsigned char *VAR5,
					     const unsigned char *VAR6,
					     const unsigned int *VAR7,
					     const unsigned int *VAR8,
					     unsigned int VAR9)
{
	unsigned int VAR10;
 	int VAR11;
 	if ((unsigned long)VAR2 % FUN2(struct VAR1) != 0 ||
	    (unsigned char *)VAR2 + sizeof(struct VAR1) >= VAR6 ||
	    (unsigned char *)VAR2 + VAR2->VAR12 > VAR6) {
 		FUN3(VAR13, VAR2);
 		return -VAR14;
 	}
	if (VAR2->VAR12
	    < sizeof(struct VAR1) + sizeof(struct VAR15)) {
		FUN3(VAR13,
			 VAR2, VAR2->VAR12);
		return -VAR14;
	}
	VAR11 = FUN4(VAR2);
	if (VAR11)
		return VAR11;
	for (VAR10 = 0; VAR10 < VAR16; VAR10++) {
		if (!(VAR9 & (1 << VAR10)))
			continue;
		if ((unsigned char *)VAR2 - VAR5 == VAR7[VAR10])
			VAR4->VAR17[VAR10] = VAR7[VAR10];
		if ((unsigned char *)VAR2 - VAR5 == VAR8[VAR10]) {
			if (!FUN5(VAR2)) {
				FUN6(VAR13
				       VAR13
				       VAR13);
				return -VAR14;
			}
			VAR4->VAR18[VAR10] = VAR8[VAR10];
		}
	}
	VAR2->VAR19 = ((struct VAR20) { 0, 0 });
	VAR2->VAR21 = 0;
	return 0;
}