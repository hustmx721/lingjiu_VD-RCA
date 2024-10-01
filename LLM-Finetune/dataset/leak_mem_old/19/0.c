#include <stdlib.h>  
#include <string.h>  
  
void no_memory_leak() {  
    char *str = (char*)malloc(100 * sizeof(char));  
    strcpy(str, "Hello, World!");  
    char *new_str = (char*)malloc(50 * sizeof(char));  
    strcpy(new_str, "Goodbye!");  
    free(new_str);
    free(str);
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}