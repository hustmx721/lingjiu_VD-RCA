int * a = NULL;
void foo() 
{ 
	a = (int *)malloc(sizeof(int));
	if(a != NULL)
		free(a);
	a = NULL;
}