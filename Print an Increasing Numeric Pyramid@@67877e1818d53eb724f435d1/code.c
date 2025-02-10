#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Take user input

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print first half (increasing numbers)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print second half (decreasing numbers)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // New line after each row
    }

    return 0;
}
