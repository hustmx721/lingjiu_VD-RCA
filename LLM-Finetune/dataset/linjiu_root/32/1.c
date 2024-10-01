struct student
{
    char *name;   
    int score;
};

int * foo(void)
{
    struct student * pstu = NULL;
    pstu = (struct student *)malloc(sizeof(struct student *)); 
    strcpy(pstu->name, "code");
    pstu->score = 99;
    free(pstu);
    return 0;
}
