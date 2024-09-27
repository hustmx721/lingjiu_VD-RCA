FUN1(VAR1 *VAR2, const VAR3 *VAR4)
FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5)
 {
 	const VAR6 *VAR7 = (const VAR6 *)VAR4;
	if (VAR5 < 4) {
		FUN2((VAR2, VAR8));
		return;
	}
 	if (FUN3(VAR7) &  VAR9) {
 		FUN2((VAR2, VAR8));
 	}
	if (FUN3(VAR7) &  VAR10) {
		FUN2((VAR2, VAR8));
	}
 }