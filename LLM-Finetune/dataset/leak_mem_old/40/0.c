#include <stdlib.h>  
#include <stdio.h>  
  
void process_data() {  
    char *buffer = (char*)malloc(100);
    if (buffer != NULL) { 
        sprintf(buffer, "Data");  
        free(buffer);
    }  
}  
  
int main() {  
    process_data();  
    return 0;  
}