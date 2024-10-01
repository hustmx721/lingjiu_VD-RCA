#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    long *ptr = malloc(8 * sizeof(long));  
    unsigned long *ulongPtr = (unsigned long *)ptr;  
    free((void **)ulongPtr);  
}  
  
int main() {  
    func();  
    return 0;  
}