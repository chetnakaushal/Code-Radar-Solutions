#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=2(N-i); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}