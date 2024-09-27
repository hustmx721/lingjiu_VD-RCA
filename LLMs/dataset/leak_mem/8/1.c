#include <stdlib.h>  
  
void leak_memory() {  
    int *arr = (int*)malloc(10 * sizeof(int));  
    arr[10] = 5; 
}  
  
int main() {  
    leak_memory();  
    return 0;  
}