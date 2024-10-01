#include <stdio.h>  
#include <stdlib.h>  
  
void process() {  
    int *ptr;  
    *ptr = 10;
}  
  
int main() {  
    process();  
    return 0;  
}