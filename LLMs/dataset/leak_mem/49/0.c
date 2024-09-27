#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
char* getString() {  
    char *str = (char*)malloc(100);  
    strcpy(str, "Hello, World!");  
    return str;  
}  
  
int main() {  
    char *myStr = getString();  
    printf("%s\n", myStr);  
    free(myStr);  
    return 0;  
}