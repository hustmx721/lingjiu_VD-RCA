static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
 {
 	struct crypto_report_comp VAR5;
	snprintf(VAR5.VAR6, VAR7, VAR8, VAR8);
 	if (FUN2(VAR2, VAR9,
 		    sizeof(struct VAR10), &VAR5))
 		goto VAR11;
	return 0;
VAR11:
	return -VAR12;
}