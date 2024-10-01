void foo(void)
{
    int* ptr = (int*)malloc(sizeof(int));

    int* ptr = (int*)malloc(sizeof(int));
    free(ptr);
    free(ptr); 
}