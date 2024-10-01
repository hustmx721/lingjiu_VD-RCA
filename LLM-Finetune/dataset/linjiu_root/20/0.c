void foo(void)
{
	int * ptr = NULL;
	
	ptr = (int*)malloc(sizeof(int));
	if(ptr != NULL)
		{
		*ptr = 10;
		free(ptr);
		}
}