VAR1 *FUN1( void )
{
	VAR1 *VAR2 = FUN2();
	if ( VAR2 )
		VAR2->VAR3 = VAR4;
	return VAR2;
}