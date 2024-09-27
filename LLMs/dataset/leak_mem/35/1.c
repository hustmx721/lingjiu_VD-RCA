#include <stdlib.h>  
#include <stdio.h>  
  
void process_data(int *data, int size) {  
    // 处理数据...  
}  
  
int main() {  
    for (int i = 0; i < 1000; i++) {  
        int *data = (int*)malloc(100 * sizeof(int));  
        process_data(data, 100);  
    }  
    return 0;  
}