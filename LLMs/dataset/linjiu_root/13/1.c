void foo(void)
{
	int i;
	int * p = (int *)malloc(sizeof(int));
	if(p != NULL)
		*p = 1;

	for(i = 0; i < 10; i++)
	{
		free(p);
	}
}