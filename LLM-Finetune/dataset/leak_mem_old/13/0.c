#include <stdlib.h>  
  
void no_memory_leak() {  
    int *ptr = (int*)malloc(sizeof(int));  
    if (ptr != NULL) {  
        *ptr = 10;  
        free(ptr);
    }  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}