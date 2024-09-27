#include <stdio.h>  
#include <stdlib.h>  
  
void no_realloc_leak() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    int *temp = (int*)realloc(ptr, sizeof(int) * 20);  
    if (temp == NULL) {  
        free(ptr);  
        return;  
    }  
    ptr = temp;  
    free(ptr); 
}  
  
int main() {  
    no_realloc_leak();  
    return 0;  
}