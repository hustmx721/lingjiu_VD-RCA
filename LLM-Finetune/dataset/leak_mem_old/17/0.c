#include <stdlib.h>  
  
void no_memory_leak() {  
    int **ptr_array = (int**)malloc(5 * sizeof(int*));  
    if (ptr_array != NULL) {  
        for (int i = 0; i < 5; i++) {  
            ptr_array[i] = (int*)malloc(sizeof(int));  
            if (ptr_array[i] != NULL) {  
                *(ptr_array[i]) = i;  
            }  
        }  
        for (int i = 0; i < 5; i++) {  
            free(ptr_array[i]);  
        }  
        free(ptr_array);
    }  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}