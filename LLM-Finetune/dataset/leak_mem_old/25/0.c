#include <stdlib.h>  
#include <stdio.h>  
  
void func() {  
    char *ptr = malloc(100 * sizeof(char));  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}