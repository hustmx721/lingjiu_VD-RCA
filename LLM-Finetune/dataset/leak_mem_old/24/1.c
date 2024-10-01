#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    double *ptr = malloc(10 * sizeof(double));  
    int *intPtr = (int *)ptr;  
    free(intPtr);  
}  
  
int main() {  
    func();  
    return 0;  
}