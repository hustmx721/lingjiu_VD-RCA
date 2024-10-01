void foo2 (int * a)
{
	int * b;
	free(b);
}

void foo1 (int * a)
{
	int * b;
	b = a;
	foo2(b);
}

void foo() 
{ 
	int * a;
	a = (int *) malloc(sizeof (int)); 
	foo1(a);
}
