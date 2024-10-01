#include <stdlib.h>  
#include <stdio.h>  
  
void print_message() {  
    char *msg = (char *)malloc(50 * sizeof(char));  
    sprintf(msg, "This is a test message.");  
    printf("%s\n", msg);  
    free(msg);  
}  
  
int main() {  
    print_message();  
    return 0;  
}