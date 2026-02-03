#include <stdio.h>

int main() {
    int prices[] = {100, 250, 400, 150};
    int n = 4, search = 400;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Price found\n");
    else
        printf("Price not found\n");

    return 0;
}
