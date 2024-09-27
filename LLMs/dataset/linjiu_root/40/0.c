int foo() 
{ 
	struct x *xp; 
	xp = (struct x *) malloc(sizeof (struct x)); 
	xp.q = 13;
	
	int a = xp.q;
	free(xp)
	return a; 
}