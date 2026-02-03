#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int pageID) {
    if (top == MAX - 1) {
        printf("History is full!\n");
    } else {
        stack[++top] = pageID;
        printf("Page %d opened\n", pageID);
    }
}
void pop() {
    if (top == -1) {
        printf("No pages to go back!\n");
    } else {
        printf("Back pressed. Page %d removed\n", stack[top--]);
    }
}

void peek() {
    if (top == -1) {
        printf("No current page\n");
    } else {
        printf("Current page: %d\n", stack[top]);
    }
}

int isEmpty() {
    return top == -1;
}
int size() {
    return top + 1;
}

int main() {
    push(101);
    push(102);
    push(103);

    pop();     
    peek();    

    printf("Total pages in history: %d\n", size());

    if (isEmpty())
        printf("History is empty\n");
    else
        printf("History is not empty\n");

    return 0;
}
