static char *FUN1( VAR1 *VAR2, int VAR3, int VAR4 )
 {
 	char **VAR5;
	char *VAR6 = 0, *VAR7, *VAR8;
	int VAR9 = 5;
	VAR1 *VAR10 = VAR2->VAR10;
	int VAR11 = 0, VAR12 = 0, VAR13 = 0;
	while ( VAR10 ) {
		++VAR11;
		VAR10 = VAR10->VAR14;
	}
	if ( ! ( VAR5 = (char**) FUN2( VAR11 * sizeof(char*) ) ) )
		return 0;
	memset( VAR5, 0, VAR11 * sizeof(char*) );
	VAR10 = VAR2->VAR10;
	while ( VAR10 && ! VAR13 ) {
		VAR8 = FUN3( VAR10, VAR3 + 1, VAR4 );
		VAR5[VAR12++] = VAR8;
		if ( VAR8 )
			VAR9 += strlen( VAR8 ) + 2 + ( VAR4 ? 1 : 0 );
		else
			VAR13 = 1;
		VAR10 = VAR10 -> VAR14;
	}
	if ( ! VAR13 ) {
		VAR6 = (char*) FUN2( VAR9 );
		if ( ! VAR6 )
			VAR13 = 1;
	}
	if ( VAR13 ) {
		for ( VAR12 = 0; VAR12 < VAR11; ++VAR12 )
			if ( VAR5[VAR12] )
				FUN4( VAR5[VAR12] );
		FUN4( VAR5 );
		return 0;
 	}
	*VAR6 = VAR15;
	VAR7 = VAR6 + 1;
	*VAR7 = 0;
	for ( VAR12 = 0; VAR12 < VAR11; ++VAR12 ) {
		strcpy( VAR7, VAR5[VAR12] );
		VAR7 += strlen( VAR5[VAR12] );
		if ( VAR12 != VAR11 - 1 ) {
			*VAR7++ = VAR15;
			if ( VAR4 )
				*VAR7++ = VAR15;
			*VAR7 = 0;
 		}
		FUN4( VAR5[VAR12] );
 	}
	FUN4( VAR5 );
	*VAR7++ = VAR15;
	*VAR7++ = 0;
 	return VAR6;
 }