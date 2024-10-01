#include <stdlib.h>  
#include <stdio.h>  
  
struct Data {  
    int *values;  
    int size;  
};  
  
struct Data *initialize_data(int size) {  
    struct Data *data = (struct Data*)malloc(sizeof(struct Data));  
    data->size = size;  
    for (int i = 0; i < size; i++) {  
        data->values[i] = i;
    }  
    return data;  
}  
  
int main() {  
    struct Data *my_data = initialize_data(10);  
    return 0;  
}