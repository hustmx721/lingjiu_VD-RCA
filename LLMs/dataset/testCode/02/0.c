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
		return 0;
	free(p);
	return 0;
}