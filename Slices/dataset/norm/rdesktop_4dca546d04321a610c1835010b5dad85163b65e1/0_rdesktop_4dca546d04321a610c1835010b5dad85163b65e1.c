FUN1(VAR1 * VAR2, int VAR3, int VAR4, VAR1 * VAR5, int VAR6)
{
	FUN2(VAR6);
	int VAR7;
	int VAR8;
	int VAR9;
	int VAR10;
	int VAR11;
	int VAR12;
	int VAR13;
	int VAR14;
	VAR1 * VAR15;
	VAR1 * VAR16;
	VAR1 * VAR17;
	VAR1 * VAR18;
	VAR17 = VAR2;
	VAR18 = VAR5;
	VAR15 = 0;
	VAR8 = 0;
	while (VAR8 < VAR4)
	{
		VAR5 = (VAR18 + VAR3 * VAR4 * 4) - ((VAR8 + 1) * VAR3 * 4);
		VAR12 = 0;
		VAR16 = VAR5;
		VAR7 = 0;
		if (VAR15 == 0)
		{
			while (VAR7 < VAR3)
			{
				VAR9 = FUN3(VAR2);
				VAR11 = VAR9 & 0xf;
				VAR10 = (VAR9 >> 4) & 0xf;
				VAR14 = (VAR11 << 4) | VAR10;
				if ((VAR14 <= 47) && (VAR14 >= 16))
				{
 					VAR11 = VAR14;
 					VAR10 = 0;
 				}
				while (VAR7 < VAR3 && VAR10 > 0)
 				{
 					VAR12 = FUN3(VAR2);
 					*VAR5 = VAR12;
 					VAR5 += 4;
 					VAR7++;
 					VAR10--;
 				}
				while (VAR7 < VAR3 && VAR11 > 0)
 				{
 					*VAR5 = VAR12;
 					VAR5 += 4;
					VAR7++;
					VAR11--;
				}
			}
		}
		else
		{
			while (VAR7 < VAR3)
			{
				VAR9 = FUN3(VAR2);
				VAR11 = VAR9 & 0xf;
				VAR10 = (VAR9 >> 4) & 0xf;
				VAR14 = (VAR11 << 4) | VAR10;
				if ((VAR14 <= 47) && (VAR14 >= 16))
				{
 					VAR11 = VAR14;
 					VAR10 = 0;
 				}
				while (VAR7 < VAR3 && VAR10 > 0)
 				{
 					VAR13 = FUN3(VAR2);
 					if (VAR13 & 1)
					{
						VAR13 = VAR13 >> 1;
						VAR13 = VAR13 + 1;
						VAR12 = -VAR13;
					}
					else
					{
						VAR13 = VAR13 >> 1;
						VAR12 = VAR13;
					}
					VAR13 = VAR15[VAR7 * 4] + VAR12;
					*VAR5 = VAR13;
					VAR5 += 4;
 					VAR7++;
 					VAR10--;
 				}
				while (VAR7 < VAR3 && VAR11 > 0)
 				{
 					VAR13 = VAR15[VAR7 * 4] + VAR12;
 					*VAR5 = VAR13;
					VAR5 += 4;
					VAR7++;
					VAR11--;
				}
			}
		}
		VAR8++;
		VAR15 = VAR16;
	}
	return (int) (VAR2 - VAR17);
}