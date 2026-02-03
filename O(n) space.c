#include <stdio.h>
int main() {
    int n = 4;
    int temperatures[4] = {30, 31, 29, 32};  

    for (int i = 0; i < n; i++) {
        printf("%d ", temperatures[i]);
    }

    return 0;
}
