#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
{
    int i, j, N;

    /* Input number of rows from user */
 
    scanf("%d", &N);

    /* Iterate through N rows */
    for(i=1; i<=N; i++)
    {
        /* Iterate over columns */
        for(j=1; j<=N; j++)
        {
            /* Print star for each column */
            printf("* ");
        }
        
        /* Move to the next line/row */
        printf("\n");
    }
    return 0;
}