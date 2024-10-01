#include <stdlib.h>  
#include <string.h>  
  
void memory_leak() {  
    char *str = (char*)malloc(100 * sizeof(char));  
    strcpy(str, "Hello, World!");  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}