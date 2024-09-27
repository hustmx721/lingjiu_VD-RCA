void foo(void)
{
	int * p = NULL;

	p = (int *)malloc(2 * sizeof(int));

	if(p != NULL)
		free(p);
}