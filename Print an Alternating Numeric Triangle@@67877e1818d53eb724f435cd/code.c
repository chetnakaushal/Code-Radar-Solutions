#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print 1s and 0s in alternating order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j % 2); // Alternates between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
