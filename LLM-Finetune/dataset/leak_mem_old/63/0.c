#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
  
char *create_string() {  
    char *str = (char *)malloc(100);  
    strcpy(str, "Hello, World!");  
    return str;  
}  
  
int main() {  
    char *str = create_string();  
    free(str);  
    return 0;  
}