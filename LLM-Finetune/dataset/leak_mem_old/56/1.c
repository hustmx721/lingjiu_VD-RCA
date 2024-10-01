#include <stdio.h>  
#include <stdlib.h>  
  
void fillArray(int *arr, int size) {  
    for (int i = 0; i < size; i++) {  
        arr[i] = i;
    }  
}  
  
int main() {  
    int *myArray;  
    fillArray(myArray, 10);  
    return 0;  
}