void foo(void)
{
	int * ptr1 = NULL;
	int * ptr2 = NULL;
	
	ptr1 = (int*)malloc(sizeof(int));
	if(ptr1 != NULL)
		free(ptr1);
		
	ptr2 = (int*)malloc(sizeof(int));
	if(ptr2 != NULL)
		free(ptr2);
}