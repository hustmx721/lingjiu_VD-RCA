#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    char *ptr = malloc(100 * sizeof(char));  
    void *voidPtr = ptr;  
    free((int *)voidPtr);  
}  
  
int main() {  
    func();  
    return 0;  
}