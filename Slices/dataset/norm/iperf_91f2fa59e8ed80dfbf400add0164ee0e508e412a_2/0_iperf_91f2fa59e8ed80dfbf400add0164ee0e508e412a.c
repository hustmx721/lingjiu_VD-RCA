static char *FUN1( VAR1 *VAR2, int VAR3, int VAR4 )
static char *FUN1(VAR1 *VAR2,int VAR3,int VAR4,VAR5 *VAR6)
 {
 	char **VAR7;
	char *VAR8=0,*VAR9,*VAR10;int VAR11=5;
	VAR1 *VAR12=VAR2->VAR12;
	int VAR13=0,VAR14=0,VAR15=0;
	size_t VAR16=0;
	while (VAR12) VAR13++,VAR12=VAR12->VAR17;
	if (!VAR13)
	{
		if (VAR6)	VAR8=FUN2(VAR6,3);
		else	VAR8=(char*)FUN3(3);
		if (VAR8) strcpy(VAR8,VAR18);
		return VAR8;
	}
	if (VAR6)
	{
		VAR14=VAR6->VAR19;
		VAR9=FUN2(VAR6,1);if (!VAR9) return 0;	*VAR9=VAR20;	VAR6->VAR19++;
		VAR12=VAR2->VAR12;
		while (VAR12 && !VAR15)
		{
			FUN4(VAR12,VAR3+1,VAR4,VAR6);
			VAR6->VAR19=update(VAR6);
			if (VAR12->VAR17) {VAR11=VAR4?2:1;VAR9=FUN2(VAR6,VAR11+1);if (!VAR9) return 0;*VAR9++=VAR20;if(VAR4)*VAR9++=VAR20;*VAR9=0;VAR6->VAR19+=VAR11;}
			VAR12=VAR12->VAR17;
		}
		VAR9=FUN2(VAR6,2);if (!VAR9) return 0;	*VAR9++=VAR20;*VAR9=0;
		VAR8=(VAR6->VAR21)+VAR14;
 	}
	else
	{
		VAR7=(char**)FUN3(VAR13*sizeof(char*));
		if (!VAR7) return 0;
		memset(VAR7,0,VAR13*sizeof(char*));
		VAR12=VAR2->VAR12;
		while (VAR12 && !VAR15)
		{
			VAR10=FUN4(VAR12,VAR3+1,VAR4,0);
			VAR7[VAR14++]=VAR10;
			if (VAR10) VAR11+=strlen(VAR10)+2+(VAR4?1:0); else VAR15=1;
			VAR12=VAR12->VAR17;
 		}
		if (!VAR15)	VAR8=(char*)FUN3(VAR11);
		if (!VAR8) VAR15=1;
		if (VAR15)
		{
			for (VAR14=0;VAR14<VAR13;VAR14++) if (VAR7[VAR14]) FUN5(VAR7[VAR14]);
			FUN5(VAR7);
			return 0;
		}
		*VAR8=VAR20;
		VAR9=VAR8+1;*VAR9=0;
		for (VAR14=0;VAR14<VAR13;VAR14++)
		{
			VAR16=strlen(VAR7[VAR14]);memcpy(VAR9,VAR7[VAR14],VAR16);VAR9+=VAR16;
			if (VAR14!=VAR13-1) {*VAR9++=VAR20;if(VAR4)*VAR9++=VAR20;*VAR9=0;}
			FUN5(VAR7[VAR14]);
		}
		FUN5(VAR7);
		*VAR9++=VAR20;*VAR9++=0;
 	}
 	return VAR8;
 }