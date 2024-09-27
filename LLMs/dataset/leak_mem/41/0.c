#include <stdlib.h>  
#include <stdio.h>  
  
void *create_resource() {  
    void *resource = malloc(256);
    return resource;  
}  
  
void use_and_free_resource(void *resource) {  
    if (resource != NULL) { 
        free(resource); 
    }  
}  
  
int main() {  
    void *resource = create_resource();  
    use_and_free_resource(resource);  
    return 0;  
}