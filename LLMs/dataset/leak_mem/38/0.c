#include <stdlib.h>  
#include <stdio.h>  
  
void no_leak_memory() {  
    char *buffer = (char*)malloc(100);  
    free(buffer);  
}  
  
int main() {  
    no_leak_memory();  
    return 0;  
}