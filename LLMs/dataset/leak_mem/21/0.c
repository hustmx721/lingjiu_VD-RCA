#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void no_memory_leak() {  
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));  
    head->data = 1;  
    head->next = NULL;  
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = 2;  
    new_node->next = NULL;  
    free(new_node);
    free(head);
}  
  
int main() {  
    no_memory_leak();  
    return 0;  
}