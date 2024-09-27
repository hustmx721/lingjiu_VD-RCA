#include <stdlib.h>  
  
void leak_memory() {  
    int *arr = (int*)malloc(5 * sizeof(int));  
    for (int i = 0; i <= 5; i++) {  
        arr[i] = i;
    }  
}  
  
int main() {  
    leak_memory();  
    return 0;  
}