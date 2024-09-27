typedef struct {
    int* ptr;
} my_struct;

int * foo(void)
{
    my_struct s;
    *s.ptr = 10; 
}