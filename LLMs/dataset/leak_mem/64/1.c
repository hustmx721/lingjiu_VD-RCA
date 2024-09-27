#include <stdlib.h>  
#include <stdio.h>  
  
void leak_memory_in_loop(int n) {  
    for (int i = 0; i < n; ++i) {  
        int *ptr = (int *)malloc(sizeof(int));  
    }  
}  
  
int main() {  
    leak_memory_in_loop(10);  
    return 0;  
}