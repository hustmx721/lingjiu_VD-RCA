struct testCode {
	char i;
	int a;
	int * b;
	int * c[10];
};

struct testCode * foo(void)
{
	int j;
	struct testCode * testST;
	char * testVal;
	
	testST = (struct testCode *)malloc(sizeof(struct testCode));
	testVal = (char *)malloc(sizeof(int));
	
	free(testVal);
	
	return testST;
}

int main(void)
{
	struct testCode * p;
	
	p = foo();
	
	return 0;
}