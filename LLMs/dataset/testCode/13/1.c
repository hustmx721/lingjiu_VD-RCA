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
	
	free(&testST.a);
	
	free(testST.b);
		
	for(j = 0; j < 10; j++)
	{
		free(&testST.c[j]);
	}
}

int main(void)
{
	foo();
	
	return 0;
}