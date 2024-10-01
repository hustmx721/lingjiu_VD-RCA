#include <stdio.h>  
#include <stdlib.h>  
  
void no_leak_in_loop() {  
    for (int i = 0; i < 10; i++) {  
        int *ptr = (int*)malloc(sizeof(int));  
        free(ptr); 
    }  
}  
  
int main() {  
    no_leak_in_loop();  
    return 0;  
}