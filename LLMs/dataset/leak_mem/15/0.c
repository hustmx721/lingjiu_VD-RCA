#include <stdlib.h>  
  
void no_memory_leak() {  
    int *arr = (int*)malloc(10 * sizeof(int));  
    if (arr != NULL) {  
        for (int i = 0; i < 10; i++) {  
            arr[i] = i;  
        }  
        free(arr);
    }  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}