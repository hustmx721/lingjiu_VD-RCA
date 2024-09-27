#include <stdlib.h>  
  
void leak_memory() {  
    int *arr = (int*)malloc(5 * sizeof(int));  
    int index = 6; 
    arr[index - 1] = 50;
}  
  
int main() {  
    leak_memory();  
    return 0;  
}