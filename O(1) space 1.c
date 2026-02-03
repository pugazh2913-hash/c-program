#include <stdio.h>

int main() {
    int speeds[] = {40, 55, 60, 45};
    int n = 4;

    int maxSpeed = speeds[0]; 

    for (int i = 1; i < n; i++) {
        if (speeds[i] > maxSpeed) {
            maxSpeed = speeds[i];
        }
    }

    printf("Maximum speed = %d\n", maxSpeed);
    return 0;
}
