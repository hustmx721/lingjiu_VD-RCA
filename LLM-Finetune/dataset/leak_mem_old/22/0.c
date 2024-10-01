#include <stdlib.h>  
  
void no_memory_leak() {  
    int **ptr_array = (int**)malloc(5 * sizeof(int*));  
    for (int i = 0; i < 5; i++) {  
        ptr_array[i] = (int*)malloc(sizeof(int));  
        *(ptr_array[i]) = i;  
    }  
    int **new_ptr_array = (int**)malloc(3 * sizeof(int*));  
    for (int i = 0; i < 3; i++) {  
        new_ptr_array[i] = (int*)malloc(sizeof(int));  
        *(new_ptr_array[i]) = i * 10;  
    }  
    for (int i = 0; i < 5; i++) {  
        free(ptr_array[i]);  
    }  
    free(ptr_array);  
    for (int i = 0; i < 3; i++) {  
        free(new_ptr_array[i]);  
    }  
    free(new_ptr_array);  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}