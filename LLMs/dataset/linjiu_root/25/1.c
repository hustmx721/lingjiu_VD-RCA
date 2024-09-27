int * foo(void)
{
    int a = 10;
    int* ptr = &a;
    return ptr; 
}

void test(void)
{
	int * p = foo();
	if(p != NULL)
		free(p);
}