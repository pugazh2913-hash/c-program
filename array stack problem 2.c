#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int action) {
    if (top == MAX - 1) {
        printf("Action stack is full\n");
    } else {
        stack[++top] = action;
        printf("Action %d saved\n", action);
    }
}

void pop() {
    if (top == -1) {
        printf("No actions to undo\n");
    } else {
        printf("Undo action %d\n", stack[top--]);
    }
}

void peek() {
    if (top == -1) {
        printf("No recent action\n");
    } else {
        printf("Last action: %d\n", stack[top]);
    }
}

int isEmpty() {
    return top == -1;
}

int size() {
    return top + 1;
}

int main() {
   
    push(1);   
    push(2);    
    push(3);   

    pop();     
    peek();    

    printf("Actions available for undo: %d\n", size());

    if (isEmpty())
        printf("No undo possible\n");
    else
        printf("Undo possible\n");

    return 0;
}
