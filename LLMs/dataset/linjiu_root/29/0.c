int * foo(void)
{
    return (int *) malloc(10);
}

void test(void)
{
	int * a = foo();
	if(a != NULL)
		free(a);
}