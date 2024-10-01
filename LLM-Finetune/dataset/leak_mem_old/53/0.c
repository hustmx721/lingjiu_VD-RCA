#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
void copyString(char *dest, const char *src) {  
    strcpy(dest, src);  
}  
  
int main() {  
    char *myString = (char*)malloc(strlen("Hello, world!") + 1);
    if (myString != NULL) {  
        copyString(myString, "Hello, world!");  
        printf("%s\n", myString);  
        free(myString);
    }  
    return 0;  
}