#include <stdlib.h>  
#include <string.h>  
  
void create_string() {  
    char *str = (char *)malloc(100 * sizeof(char));  
    strcpy(str, "Hello, World!");  
    free(str);  
}  
  
int main() {  
    create_string();  
    return 0;  
}