#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void add_node(struct Node **head, int data) {  
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));  
    new_node->data = data;  
    new_node->next = *head;  
    *head = new_node;  
}  
  
int main() {  
    struct Node *head = NULL;  
    add_node(&head, 10);  
    return 0;  
}