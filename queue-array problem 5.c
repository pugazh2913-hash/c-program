#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full! Cannot add more customers.\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = customerID;
        printf("Customer %d added to queue\n", customerID);
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("No customers to serve (Queue is empty)\n");
    } else {
        printf("Customer %d served\n", queue[front++]);
    }
}
void displayFront() {
    if (front == -1 || front > rear) {
        printf("No customer is being served\n");
    } else {
        printf("Current customer: %d\n", queue[front]);
    }
}

void isEmpty() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");
}
void size() {
    if (front == -1 || front > rear)
        printf("Total customers waiting: 0\n");
    else
        printf("Total customers waiting: %d\n", rear - front + 1);
}

int main() {
    int choice, customerID;

    while (1) {
        printf("\n--- Ticket Counter Queue Menu ---\n");
        printf("1. Add Customer\n");
        printf("2. Serve Customer \n");
        printf("3. Current Customer \n");
        printf("4. Check if Queue Empty\n");
        printf("5. Number of Waiting Customers\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter customer ID: ");
                scanf("%d", &customerID);
                enqueue(customerID);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                displayFront();
                break;

            case 4:
                isEmpty();
                break;

            case 5:
                size();
                break;

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
