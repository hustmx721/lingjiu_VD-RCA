#include <stdlib.h>  
  
void memory_leak() {  
    int **ptr_array = (int**)malloc(5 * sizeof(int*));  
    for (int i = 0; i < 5; i++) {  
        ptr_array[i] = (int*)malloc(sizeof(int));  
        *(ptr_array[i]) = i;  
    }  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}