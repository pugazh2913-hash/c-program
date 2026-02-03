#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int jobID) {
    if (rear == MAX - 1) {
        printf("Print queue is full!\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = jobID;
        printf("Print job J%d added to queue\n", jobID);
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("No print jobs pending\n");
    } else {
        printf("Print job J%d printed\n", queue[front++]);
    }
}

void displayFront() {
    if (front == -1 || front > rear) {
        printf("No job to print\n");
    } else {
        printf("Next job to print: J%d\n", queue[front]);
    }
}

void isEmpty() {
    if (front == -1 || front > rear)
        printf("Print queue is empty\n");
    else
        printf("Print queue is not empty\n");
}
void size() {
    if (front == -1 || front > rear)
        printf("Pending print jobs: 0\n");
    else
        printf("Pending print jobs: %d\n", rear - front + 1);
}

int main() {
    int choice, jobID;

    while (1) {
        printf("\n--- Printer Queue Menu ---\n");
        printf("1. Add Print Job (Enqueue)\n");
        printf("2. Print Job (Dequeue)\n");
        printf("3. Show Next Job (Front)\n");
        printf("4. Check if Queue Empty\n");
        printf("5. Number of Pending Jobs\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter job ID (number): ");
                scanf("%d", &jobID);
                enqueue(jobID);
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
