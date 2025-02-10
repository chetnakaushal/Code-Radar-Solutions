#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("");
        }
        for(int k=1; k<=N-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}