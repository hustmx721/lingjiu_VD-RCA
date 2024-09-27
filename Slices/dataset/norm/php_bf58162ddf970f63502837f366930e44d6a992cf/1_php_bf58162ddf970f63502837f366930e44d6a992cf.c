FUN1(VAR1, VAR2)
{
        if (FUN2() == VAR3) {
                return;
        }
        FUN3(VAR4);
        FUN4(VAR4, VAR5, 3, 1);
	FUN4(VAR4, VAR5, 5, 1);
#ifdef VAR6
	FUN4(VAR4, VAR5, 7, 1);
	FUN4(VAR4, VAR5, 7, 1);
#VAR7
#if VAR8
	FUN4(VAR4, VAR5, 7, 1);
#else
	if (FUN5(&VAR9, VAR5, sizeof(VAR5))) {
		FUN4(VAR4, VAR5, 7, 1);
	}
#VAR7
}