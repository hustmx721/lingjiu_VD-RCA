#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    int *ptr = malloc(10 * sizeof(int));  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}