static inline struct VAR1 *FUN1(struct VAR2 *VAR3)
 {
 	struct VAR1 *VAR4;
	FUN2(&VAR3->VAR5);
 	VAR4 = FUN3(&VAR3->VAR5);
 	VAR3->VAR6 = &VAR4->VAR7;
	FUN4(&VAR4->VAR7);
	return VAR4;
}