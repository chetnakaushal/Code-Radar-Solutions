#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Take user input

    for (int i = 1; i <= n; i++) {
        // Alternate starting number for each row
        int num = i % 2 == 0 ? 0 : 1;
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 1 and 0
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
