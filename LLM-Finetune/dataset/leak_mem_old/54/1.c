#include <stdio.h>  
#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void appendNode(struct Node **head, int data) {  
    struct Node *newNode;  
    newNode->data = data;
    newNode->next = *head;  
    *head = newNode;  
}  
  
int main() {  
    struct Node *head = NULL;  
    appendNode(&head, 10);  
    return 0;  
}