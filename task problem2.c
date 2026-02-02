#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* insertAtBeginning(struct Node* last, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (last == NULL) {
        newNode->next = newNode; 
        last = newNode;
        return last;
    }
    newNode->next = last->next; 
    last->next = newNode;      
    return last;
}
void display(struct Node* last) {
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* head = last->next; 
    struct Node* temp = head;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    
    printf("(back to %d)\n", head->data);
}

int main() {
    struct Node* last = NULL;

    last = insertAtBeginning(last, 20);
    last = insertAtBeginning(last, 10);

    display(last);

    return 0;
}