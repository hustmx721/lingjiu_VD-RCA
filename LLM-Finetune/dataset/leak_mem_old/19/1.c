#include <stdlib.h>  
#include <string.h>  
  
void memory_leak() {  
    char *str = (char*)malloc(100 * sizeof(char));  
    strcpy(str, "Hello, World!");  
    char *new_str = (char*)malloc(50 * sizeof(char));  
    str = new_str;
    strcpy(new_str, "Goodbye!");  
    free(str);  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}