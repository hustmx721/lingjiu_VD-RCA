#include <stdio.h>  
#include <stdlib.h>  
  
void createArray() {  
    int *arr = (int*)malloc(sizeof(int) * 10);
    if (arr != NULL) {  
        arr[0] = 1;  
        free(arr);
    }  
}  
  
int main() {  
    createArray();  
    return 0;  
}