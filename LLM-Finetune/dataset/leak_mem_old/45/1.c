#include <stdio.h>  
#include <stdlib.h>  
  
void leak_memory_on_error() {  
    int *ptr = (int *)malloc(sizeof(int) * 10);  
    if (!ptr) {  
        perror("malloc failed");  
        exit(EXIT_FAILURE);  
    }  
    if (1) {  
        perror("Simulated error");  
        exit(EXIT_FAILURE);  
    }  
}  
  
int main() {  
    leak_memory_on_error();  
    return 0;  
}