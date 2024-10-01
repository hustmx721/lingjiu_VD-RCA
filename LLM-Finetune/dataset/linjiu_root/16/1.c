void foo(void)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 5; i++)
	{
		p = (int *)malloc(sizeof(int));
		if(p != NULL)
		{
			free(p);
			free(p);
		}
	}
}