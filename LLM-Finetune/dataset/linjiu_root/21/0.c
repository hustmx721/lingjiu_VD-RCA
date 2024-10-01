void foo(void)
{
	int* ptr = (int*)malloc(sizeof(int) * 10);
	
	ptr[8] = 10; 
}