#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int i, j;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
printf("%c",i+'A');
        }           
        
        printf("\n");
    }
    return 0;
}