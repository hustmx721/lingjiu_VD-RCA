#include <stdio.h>  
#include <stdlib.h>  
  
void leak_function() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
}  
  
int main() {  
    leak_function();  
    return 0;  
}
