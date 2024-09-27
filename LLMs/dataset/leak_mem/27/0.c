#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    long *ptr = malloc(8 * sizeof(long));  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}