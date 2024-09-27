int * foo(void)
{
	int i;
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		p = (int *)malloc(sizeof(int));
		if(p != NULL)
			*p = 1;
		else
			continue;
		if(i >= 6)
			return p;
	}
}

int main(void)
{
	int * p;
	p = foo();
	free(p);
	return 0;
}