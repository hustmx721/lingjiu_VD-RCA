#include <stdlib.h>  
#include <stdio.h>  
  
void no_leak() {  
    char *buffer = (char*)malloc(100);  
    free(buffer);  
}  
  
int main() {  
    for (int i = 0; i < 1000; i++) {  
        no_leak();  
    }  
    return 0;  
}