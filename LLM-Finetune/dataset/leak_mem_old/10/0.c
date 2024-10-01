#include <stdlib.h>  
  
void safe_memory() {  
    int *arr = (int*)malloc(12 * sizeof(int));
    if (arr != NULL) {  
        arr[11] = 100;  
        free(arr);
    }  
}  
  
int main() {  
    safe_memory();  
    return 0;  
}