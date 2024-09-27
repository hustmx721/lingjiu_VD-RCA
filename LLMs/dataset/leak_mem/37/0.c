#include <stdlib.h>  
#include <stdio.h>  
  
void *allocate_resource() {  
    void *resource = malloc(256);  
    return resource;  
}  
  
void use_resource(void *resource) {  
    // 使用资源...  
}  
  
void free_resource(void *resource) {  
    free(resource);  
}  
  
int main() {  
    for (int i = 0; i < 1000; i++) {  
        void *resource = allocate_resource();  
        use_resource(resource);  
        free_resource(resource);  
    }  
    return 0;  
}