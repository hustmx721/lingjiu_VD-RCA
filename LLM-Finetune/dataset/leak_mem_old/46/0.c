#include <stdio.h>  
#include <stdlib.h>  
  
int *no_leak_memory_return() {  
    return (int *)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    int *ptr = no_leak_memory_return();  
    free(ptr);  
    return 0;  
}