#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char functionName[50];
    struct Node *next;
};

struct Node *top = NULL;

void push(char name[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    strcpy(newNode->functionName, name);
    newNode->next = top;
    top = newNode;
    printf("Function %s called\n", name);
}

void pop() {
    if (top == NULL) {
        printf("No function to return (Call stack empty)\n");
    } else {
        struct Node *temp = top;
        printf("Function %s finished execution\n", temp->functionName);
        top = top->next;
        free(temp);
    }
}

void peek() {
    if (top == NULL) {
        printf("No function is currently executing\n");
    } else {
        printf("Current function: %s\n", top->functionName);
    }
}

void isEmpty() {
    if (top == NULL)
        printf("Program execution completed (Stack empty)\n");
    else
        printf("Program still running\n");
}

void size() {
    int count = 0;
    struct Node *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Active function calls: %d\n", count);
}

int main() {
    int choice;
    char fname[50];

    while (1) {
        printf("\n--- Call Stack Menu ---\n");
        printf("1. Call Function (Push)\n");
        printf("2. Return Function (Pop)\n");
        printf("3. Current Function (Peek)\n");
        printf("4. Check Program Status\n");
        printf("5. Active Function Count\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter function name: ");
                scanf("%s", fname);
                push(fname);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                isEmpty();
                break;

            case 5:
                size();
                break;

            case 6:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
