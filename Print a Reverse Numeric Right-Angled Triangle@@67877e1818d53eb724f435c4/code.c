#include <stdio.h>

int main() {
    int n; // Number of rows
scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        // Print spaces
       // for (int j = 1; j <= n - i; j++) {
       //     printf(" ");
       // }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
