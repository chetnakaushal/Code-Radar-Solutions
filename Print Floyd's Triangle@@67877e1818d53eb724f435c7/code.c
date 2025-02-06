#include <stdio.h>

int main() {
    int n, c = 1;
scanf("%d",%n);
    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {

        // Inner loop to print number in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}