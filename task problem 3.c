#include <stdio.h>
#include <stdlib.h>

struct Node {
    int songID;
    struct Node* next;
};
struct Node* insertEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->songID = data;

    if (head == NULL) {
        newNode->next = newNode; 
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;

    return head;
}
void displayPlaylist(struct Node* head) {
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->songID);
        temp = temp->next;
    } while (temp != head);
    printf("(back to %d)\n", head->songID);
}

int main() {
    struct Node* playlist = NULL;
    playlist = insertEnd(playlist, 101);
    playlist = insertEnd(playlist, 102);
    playlist = insertEnd(playlist, 103);

    printf("Output: ");
    displayPlaylist(playlist);

    return 0;
}