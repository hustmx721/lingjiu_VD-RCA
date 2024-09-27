#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    double *ptr = malloc(10 * sizeof(double));  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}