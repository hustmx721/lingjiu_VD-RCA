void foo(void)
{
	char * p = NULL;
	int size = 10;

	p = (char *)malloc(size * sizeof(char));

	if(p != NULL)
		free(p);
}