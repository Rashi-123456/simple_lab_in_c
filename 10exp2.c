#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *createNode(int x);
struct Node *insertInMiddle(struct Node *head, int x) 
{
    if (head == NULL) {
        return createNode(x);
    }
    struct Node *newNode = createNode(x);
    struct Node *currNode = head;
    int len = 0;
    while (currNode != NULL) {
        len++;
        currNode = currNode->next;
    }
    int mid = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
    currNode = head;
    while (mid > 1) {
        currNode = currNode->next;
          mid--;
    }
    newNode->next = currNode->next;
    currNode->next = newNode;
    return head;
}
void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
struct Node* createNode(int x) {
    struct Node* newNode = 
      (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
int main() 
{   
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);
    int x = 6;
    head = insertInMiddle(head, x);
    printList(head);
    return 0;
}