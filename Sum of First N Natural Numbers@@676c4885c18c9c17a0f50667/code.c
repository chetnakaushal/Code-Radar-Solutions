#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    sum=sum+i;
    printf("%d",sum);
   }
    return 0;
}