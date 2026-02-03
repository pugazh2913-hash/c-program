#include <stdio.h>

int main() {
    int triggerCount = 0;  

    for (int i = 0; i < 5; i++) {
        triggerCount++;
    }

    printf("Total triggers = %d\n", triggerCount);
    return 0;
}
