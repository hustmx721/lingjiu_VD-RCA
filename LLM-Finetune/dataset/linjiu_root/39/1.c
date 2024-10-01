void foo1() 
{ 
	char *p, *pp; 
	p = malloc(10);
	pp=p;
	free(p);
	free(pp); 
} 

void foo2() 
{ 
	char *p;
	free(p); 
}
