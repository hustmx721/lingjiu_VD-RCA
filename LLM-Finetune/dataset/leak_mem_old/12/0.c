#include <stdlib.h>  
  
void safe_memory() {  
    int *arr = (int*)malloc(6 * sizeof(int));
    if (arr != NULL) {  
        int index = 6;  
        if (index - 1 < 6) { 
            arr[index - 1] = 50;  
        }  
        free(arr);
    }  
}  
  
int main() {  
    safe_memory();  
    return 0;  
}