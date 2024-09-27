void foo(char *explanation)
{
	char *p1; 
	p1 = (char *)malloc(100); 
	sprintf(p1,"The f1 error occurred because of '%s'.", explanation); 
	local_log(p1); 
}