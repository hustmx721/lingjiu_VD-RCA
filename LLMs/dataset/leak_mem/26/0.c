#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    float *ptr = malloc(5 * sizeof(float));  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}