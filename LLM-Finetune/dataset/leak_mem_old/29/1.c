#include <stdlib.h>  
#include <stdio.h>  
  
char *create_string() {  
    char *str = (char*)malloc(100 * sizeof(char));  
    sprintf(str, "Hello, World!");  
    return str;  
}  
  
int main() {  
    while(1) {  
        char *my_str = create_string();  
    }  
    return 0;  
}