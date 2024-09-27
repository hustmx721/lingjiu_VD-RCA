#include <stdio.h>  
#include <stdlib.h>  
  
void processData() {  
    int *dataArray = (int*)malloc(sizeof(int) * 5);  
    for (int i = 0; i < 5; i++) {  
        dataArray[i] = i * 10;  
    }  
    // Process data...  
    free(dataArray);  
}  
  
int main() {  
    processData();  
    return 0;  
}