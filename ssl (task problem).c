#include <stdio.h>
#include <stdlib.h>

struct Node {
    int rollNumber;
    struct Node* next;
};

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->rollNumber = data;
    newNode->next = NULL;

    if (*head == NULL) {
        
        *head = newNode;
        newNode->next = *head;
        return;
    }
    while (temp->next != *head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}

void displayCircular(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    do {
        printf("%d -> ", temp->rollNumber);
        temp = temp->next;
    } while (temp != head);
    
    printf("(back to %d)\n", head->rollNumber);
}

int main() {
    struct Node* head = NULL;

    
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);

    printf("Circular Attendance List:\n");
    displayCircular(head);

    return 0;
}
