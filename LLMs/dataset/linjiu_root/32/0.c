struct student
{
    char *name;   
    int score;
};


int * foo(void)
{
		struct student * pstu = (struct student *)malloc(sizeof(struct student));
		char a[16];
		pstu->name = a;
		
    strcpy(pstu->name, "code");
    pstu->score = 99;
    free(pstu);
    return 0;
}