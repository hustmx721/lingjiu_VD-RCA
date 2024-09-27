#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
void copyString(char *dest, const char *src) {  
    strcpy(dest, src);
}  
  
int main() {  
    char *myString;  
    copyString(myString, "Hello, world!");  
    return 0;  
}