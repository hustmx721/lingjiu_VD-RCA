struct student
{
    char *name;   
    int score;
}stu;

int * foo(void)
{
    strcpy(stu.name, "code");
    stu.score = 99;
    return 0;
}