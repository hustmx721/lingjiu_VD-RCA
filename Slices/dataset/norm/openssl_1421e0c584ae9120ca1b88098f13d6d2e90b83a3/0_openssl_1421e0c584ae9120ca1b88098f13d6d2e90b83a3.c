int FUN1(VAR1 *VAR2)
	{
	VAR3 *VAR4=NULL;
	unsigned char *VAR5;
	int VAR6,VAR7,VAR8=0;
	long VAR9;
	int VAR10=0,VAR11,VAR12;
	VAR13 *VAR14;
	const VAR15 *VAR16 = NULL;
	EVP_MD_CTX VAR17;
	EVP_MD_CTX_init(&VAR17);
	VAR9=VAR2->VAR18->FUN2(VAR2,
		VAR19,
		VAR20,
		-1,
		VAR21,
		&VAR7);
	if (!VAR7) return((int)VAR9);
	if (VAR2->VAR22->VAR14 != NULL)
		{
		VAR14=VAR2->VAR22->VAR14;
		VAR4=FUN3(VAR14);
		VAR10=FUN4(VAR14,VAR4);
		}
	else
		{
		VAR14=NULL;
		VAR4=NULL;
		}
 	if (VAR2->VAR23->VAR24.VAR25 != VAR26)
 		{
 		VAR2->VAR23->VAR24.VAR27=1;
		if (VAR14 != NULL)
 			{
 			VAR6=VAR28;
 			FUN5(VAR29,VAR30);
			goto VAR31;
			}
		VAR8=1;
		goto VAR32;
		}
	if (VAR14 == NULL)
		{
		FUN5(VAR29,VAR33);
		VAR6=VAR28;
		goto VAR31;
		}
	if (!(VAR10 & VAR34))
		{
		FUN5(VAR29,VAR35);
		VAR6=VAR36;
		goto VAR31;
		}
	if (VAR2->VAR23->VAR37)
		{
		FUN5(VAR29,VAR38);
		VAR6=VAR28;
		goto VAR31;
		}
	VAR5=(unsigned char *)VAR2->VAR39;
	if (VAR9==64 && (VAR4->VAR10==VAR40 ||
		VAR4->VAR10 == VAR41) )
		{
		VAR11=64;
		}
	else
		{
		if (FUN6(VAR2))
			{
			int VAR42 = FUN7(&VAR16, VAR2, VAR5, VAR4);
			if (VAR42 == -1)
				{
				VAR6 = VAR43;
				goto VAR31;
				}
			else if (VAR42 == 0)
				{
				VAR6 = VAR44;
				goto VAR31;
				}
#ifdef VAR45
fprintf(VAR46, VAR47, FUN8(VAR16));
#VAR48
			VAR5 += 2;
			VAR9 -= 2;
			}
		FUN9(VAR5,VAR11);
		VAR9-=2;
		if (VAR11 > VAR9)
			{
			FUN5(VAR29,VAR49);
			VAR6=VAR44;
			goto VAR31;
			}
    	}
	VAR12=FUN10(VAR4);
	if ((VAR11 > VAR12) || (VAR9 > VAR12) || (VAR9 <= 0))
		{
		FUN5(VAR29,VAR50);
		VAR6=VAR44;
		goto VAR31;
		}
	if (FUN6(VAR2))
		{
		long VAR51 = 0;
		void *VAR52;
		VAR51 = FUN11(VAR2->VAR23->VAR53, &VAR52);
		if (VAR51 <= 0)
			{
			FUN5(VAR29, VAR54);
			VAR6=VAR43;
			goto VAR31;
			}
#ifdef VAR45
		fprintf(VAR46, VAR47,
							FUN8(VAR16));
#VAR48
		if (!FUN12(&VAR17, VAR16, NULL)
			|| !FUN13(&VAR17, VAR52, VAR51))
			{
			FUN5(VAR29, VAR55);
			VAR6=VAR43;
			goto VAR31;
			}
		if (FUN14(&VAR17, VAR5 , VAR11, VAR4) <= 0)
			{
			VAR6=VAR56;
			FUN5(VAR29,VAR57);
			goto VAR31;
			}
		}
	else
#ifndef VAR58
	if (VAR4->VAR10 == VAR59)
		{
		VAR11=FUN15(VAR60, VAR2->VAR23->VAR24.VAR61,
			VAR62+VAR63, VAR5, VAR11,
							VAR4->VAR4.VAR64);
		if (VAR11 < 0)
			{
			VAR6=VAR56;
			FUN5(VAR29,VAR65);
			goto VAR31;
			}
		if (VAR11 == 0)
			{
			VAR6=VAR56;
			FUN5(VAR29,VAR66);
			goto VAR31;
			}
		}
	else
#VAR48
#ifndef VAR67
		if (VAR4->VAR10 == VAR68)
		{
		VAR12=FUN16(VAR4->VAR69,
			&(VAR2->VAR23->VAR24.VAR61[VAR62]),
			VAR63,VAR5,VAR11,VAR4->VAR4.VAR70);
		if (VAR12 <= 0)
			{
			VAR6=VAR56;
			FUN5(VAR29,VAR71);
			goto VAR31;
			}
		}
	else
#VAR48
#ifndef VAR72
		if (VAR4->VAR10 == VAR73)
		{
		VAR12=FUN17(VAR4->VAR69,
			&(VAR2->VAR23->VAR24.VAR61[VAR62]),
			VAR63,VAR5,VAR11,VAR4->VAR4.VAR74);
		if (VAR12 <= 0)
			{
			VAR6=VAR56;
			FUN5(VAR29,
			    VAR75);
			goto VAR31;
			}
		}
	else
#VAR48
	if (VAR4->VAR10 == VAR40 || VAR4->VAR10 == VAR41)
		{   unsigned char VAR76[64];
			int VAR77;
			VAR78 *VAR79 = FUN18(VAR4,NULL);
			FUN19(VAR79);
			if (VAR11!=64) {
				fprintf(VAR46,VAR47,VAR11);
			}
			for (VAR77=0;VAR77<64;VAR77++) {
				VAR76[63-VAR77]=VAR5[VAR77];
			}
			VAR12=FUN20(VAR79,VAR76,64,VAR2->VAR23->VAR24.VAR61,32);
			FUN21(VAR79);
			if (VAR12<=0)
				{
				VAR6=VAR56;
				FUN5(VAR29,
					VAR75);
				goto VAR31;
				}
		}
	else
		{
		FUN5(VAR29,VAR54);
		VAR6=VAR80;
		goto VAR31;
		}
	VAR8=1;
	if (0)
		{
VAR31:
		FUN22(VAR2,VAR81,VAR6);
		}
VAR32:
	if (VAR2->VAR23->VAR53)
		{
		FUN23(VAR2->VAR23->VAR53);
		VAR2->VAR23->VAR53 = NULL;
		VAR2->VAR23->VAR82 &= ~VAR83;
		}
	FUN24(&VAR17);
	FUN25(VAR4);
	return(VAR8);
	}