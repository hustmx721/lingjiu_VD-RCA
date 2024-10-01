void foo(void)
{
    int* ptr = (int*)malloc(sizeof(int * 3));
    int* new_ptr = ptr + 1; 
    free(ptr);
}