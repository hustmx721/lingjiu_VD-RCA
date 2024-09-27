void foo(void)
{
	int i[10];
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));
	
	if(p != NULL)
		free(p);
}

int main(void)
{
	foo();
	
	return 0;
}