#include <stdlib.h>  
  
void no_memory_leak() {  
    int *arr = (int*)malloc(10 * sizeof(int));  
    for (int i = 0; i < 10; i++) {  
        arr[i] = i;  
    }  
    int *new_arr = (int*)malloc(5 * sizeof(int));  
    for (int i = 0; i < 5; i++) {  
        new_arr[i] = i * 2;  
    }  
    free(new_arr);
    free(arr);
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}