void foo(void)
{
    int* ptr = (int*)malloc(sizeof(int));
    free(ptr);
    int* new_ptr = ptr + 1; 
}