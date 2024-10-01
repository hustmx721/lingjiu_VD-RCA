#include <stdlib.h>  
  
void no_memory_leak() {  
    int *ptr = (int*)malloc(sizeof(int));  
    *ptr = 10;  
    int *new_ptr = (int*)malloc(sizeof(int));  
    *new_ptr = 20;  
    free(new_ptr);
    free(ptr);
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}