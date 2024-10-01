#include <stdlib.h>  
  
void memory_leak() {  
    int *ptr = (int*)malloc(sizeof(int));  
    *ptr = 10;  
    int *new_ptr = (int*)malloc(sizeof(int));  
    ptr = new_ptr;
    *new_ptr = 20;  
    free(ptr);  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}