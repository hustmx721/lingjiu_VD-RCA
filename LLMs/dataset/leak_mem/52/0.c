#include <stdio.h>  
#include <stdlib.h>  
  
void process() {  
    int *ptr = (int*)malloc(sizeof(int)); 
    if (ptr != NULL) {  
        *ptr = 10;  
        free(ptr);
    }  
}  
  
int main() {  
    process();  
    return 0;  
}