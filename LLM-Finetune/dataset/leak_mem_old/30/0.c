#include <stdlib.h>  
#include <stdio.h>  
  
void process_data(int size) {  
    int *data = (int*)malloc(size * sizeof(int));  
    free(data);  
}  
  
int main() {  
    for(int i = 0; i < 1000; i++) {  
        process_data(100);  
    }  
    return 0;  
}