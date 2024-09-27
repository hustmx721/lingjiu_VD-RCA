int FUN1(int VAR1, void *VAR2, int *VAR3)
{
	struct net_hdr VAR4;
	int VAR5;
	if (FUN2(VAR1, &VAR4, sizeof(VAR4)) == -1)
        {
		return -1;
        }
	VAR5 = FUN3(VAR4.VAR6);
 	if (!(VAR5 <= *VAR3))
 		printf(VAR7,
 			VAR5, VAR4.VAR8, *VAR3);
	assert(VAR5 <= *VAR3);
 	*VAR3 = VAR5;
 	if ((*VAR3) && (FUN2(VAR1, VAR2, *VAR3) == -1))
        {
            return -1;
        }
	return VAR4.VAR8;
}