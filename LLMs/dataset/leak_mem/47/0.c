#include <stdio.h>  
#include <stdlib.h>  
  
void func() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    free(ptr);  
}  
  
int main() {  
    func();  
    return 0;  
}