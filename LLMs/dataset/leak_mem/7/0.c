#include <stdio.h>  
#include <stdlib.h>  
  
int *global_ptr;  
  
void setup() {  
    global_ptr = (int*)malloc(sizeof(int) * 10);  
}  
  
void teardown() {  
    free(global_ptr);
}  
  
int main() {  
    setup();  
    teardown();  
    return 0;  
}