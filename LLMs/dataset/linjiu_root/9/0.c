struct testStruct_2 {
	int a;
};

struct node {
	struct node * next;
	struct node * pre;
	struct testStruct_2 * p;
};

void foo(void)
{
	struct node * p = NULL;
	p = (struct node *)malloc(sizeof(struct node));
	if(p != NULL)
		free(p);
}