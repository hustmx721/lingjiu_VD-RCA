#include <stdio.h>  
#include <stdlib.h>  
  
void fillArray(int *arr, int size) {  
    for (int i = 0; i < size; i++) {  
        arr[i] = i;  
    }  
}  
  
int main() {  
    int *myArray = (int*)malloc(sizeof(int) * 10);
    if (myArray != NULL) {  
        fillArray(myArray, 10);  
        free(myArray);
    }  
    return 0;  
}