#include <stdlib.h>  
  
void memory_leak() {  
    int *arr = (int*)malloc(10 * sizeof(int));  
    for (int i = 0; i < 10; i++) {  
        arr[i] = i;  
    }  
    int *new_arr = (int*)malloc(5 * sizeof(int));  
    arr = new_arr;
    for (int i = 0; i < 5; i++) {  
        new_arr[i] = i * 2;  
    }  
    free(arr);  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}