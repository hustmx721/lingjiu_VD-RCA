#include <stdio.h>  
#include <stdlib.h>  
  
void leak_memory() {  
    int *ptr = (int *)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    leak_memory();  
    return 0;  
}