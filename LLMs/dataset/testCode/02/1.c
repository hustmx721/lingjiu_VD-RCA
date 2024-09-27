int * foo(void)
{
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));

	return p;
}

int main(void)
{
	int * p;
	p = foo();

	*p = 10;
	return 0;
}