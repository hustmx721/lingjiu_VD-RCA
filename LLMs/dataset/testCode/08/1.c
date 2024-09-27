void foo(void)
{
	int i;
	int j[10] = {0};
	int * p = NULL;

	for(i = 0; i < 10; i++)
	{
		if(i < 5)
			{
			p = (int *)malloc(sizeof(int));
			if(p != NULL)
				*p = 1;
			else
				continue;
			j[i] = 1;
			}
	}
	
	for(i = 0; i < 10; i++)
	{
		if(j[i] != 0)
			free(p);
	}
}

int main(void)
{
	foo();

	return 0;
}