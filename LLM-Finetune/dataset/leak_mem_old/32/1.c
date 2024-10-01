#include <stdlib.h>  
#include <stdio.h>  
  
void *create_resource() {  
    void *resource = malloc(1024);  
    return resource;  
}  
  
void use_resource(void *resource) {  
}  
  
int main() {  
    while(1) {  
        void *resource = create_resource();  
        use_resource(resource);  
    }  
    return 0;  
}