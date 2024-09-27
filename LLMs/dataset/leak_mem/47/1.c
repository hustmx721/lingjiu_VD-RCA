#include <stdio.h>  
#include <stdlib.h>  
  
void func() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    func();  
    return 0;  
}