void foo(void)
{
	int i[10];
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));
	
	if(p != NULL)
		{
		*p = 1;
		free(p);
		}
	free(i);
}

int main(void)
{
	foo();
	
	return 0;
}