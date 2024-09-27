#include <stdlib.h>  
#include <stdio.h>  
  
struct Data {  
    int *values;  
    int size;  
};  
  
struct Data *initialize_data(int size) {  
    struct Data *data = (struct Data*)malloc(sizeof(struct Data));  
    if (data != NULL) {  
        data->values = (int*)malloc(size * sizeof(int));
        if (data->values != NULL) {  
            data->size = size;  
            for (int i = 0; i < size; i++) {  
                data->values[i] = i;  
            }  
        } else {  
            free(data);
            data = NULL;  
        }  
    }  
    return data;  
}  
  
void free_data(struct Data *data) {  
    if (data != NULL) {  
        if (data->values != NULL) {  
            free(data->values);
        }  
        free(data); 
    }  
}  
  
int main() {  
    struct Data *my_data = initialize_data(10);  
    if (my_data != NULL) {  
        free_data(my_data);
    }  
    return 0;  
}