struct testStruct_1 {
	char a;
	short b;
	int c;
};


void foo(void)
{
	struct testStruct_1 * p = NULL;
	p = (struct testStruct_1 *)malloc(sizeof(struct testStruct_1));
	if(p != NULL)
		free(p);
}