#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main()
{
    int i, j, n;

   
    scanf("%d", &n);

    /* Iterate through N rows */
   
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)            
                printf("*");            
            else
                printf(" ");            
        }
        printf("\n");
    }
    return 0;
}