#include <stdio.h>  
#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void appendNode(struct Node **head, int data) {  
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {  
        newNode->data = data;  
        newNode->next = *head;  
        *head = newNode;  
    }  
}  
  
void freeList(struct Node *head) {  
    struct Node *tmp;  
    while (head != NULL) {  
        tmp = head;  
        head = head->next;  
        free(tmp);
    }  
}  
  
int main() {  
    struct Node *head = NULL;  
    appendNode(&head, 10);  
    freeList(head);
    return 0;  
}