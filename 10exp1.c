#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
int main() 
{
    Node *first = (Node *)malloc(sizeof(Node));
    first->data = 2;
    Node *second = (Node *)malloc(sizeof(Node));
    second->data = 4;
    Node *third = (Node *)malloc(sizeof(Node));
    third->data = 6;
    first->next = second;
    second->next = third; 
    third->next = NULL;
    printf("Linked List: ");
    Node* temp = first;
  	while(temp) {
      printf("%d ", temp->data);
      temp = temp->next;
    }
    return 0;
}