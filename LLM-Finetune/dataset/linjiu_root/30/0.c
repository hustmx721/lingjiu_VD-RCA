struct student
{
    char *name;   
    int score;
}stu;

int * foo(void)
{
		char a[16];
		stu.name = a;
		
		strcpy(stu.name, "code");
    stu.score = 99;
    return 0;
}