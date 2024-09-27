typedef struct {
    int* ptr;
} my_struct;

int * foo(void)
{
    my_struct s;
    s.ptr = (int*)malloc(sizeof(int));
    if(s.ptr != NULL)
    	{
    	*s.ptr = 10; 
    	free(s.ptr);
    	}
}