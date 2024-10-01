#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void no_memory_leak() {  
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));  
    if (head != NULL) {  
        head->data = 1;  
        head->next = NULL;  
        free(head);
    }  
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}