#include <stdlib.h>  
#include <stdio.h>  
  
void *no_leak_memory_func() {  
    void *ptr = malloc(100);  
    return ptr;  
}  
  
int main() {  
    void *ptr = no_leak_memory_func();  
    free(ptr);  
    return 0;  
}