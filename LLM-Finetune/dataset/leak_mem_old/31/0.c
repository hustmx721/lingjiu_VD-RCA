#include <stdlib.h>  
#include <stdio.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
struct Node* create_node(int data) {  
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));  
    node->data = data;  
    node->next = NULL;  
    return node;  
}  
  
void add_to_list(struct Node **head, int data) {  
    struct Node *new_node = create_node(data);  
    new_node->next = *head;  
    *head = new_node;  
}  
  
void free_list(struct Node *head) {  
    while(head != NULL) {  
        struct Node *temp = head;  
        head = head->next;  
        free(temp);  
    }  
}  
  
int main() {  
    struct Node *head = NULL;  
    for(int i = 0; i < 1000; i++) {  
        add_to_list(&head, i);  
    }  
    free_list(head);  
    return 0;  
}