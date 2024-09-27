void foo(void)
{
	int * i[10];
	int j;
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));
	
	for(j = 0; j < 10; j++)
	{
		i[j] = (int *)malloc(sizeof(int));
	}
		
	for(j = 0; j < 10; j++)
	{
		free(i[j]);
	}
}

int main(void)
{
	foo();
	
	return 0;
}