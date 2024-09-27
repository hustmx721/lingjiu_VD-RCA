#include <stdlib.h>  
  
void leak_memory() {  
    int n = 10;  
    int *arr = (int*)malloc(n * sizeof(int));  
    arr[n] = 20;
}  
  
int main() {  
    leak_memory();  
    return 0;  
}