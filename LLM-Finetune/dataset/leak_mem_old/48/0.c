#include <stdio.h>  
#include <stdlib.h>  
  
int* createArray() {  
    return (int*)malloc(sizeof(int) * 100);  
}  
  
int main() {  
    int *arr = createArray();  
    free(arr);  
    return 0;  
}