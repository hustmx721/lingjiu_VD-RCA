int * foo(void)
{
    int* ptr = malloc(sizeof(int));
    *ptr = 10;
    return ptr; 
}

void test(void)
{
	int * p = foo();
	if(p != NULL)
		free(p);
}