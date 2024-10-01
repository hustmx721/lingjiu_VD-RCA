int * foo(void)
{
    return (int *) malloc(10);
}

void test(void)
{
	foo();
}