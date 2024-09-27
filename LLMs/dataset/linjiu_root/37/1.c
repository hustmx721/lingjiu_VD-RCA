int foo(char *filename) 
{ 
	FILE *fp; 
	int key; 
	fp = fopen(filename, "r"); 
	fscanf(fp, "%d", &key); 
	return key; 
}