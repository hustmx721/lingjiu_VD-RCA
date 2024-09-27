VAR1 *FUN1( VAR2 *VAR3, int VAR4 )
{
	int VAR5;
	VAR1 *VAR6 = 0, *VAR7 = 0, *VAR8 = FUN2();
	for ( VAR5 = 0; VAR8 && VAR5 < VAR4; ++VAR5 ) {
		VAR6 = FUN3( VAR3[VAR5] );
		if ( ! VAR5 )
			VAR8->VAR9 = VAR6;
		else
			FUN4( VAR7, VAR6 );
		VAR7 = VAR6;
	}
	return VAR8;
}