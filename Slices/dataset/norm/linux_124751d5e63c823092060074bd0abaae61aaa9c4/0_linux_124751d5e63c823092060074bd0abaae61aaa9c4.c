 void FUN1(struct VAR1 *VAR2)
 {
	if (VAR2->VAR3)
		return;
	if (VAR2->VAR4)
		FUN2(VAR2->VAR4);
	if (VAR2->VAR5)
		FUN2(VAR2->VAR5);
	VAR2->VAR3 = true;
 }