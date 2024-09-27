#include <stdio.h>  
#include <stdlib.h>  
  
void no_leak_memory_loop() {  
    int *ptrs[10];  
    for (int i = 0; i < 10; i++) {  
        ptrs[i] = (int *)malloc(sizeof(int));  
    }  
    for (int i = 0; i < 10; i++) {  
        free(ptrs[i]);  
    }  
}  
  
int main() {  
    no_leak_memory_loop();  
    return 0;  
}