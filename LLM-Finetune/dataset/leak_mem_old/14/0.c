#include <stdlib.h>  
#include <string.h>  
  
void no_memory_leak() {  
    char *str = (char*)malloc(100 * sizeof(char));  
    if (str != NULL) {  
        strcpy(str, "Hello, World!");  
        free(str);
    }  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}