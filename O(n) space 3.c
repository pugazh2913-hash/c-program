#include <stdio.h>

int main() {
    int contacts[] = {98765, 91234, 99887};
    int n = 3, search = 11111;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (contacts[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Contact found\n");
    else
        printf("Contact not found\n");

    return 0;
}

