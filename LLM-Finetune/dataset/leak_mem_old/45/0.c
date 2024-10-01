#include <stdio.h>  
#include <stdlib.h>  
  
void no_leak_memory_on_error() {  
    int *ptr = (int *)malloc(sizeof(int) * 10);  
    if (!ptr) {  
        perror("malloc failed");  
        exit(EXIT_FAILURE);  
    }  
    if (1) {  
        free(ptr);  
        perror("Simulated error");  
        exit(EXIT_FAILURE);  
    }  
    free(ptr);  
}  
  
int main() {  
    no_leak_memory_on_error();  
    return 0;  
}