#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
  
char *create_string() {  
    char *str = (char *)malloc(100);  
    strcpy(str, "Hello, World!");  
    return str;  
}  
  
int main() {  
    create_string();  
    return 0;  
}