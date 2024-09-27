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
	
	testVal = (int *)malloc(sizeof(int));
	
	free(testST);
}

int main(void)
{
	foo();
	
	return 0;
}