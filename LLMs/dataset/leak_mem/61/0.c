#include <stdlib.h>  
#include <stdio.h>  
  
void read_input(char **input) {  
    *input = (char *)malloc(256 * sizeof(char));  
    if (*input == NULL) {  
        fprintf(stderr, "Memory allocation failed\n");  
        return;  
    }  
    fgets(*input, 256, stdin);  
}  
  
int main() {  
    char *input = NULL;  
    read_input(&input);  
    printf("Input: %s", input);  
    free(input);  
    return 0;  
}