int * foo(void)
{
	int * p = NULL;
	
	p = (int *)malloc(sizeof(int));
	if(p != NULL)
		return p;
	else
		return NULL;
}

int main(void)
{
	int * p;
	p = foo();
	if(p != NULL)
		*p = 10;
	else
		{
		free(p);
		return 0;
		}
	
	return 0;
}