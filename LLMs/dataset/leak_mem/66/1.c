#include <stdlib.h>  
#include <stdio.h>  
  
void *leak_memory_func() {  
    void *ptr = malloc(100);  
    return ptr;  
}  
  
int main() {  
    leak_memory_func();  
    return 0;  
}