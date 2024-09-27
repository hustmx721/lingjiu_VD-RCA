#include <stdio.h>  
#include <stdlib.h>  
  
void process() {  
    int *ptr = (int*)malloc(sizeof(int) * 10);  
    if (ptr == NULL) {  
        return;  
    }  
    if (some_condition) return;  
}  
  
int main() {  
    process();  
    return 0;  
}
