#include <stdlib.h>  
  
struct Node {  
    int data;  
    struct Node *next;  
};  
  
void memory_leak() {  
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));  
    head->data = 1;  
    head->next = NULL;  
}  
  
int main() {  
    memory_leak();  
    return 0;  
}