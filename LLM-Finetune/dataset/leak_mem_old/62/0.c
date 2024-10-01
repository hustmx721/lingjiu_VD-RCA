#include <stdlib.h>  
#include <stdio.h>  
  
void no_leak_memory() {  
    int *ptr = (int *)malloc(sizeof(int) * 10);  
    free(ptr);  
}  
  
int main() {  
    no_leak_memory();  
    return 0;  
}