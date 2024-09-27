#include <stdio.h>  
#include <stdlib.h>  
  
char* create_string() {  
    char *str = (char*)malloc(sizeof(char) * 100);  
    return str;
}  
  
int main() {  
    char *myStr = create_string();  
    return 0;  
}
