#include <stdio.h>

int N;
int adj[50][50];
int visited[50];

void BFS(int start) {
    int queue[50];
    int front = 0, rear = 0;

    for (int i = 0; i < N; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < N; i++) {
            if (adj[current][i] == 1 && visited[i] == 0) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}


void DFS(int start) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < N; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    int S;

    printf("Enter number of vertices: ");
    scanf("%d", &N);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &S);

    BFS(S);

    for (int i = 0; i < N; i++)
        visited[i] = 0;

    printf("DFS Traversal: ");
    DFS(S);
    printf("\n");

    return 0;
}
