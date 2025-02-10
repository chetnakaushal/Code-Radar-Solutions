#include <stdio.h>

int main() {
    int n; // Number of rows
scanf("%d",&n);
        for (int i = 1; i <= n; i++) {
        // Print spaces
        //for (int j = 1; j < i; j++) {
          //  printf(" ");
        //}
        // Print numbers
        for (int j = 1; j <=i; j++) {
            if ((i + j) % 2 == 0)
                printf("O ");
            else
                printf("1 ");
                }

        printf("\n");
    }

    return 0;
}
