void foo(void)
{
	int * p = NULL;
	int size;

	size = 10;

	p = (int *)malloc(size * sizeof(int));

	if(p != NULL)
		free(p);
}