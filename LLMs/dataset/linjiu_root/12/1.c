void foo(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		int * p = malloc(sizeof(int));
		if(p != NULL)
			*p = 1;
	}
	free(p);
}