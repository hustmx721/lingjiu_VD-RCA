#include <stdlib.h>  
  
void safe_memory() {  
    int n = 10;  
    int *arr = (int*)malloc((n + 1) * sizeof(int));
    if (arr != NULL) {  
        arr[n] = 20;  
        free(arr);
    }  
}  
  
int main() {  
    safe_memory();  
    return 0;  
}