#include <stdlib.h>  
  
void safe_memory() {  
    int *arr = (int*)malloc(11 * sizeof(int));
    if (arr != NULL) {  
        arr[10] = 5;  
        free(arr); 
    }  
}  
  
int main() {  
    safe_memory();  
    return 0;  
}