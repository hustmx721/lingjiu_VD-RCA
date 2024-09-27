#include <stdlib.h>  
  
void memory_leak() {  
    int *arr = (int*)malloc(10 * sizeof(int));  
    for (int i = 0; i < 10; i++) {  
        arr[i] = i;  
    }  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}