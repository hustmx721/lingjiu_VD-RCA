struct testStruct_1 {
	char a;
	short b;
	int c;
};

void foo(void)
{
	struct testStruct_1 * p;
	p = malloc(sizeof(struct testStruct_1 *));
}
