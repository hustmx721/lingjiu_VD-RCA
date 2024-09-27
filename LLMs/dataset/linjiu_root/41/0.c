void foo2 (int * a)
{
	free(a);
}

void foo1 (int * a)
{
	foo2(a);
}

void foo() 
{ 
	int * a;
	a = (int *) malloc(sizeof (int)); 
	foo1(a);
}