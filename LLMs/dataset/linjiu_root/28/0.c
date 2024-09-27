typedef struct {
    int * b;
} my_struct;


int * foo(void)
{
    my_struct * a;
    a = (my_struct *)malloc(sizeof(my_struct)); 
    if(a != NULL)
    	a->b = (int *)malloc(sizeof(int)); 
    
    free(a->b);
    free(a);
}