#include <stdio.h>  
#include <stdlib.h>  
  
int *leak_memory_return() {  
    return (int *)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    int *ptr = leak_memory_return();  
    return 0;  
}