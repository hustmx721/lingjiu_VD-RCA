#include <stdlib.h>  
#include <stdio.h>  
  
void use_memory() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    free(ptr);  
}  
  
int main() {  
    while(1) {  
        use_memory();  
    }  
    return 0;  
}