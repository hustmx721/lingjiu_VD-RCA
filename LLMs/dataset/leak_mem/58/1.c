#include <stdlib.h>  
  
void allocate_memory() {  
    int *arr = (int *)malloc(10 * sizeof(int));  
    for (int i = 0; i < 10; i++) {  
        arr[i] = i;  
    }  
}  
  
int main() {  
    allocate_memory();  
    return 0;  
}