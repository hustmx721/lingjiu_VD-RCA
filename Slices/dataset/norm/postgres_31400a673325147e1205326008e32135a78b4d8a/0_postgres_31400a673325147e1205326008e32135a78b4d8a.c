FUN1(VAR1)
{
	char	   *VAR2 = FUN2(0);
#ifdef VAR3
	Oid			VAR4 = FUN3(1);
#VAR5
	int32		VAR6 = FUN4(2);
	VAR7	   *VAR8;
	char	   *VAR9;
	VAR10	   *VAR11;
	int			VAR12,
				VAR13,
				VAR14;
	bool		VAR15;
	int			VAR16;
	bits8		VAR17 = 0;
	if (VAR2[0] == VAR18 || VAR2[0] == VAR18)
	{
		VAR15 = true;
		VAR9 = VAR2 + 1;
	}
	else if (VAR2[0] == VAR18 || VAR2[0] == VAR18)
	{
		VAR15 = false;
		VAR9 = VAR2 + 1;
	}
	else
	{
		VAR15 = true;
 		VAR9 = VAR2;
 	}
 	VAR14 = strlen(VAR9);
 	if (VAR15)
 		VAR13 = VAR14;
 	else
	{
		if (VAR14 > VAR19 / 4)
			FUN5(VAR20,
					(FUN6(VAR21),
				 FUN7(VAR22,
						VAR19)));
 		VAR13 = VAR14 * 4;
	}
	if (VAR6 <= 0)
		VAR6 = VAR13;
	else if (VAR13 > VAR6)
		FUN5(VAR20,
				(FUN6(VAR23),
				 FUN7(VAR22,
						VAR6)));
	VAR12 = FUN8(VAR13);
	VAR8 = (VAR7 *) FUN9(VAR12);
	FUN10(VAR8, VAR12);
	FUN11(VAR8) = FUN12(VAR13, VAR6);
	VAR11 = FUN13(VAR8);
	if (VAR15)
	{
		VAR17 = VAR24;
		for (; *VAR9; VAR9++)
		{
			if (*VAR9 == VAR18)
				*VAR11 |= VAR17;
			else if (*VAR9 != VAR18)
				FUN5(VAR20,
						(FUN6(VAR25),
						 FUN7(VAR22%VAR26\VAR22,
								*VAR9)));
			VAR17 >>= 1;
			if (VAR17 == 0)
			{
				VAR17 = VAR24;
				VAR11++;
			}
		}
	}
	else
	{
		for (VAR16 = 0; *VAR9; VAR9++)
		{
			if (*VAR9 >= VAR18 && *VAR9 <= VAR18)
				VAR17 = (VAR10) (*VAR9 - VAR18);
			else if (*VAR9 >= VAR18 && *VAR9 <= VAR18)
				VAR17 = (VAR10) (*VAR9 - VAR18) + 10;
			else if (*VAR9 >= VAR18 && *VAR9 <= VAR18)
				VAR17 = (VAR10) (*VAR9 - VAR18) + 10;
			else
				FUN5(VAR20,
						(FUN6(VAR25),
						 FUN7(VAR22%VAR26\VAR22,
								*VAR9)));
			if (VAR16)
			{
				*VAR11++ |= VAR17;
				VAR16 = 0;
			}
			else
			{
				*VAR11 = VAR17 << 4;
				VAR16 = 1;
			}
		}
	}
	FUN14(VAR8);
}