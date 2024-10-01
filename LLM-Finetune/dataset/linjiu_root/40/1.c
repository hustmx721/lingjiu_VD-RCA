int foo() 
{ 
	struct x *xp; 
	xp = (struct x *) malloc(sizeof (struct x)); 
	xp.q = 13;
	free(xp);
	return xp.q; 
}