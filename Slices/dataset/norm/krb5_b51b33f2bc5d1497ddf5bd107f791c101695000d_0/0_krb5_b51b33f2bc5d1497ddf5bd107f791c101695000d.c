FUN1(
			    VAR1 *VAR2,
			    VAR3 *VAR4,
			    gss_buffer_t VAR5)
{
	OM_uint32 VAR6 = VAR7;
	VAR8 *VAR9 =
		    (VAR8 *)VAR4;
	*VAR2 = 0;
	if (VAR4 == NULL)
		return (VAR10);
 	if (*VAR9 == NULL)
 		return (VAR7);
	(void) FUN2(VAR2, &(*VAR9)->VAR11,
				      VAR5);
	(void) FUN3(VAR9);
 	return (VAR6);
 }