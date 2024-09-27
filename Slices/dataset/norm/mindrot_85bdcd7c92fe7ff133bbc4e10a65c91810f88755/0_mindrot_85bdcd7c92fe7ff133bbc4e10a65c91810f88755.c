FUN1(VAR1 *VAR2, const char *VAR3)
{
	struct VAR4 *VAR4 = VAR5;
	char VAR6[256];
	u_int VAR7, VAR8;
	char **VAR9, *VAR10;
	struct VAR11 *VAR12 = VAR2->VAR12;
#if !FUN2 (VAR13) && !FUN2 (VAR14)
	char *VAR15 = NULL;
#VAR16
	VAR8 = 100;
	VAR9 = xcalloc(VAR8, sizeof(char *));
	VAR9[0] = NULL;
#ifdef VAR14
	{
		char **VAR17;
		VAR17 = FUN3();
		FUN4(VAR17, &VAR9, &VAR8);
		FUN5(VAR17);
	}
#VAR16
#ifdef VAR18
	FUN6(&VAR9, &VAR8);
#VAR16
	if (!VAR19.VAR20) {
		for (VAR7 = 0; VAR7 < VAR2->VAR21; VAR7++)
			FUN7(&VAR9, &VAR8, VAR2->VAR9[VAR7].VAR22,
			    VAR2->VAR9[VAR7].VAR23);
		FUN7(&VAR9, &VAR8, VAR24, VAR12->VAR25);
		FUN7(&VAR9, &VAR8, VAR24, VAR12->VAR25);
#ifdef VAR26
		FUN7(&VAR9, &VAR8, VAR24, VAR12->VAR25);
#VAR16
		FUN7(&VAR9, &VAR8, VAR24, VAR12->VAR27);
#ifdef VAR13
		if (FUN8(VAR28, VAR12, VAR12->VAR29, VAR30) < 0)
			FUN7(&VAR9, &VAR8, VAR24, VAR31);
		else
			FUN7(&VAR9, &VAR8, VAR24, getenv(VAR24));
#else
# ifndef VAR14
#  ifdef VAR32
		FUN9(&VAR9, &VAR8, VAR12->VAR29);
		VAR15 = FUN10(VAR9, VAR24);
#  VAR16
		if (VAR15 == NULL || *VAR15 == VAR33) {
			FUN7(&VAR9, &VAR8, VAR24,
			    VAR2->VAR12->VAR29 == 0 ?
				VAR34 : VAR31);
		}
# VAR16
#VAR16
		snprintf(VAR6, sizeof VAR6, VAR24,
			 VAR35, VAR12->VAR25);
		FUN7(&VAR9, &VAR8, VAR24, VAR6);
		FUN7(&VAR9, &VAR8, VAR24, VAR3);
	}
	if (getenv(VAR24))
		FUN7(&VAR9, &VAR8, VAR24, getenv(VAR24));
	if (!VAR19.VAR20) {
		while (VAR36) {
			struct VAR37 *VAR38 = VAR36;
			char *VAR39 = VAR38->VAR2;
			for (VAR7 = 0; VAR39[VAR7] != VAR33 && VAR39[VAR7]; VAR7++)
				;
			if (VAR39[VAR7] == VAR33) {
				VAR39[VAR7] = 0;
				FUN7(&VAR9, &VAR8, VAR39, VAR39 + VAR7 + 1);
			}
			VAR36 = VAR38->VAR40;
			free(VAR38->VAR2);
			free(VAR38);
		}
	}
	snprintf(VAR6, sizeof VAR6, VAR24,
	    FUN11(VAR4), FUN12(VAR4),
	    FUN13(VAR4));
	FUN7(&VAR9, &VAR8, VAR24, VAR6);
	VAR10 = FUN14(FUN15());
	snprintf(VAR6, sizeof VAR6, VAR24,
	    FUN11(VAR4), FUN12(VAR4),
	    VAR10, FUN13(VAR4));
	free(VAR10);
	FUN7(&VAR9, &VAR8, VAR24, VAR6);
	if (VAR2->VAR41 != -1)
		FUN7(&VAR9, &VAR8, VAR24, VAR2->VAR42);
	if (VAR2->VAR43)
		FUN7(&VAR9, &VAR8, VAR24, VAR2->VAR43);
	if (VAR2->VAR44)
		FUN7(&VAR9, &VAR8, VAR24, VAR2->VAR44);
	if (VAR45)
		FUN7(&VAR9, &VAR8, VAR24,
		    VAR45);
#ifdef VAR46
	if (VAR47[0] != VAR33)
		FUN7(&VAR9, &VAR8, VAR24, VAR47);
#VAR16
	{
		char *VAR48;
		if ((VAR48 = getenv(VAR24)) != NULL)
			FUN7(&VAR9, &VAR8, VAR24, VAR48);
	}
#ifdef VAR26
	{
		char *VAR48;
		if ((VAR48 = getenv(VAR24)) != NULL)
			FUN7(&VAR9, &VAR8, VAR24, VAR48);
		FUN16(&VAR9, &VAR8, VAR24);
	}
#VAR16
#ifdef VAR49
	if (VAR2->VAR50->VAR51)
		FUN7(&VAR9, &VAR8, VAR24,
		    VAR2->VAR50->VAR51);
#VAR16
#ifdef VAR52
	if (VAR19.VAR53 && !VAR19.VAR20) {
 		char **VAR17;
 		VAR17 = FUN17();
		FUN4(VAR17, &VAR9, &VAR8);
		FUN18(VAR17);
		VAR17 = FUN19();
		FUN4(VAR17, &VAR9, &VAR8);
		FUN18(VAR17);
	}
#VAR16
	if (VAR54 != NULL)
		FUN7(&VAR9, &VAR8, VAR55,
		    VAR54);
	if (VAR19.VAR56 && !VAR19.VAR20) {
		snprintf(VAR6, sizeof VAR6, VAR24,
		    strcmp(VAR12->VAR27, VAR24) ? VAR12->VAR27 : VAR24);
		FUN16(&VAR9, &VAR8, VAR6);
	}
	if (VAR57) {
		fprintf(VAR58, VAR24);
		for (VAR7 = 0; VAR9[VAR7]; VAR7++)
			fprintf(VAR58, VAR24, VAR9[VAR7]);
	}
	return VAR9;
}