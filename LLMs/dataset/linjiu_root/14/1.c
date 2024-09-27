void foo(void)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		free(p);
	}
}
