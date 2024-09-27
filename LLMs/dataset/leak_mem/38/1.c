#include <stdlib.h>  
#include <stdio.h>  
  
void leak_memory() {  
    char *buffer;  
    free(buffer);  
}  
  
int main() {  
    leak_memory();  
    return 0;  
}