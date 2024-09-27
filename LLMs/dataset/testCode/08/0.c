void foo(int test1)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		p = (int *)malloc(sizeof(int));
		if(p != NULL)
			free(p);
		else
			continue;
		test1++;
	}
	printf("test1 = %d\n",test1);
}

int main(void)
{
	int test1 = 0;
	foo(test1);
	return 0;
}