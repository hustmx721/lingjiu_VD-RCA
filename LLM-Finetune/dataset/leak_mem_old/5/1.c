#include <stdio.h>  
#include <stdlib.h>  
  
void realloc_leak() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    ptr = (int*)realloc(ptr, sizeof(int) * 20);  
}  
  
int main() {  
    realloc_leak();  
    return 0;  
}
