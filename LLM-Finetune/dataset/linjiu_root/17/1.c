void foo(void)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		p = (int *)malloc(sizeof(int));
	}

	for(i = 0; i < 5; i++)
	{
		free(p);
	}
}