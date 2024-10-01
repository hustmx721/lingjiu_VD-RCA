#include <stdlib.h>  
  
void safe_memory() {  
    int *arr = (int*)malloc(6 * sizeof(int));
    if (arr != NULL) {  
        for (int i = 0; i < 6; i++) {  
            arr[i] = i;  
        }  
        free(arr); 
    }  
}  
  
int main() {  
    safe_memory();  
    return 0;  
}