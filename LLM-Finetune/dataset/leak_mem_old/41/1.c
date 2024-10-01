#include <stdlib.h>  
#include <stdio.h>  
  
void *create_resource() {  
    void *resource;  
    return resource;  
}  
  
void use_and_free_resource(void *resource) {  
    free(resource);  
}  
  
int main() {  
    void *resource = create_resource();  
    use_and_free_resource(resource);  
    return 0;  
}