struct testCode {
	char i;
	int a;
	int * b;
	int c[10];
};

void foo(void)
{
	int j;
	struct testCode * testST;
	
	testST = (struct testCode *)malloc(sizeof(struct testCode));
	
	testST->a = 1;
	
	testST->b = (int *)malloc(sizeof(int));
	
	for(j = 0; j < 10; j++)
	{
		testST->c[j] = j;
	}
	
	free(&testST->i);
	free(&testST->a);
	free(testST->b);
	free(testST->c);
}

int main(void)
{
	foo();
	
	return 0;
}