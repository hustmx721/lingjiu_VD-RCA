#include <stdio.h>  
#include <stdlib.h>  
  
void leak_in_loop() {  
    for (int i = 0; i < 10; i++) {  
        int *ptr = (int*)malloc(sizeof(int));  
    }  
}  
  
int main() {  
    leak_in_loop();  
    return 0;  
}
