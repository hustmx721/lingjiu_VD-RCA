#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void memory_leak() {  
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));  
    head->data = 1;  
    head->next = NULL;  
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));  
    head = new_node;
    new_node->data = 2;  
    new_node->next = NULL;  
    free(head);  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}