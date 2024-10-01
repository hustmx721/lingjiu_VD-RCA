int * foo(void)
{
    while (true) {
        int* ptr = (int*)malloc(sizeof(int));
        if(ptr != NULL)
        	free(ptr); 
    }
}