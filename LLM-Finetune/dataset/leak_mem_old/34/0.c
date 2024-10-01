#include <stdlib.h>  
#include <stdio.h>  
  
char *create_string() {  
    char *str = (char*)malloc(50);  
    sprintf(str, "Hello, World!");  
    return str;  
}  
  
int main() {  
    for (int i = 0; i < 1000; i++) {  
        char *my_str = create_string();  
        free(my_str);  
    }  
    return 0;  
}