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
	struct node * p;
	p = malloc(sizeof(struct node *));
}