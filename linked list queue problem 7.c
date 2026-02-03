#include <stdio.h>
#include <stdlib.h>

struct Node {
    int patientID;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int patientID) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->patientID = patientID;
    newNode->next = NULL;

    if (rear == NULL) {   // Queue empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Patient P%d registered\n", patientID);
}

void dequeue() {
    if (front == NULL) {
        printf("No patients waiting\n");
    } else {
        struct Node *temp = front;
        printf("Patient P%d sent to doctor\n", temp->patientID);
        front = front->next;
        if (front == NULL)
            rear = NULL;
        free(temp);
    }
}

void displayFront() {
    if (front == NULL) {
        printf("No patient is being attended\n");
    } else {
        printf("Current patient: P%d\n", front->patientID);
    }
}

void isEmpty() {
    if (front == NULL)
        printf("No patients in queue\n");
    else
        printf("Patients are waiting\n");
}
void size() {
    int count = 0;
    struct Node *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total patients waiting: %d\n", count);
}

int main() {
    int choice, patientID;

    while (1) {
        printf("\n--- Hospital Patient Queue Menu ---\n");
        printf("1. Register Patient (Enqueue)\n");
        printf("2. Attend Patient (Dequeue)\n");
        printf("3. Current Patient (Front)\n");
        printf("4. Check if Queue Empty\n");
        printf("5. Number of Waiting Patients\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter patient ID: ");
                scanf("%d", &patientID);
                enqueue(patientID);
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
