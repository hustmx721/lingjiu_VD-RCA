FUN1(VAR1 *VAR2, const VAR3 *VAR4)
FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5)
 {
	if (VAR5 < 2) {
		FUN2((VAR2, VAR6));
		return;
	}
 	FUN2((VAR2, VAR6, (FUN3(VAR4) >> 8),
 	    (FUN3(VAR4) & 0xff)));
 }