#include <stdlib.h>  
#include <stdio.h>  
  
void leak_memory() {  
    int *ptr = (int *)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    leak_memory();  
    return 0;  
}