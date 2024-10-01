void foo(void)
{
	int i;

	for(i = 0; i < 10; i++)
	{
		int * p = (int *)malloc(sizeof(int));
		if(p != NULL)
			*p = 1;
	}
}