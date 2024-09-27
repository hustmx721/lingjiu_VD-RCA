static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
 {
 	struct crypto_report_comp VAR5;
	strncpy(VAR5.VAR6, VAR7, sizeof(VAR5.VAR6));
 	if (FUN2(VAR2, VAR8,
 		    sizeof(struct VAR9), &VAR5))
 		goto VAR10;
	return 0;
VAR10:
	return -VAR11;
}