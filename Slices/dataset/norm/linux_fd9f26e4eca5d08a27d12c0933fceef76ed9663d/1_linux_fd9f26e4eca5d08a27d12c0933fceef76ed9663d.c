static int FUN1(struct VAR1 *VAR2,
                             struct snd_ctl_tlv VAR3 *VAR4,
                             int VAR5)
{
	struct VAR6 *VAR7 = VAR2->VAR7;
	struct snd_ctl_tlv VAR8;
	struct VAR9 *VAR10;
	struct VAR11 *VAR12;
	unsigned int VAR13;
	int VAR14 = 0;
	if (FUN2(&VAR8, VAR4, sizeof(VAR8)))
		return -VAR15;
	if (VAR8.VAR16 < sizeof(unsigned int) * 2)
		return -VAR17;
	FUN3(&VAR7->VAR18);
	VAR10 = FUN4(VAR7, VAR8.VAR19);
	if (VAR10 == NULL) {
		VAR14 = -VAR20;
		goto VAR21;
	}
	if (VAR10->VAR8.VAR22 == NULL) {
		VAR14 = -VAR23;
		goto VAR21;
	}
	VAR12 = &VAR10->VAR12[VAR8.VAR19 - VAR10->VAR24.VAR19];
	if ((VAR5 == 0 && (VAR12->access & VAR25) == 0) ||
	    (VAR5 > 0 && (VAR12->access & VAR26) == 0) ||
	    (VAR5 < 0 && (VAR12->access & VAR27) == 0)) {
	    	VAR14 = -VAR23;
	    	goto VAR21;
	}
	if (VAR12->access & VAR28) {
		if (VAR12->VAR29 != NULL && VAR12->VAR29 != VAR2) {
			VAR14 = -VAR30;
			goto VAR21;
 		}
 		VAR14 = VAR10->VAR8.FUN5(VAR10, VAR5, VAR8.VAR16, VAR4->VAR8);
 		if (VAR14 > 0) {
 			FUN6(&VAR7->VAR18);
			FUN7(VAR7, VAR31, &VAR10->VAR24);
 			return 0;
 		}
 	} else {
		if (VAR5) {
			VAR14 = -VAR23;
			goto VAR21;
		}
		VAR13 = VAR10->VAR8.VAR22[1] + 2 * sizeof(unsigned int);
		if (VAR8.VAR16 < VAR13) {
			VAR14 = -VAR32;
			goto VAR21;
		}
		if (FUN8(VAR4->VAR8, VAR10->VAR8.VAR22, VAR13))
			VAR14 = -VAR15;
	}
      VAR21:
	FUN6(&VAR7->VAR18);
	return VAR14;
}