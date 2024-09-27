void foo1() 
{ 
	*a += 1;
}

void foo2(int * a)
{
	*a = 10;
	foo1(a);
}

void foo3(int * a)
{
	int * a = (int *)malloc(sizeof(int));
	if (a != NULL)
		foo2(a);
}
