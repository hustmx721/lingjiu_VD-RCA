int * foo(void)
{
	int i,j;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		p = (int *)malloc(sizeof(int));
	}

	for(j = 0; j < 10; j++)
	{
		free(p);
	}
}