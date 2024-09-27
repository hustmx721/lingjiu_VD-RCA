#include <stdlib.h>  
#include <stdio.h>  
  
void leak() {  
    char *buffer = (char*)malloc(100);  
}  
  
int main() {  
    for (int i = 0; i < 1000; i++) {  
        leak();  
    }  
    return 0;  
}