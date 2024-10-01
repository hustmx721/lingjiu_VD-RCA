struct testCode {
	char i;
	int a;
	int * b;
	int * c[10];
};

void foo(void)
{
	int j;
	struct testCode * testST;
	int * testVal;
	
	testST = (struct testCode *)malloc(sizeof(struct testCode));
	
	testST->c[4] = (int *)malloc(sizeof(int));
	testST->c[9] = (int *)malloc(sizeof(int));
	testST->c[13] = (int *)malloc(sizeof(int));
	
	testVal = (int *)malloc(sizeof(int));
	
	for(j = 0; j < 10; j++)
	{
		if(testST->c[j] != NULL)
			free(testST->c[j]);
	}
	
	free(testVal);
	free(testST);
}

int main(void)
{
	foo();
	
	return 0;
}