#include <stdlib.h>  
  
void memory_leak() {  
    int *ptr = (int*)malloc(sizeof(int));  
    *ptr = 10;  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}