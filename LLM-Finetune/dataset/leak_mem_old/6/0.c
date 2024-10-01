#include <stdio.h>  
#include <stdlib.h>  
  
void no_leak_function() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    free(ptr); 
}  
  
int main() {  
    no_leak_function();  
    return 0;  
}