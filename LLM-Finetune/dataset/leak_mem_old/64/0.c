#include <stdlib.h>  
#include <stdio.h>  
  
void no_leak_memory_in_loop(int n) {  
    int *ptrs = (int *)malloc(sizeof(int) * n);  
    for (int i = 0; i < n; ++i) {  
        // Use ptrs[i] instead of allocating individually  
    }  
    free(ptrs);  
}  
  
int main() {  
    no_leak_memory_in_loop(10);  
    return 0;  
}