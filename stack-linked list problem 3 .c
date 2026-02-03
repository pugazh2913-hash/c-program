#include <stdio.h>
#include <stdlib.h>

struct Node {
    int plateID;
    struct Node *next;
};

struct Node *top = NULL;

void push(int plateID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->plateID = plateID;
    newNode->next = top;
    top = newNode;
    printf("Plate %d added to stack\n", plateID);
}

void pop() {
    if (top == NULL) {
        printf("No plates to remove\n");
    } else {
        struct Node *temp = top;
        printf("Plate %d removed\n", temp->plateID);
        top = top->next;
        free(temp);
    }
}

void peek() {
    if (top == NULL) {
        printf("No plates in stack\n");
    } else {
        printf("Top plate: %d\n", top->plateID);
    }
}
int isEmpty() {
    return top == NULL;
}
int size() {
    int count = 0;
    struct Node *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
  
    push(1);   
    push(2);   
    push(3);   

    pop();     
    peek();    

    printf("Total plates: %d\n", size());

    if (isEmpty())
        printf("No plates available\n");
    else
        printf("Plates are available\n");

    return 0;
}
