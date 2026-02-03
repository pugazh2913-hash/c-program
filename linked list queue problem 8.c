#include <stdio.h>
#include <stdlib.h>

struct Node {
    int orderID;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue(int orderID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->orderID = orderID;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Order O%d placed\n", orderID);
}
void dequeue() {
    if (front == NULL) {
        printf("No orders to process\n");
    } else {
        struct Node *temp = front;
        printf("Order O%d processed\n", temp->orderID);
        front = front->next;
        if (front == NULL)
            rear = NULL;
        free(temp);
    }
}
void displayFront() {
    if (front == NULL) {
        printf("No pending orders\n");
    } else {
        printf("Next order to process: O%d\n", front->orderID);
    }
}

int size() {
    int count = 0;
    struct Node *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {

    enqueue(101);
    enqueue(102);
    enqueue(103);
    dequeue();
    displayFront();

    printf("Pending orders: %d\n", size());

    return 0;
}
