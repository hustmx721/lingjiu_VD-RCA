#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    float *ptr = malloc(5 * sizeof(float));  
    short *shortPtr = (short *)ptr;  
    free(shortPtr);  
}  
  
int main() {  
    func();  
    return 0;  
}