#include <stdlib.h>  
#include <stdio.h>  
  
void leak_memory() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    while(1) {  
        leak_memory();  
    }  
    return 0;  
}