void foo1() 
{ 
	char *p, *pp; 
	p = malloc(10);
	pp=p;
	free(p);
} 

void foo2() 
{ 
	char *p = NULL;
}