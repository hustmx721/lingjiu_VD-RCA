#include <stdio.h>  
#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node* next;  
};  
  
struct Node* createNode(int data) {  
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  
    newNode->data = data;  
    newNode->next = NULL;  
    return newNode;  
}  
  
void freeList(struct Node* head) {  
    struct Node* tmp;  
    while (head != NULL) {  
        tmp = head;  
        head = head->next;  
        free(tmp);  
    }  
}  
  
int main() {  
    struct Node* head = createNode(10);  
    freeList(head);  
    return 0;  
}