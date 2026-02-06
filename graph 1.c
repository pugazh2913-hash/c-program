#include <stdio.h>

int main() {
    int N;
    int A, B;

    printf("Enter number of cities: ");
    scanf("%d", &N);

    int adj[N][N];

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter city A and city B: ");
    scanf("%d %d", &A, &B);

    if (adj[A][B] == 1) {
        printf("Connected");
    } else {
        printf("Not Connected");
    }

    return 0;
}
