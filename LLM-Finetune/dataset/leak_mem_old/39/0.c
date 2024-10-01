#include <stdlib.h>  
#include <stdio.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void append_node(struct Node **head, int data) {  
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = data;  
    new_node->next = *head;  
    *head = new_node;  
}  
  
void free_list(struct Node *head) {  
    while (head != NULL) {  
        struct Node *temp = head;  
        head = head->next;  
        free(temp);  
    }  
}  
  
int main() {  
    struct Node *head = NULL;
    for (int i = 0; i < 10; i++) {  
        append_node(&head, i);  
    }  
    free_list(head);
    return 0;  
}