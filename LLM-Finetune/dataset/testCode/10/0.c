void foo(void)
{
	int i[10];
	int j;
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));
	
	if(p != NULL)
		free(p);
	
	for(j = 0; j < 10; j++)
	{
		i[j] = j;
	}
}

int main(void)
{
	foo();
	
	return 0;
}