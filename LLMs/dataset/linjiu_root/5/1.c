struct testStruct_1 {
	char a;
	short b;
	int c;
};

void foo(void)
{
	struct testStruct_1 * p;

	p = (struct testStruct_1 *)malloc(sizeof(int));
}