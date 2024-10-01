#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    int *ptr = malloc(10 * sizeof(int));  
    char *charPtr = (char *)ptr;  
    free(charPtr);  
}  
  
int main() {  
    func();  
    return 0;  
}