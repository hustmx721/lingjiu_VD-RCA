int * foo(void)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		p = (int *)malloc(sizeof(int));
		if(p != NULL)
			*p = 1;
		free(p);
	}
}