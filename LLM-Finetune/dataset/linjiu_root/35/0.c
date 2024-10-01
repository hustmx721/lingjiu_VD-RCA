int * foo(void)
{
	int i;
	int * p[10] = NULL;

	for(i = 0; i < 10; i++)
	{
		p[i] = (int *)malloc(sizeof(int));
	}

	for(i = 0; i < 10; i++)
	{
		free(p[i]);
	}
}