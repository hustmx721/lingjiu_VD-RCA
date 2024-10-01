struct testCode {
	int a;
	int * b;
	int c[10];
};

void foo(void)
{
	int j;
	struct testCode testST;
	
	testST.a = 1;
	
	testST.b = (int *)malloc(sizeof(int));
	
	for(j = 0; j < 10; j++)
	{
		testST.c[j] = j;
	}
	
	if(testST.b != NULL)
		free(testST.b);
}

int main(void)
{
	foo();
	
	return 0;
}