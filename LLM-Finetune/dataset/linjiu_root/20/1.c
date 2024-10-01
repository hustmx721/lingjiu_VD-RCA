void foo(void)
{
    int* ptr = (int*)malloc(sizeof(int));
    free(ptr);

    *ptr = 10;
}