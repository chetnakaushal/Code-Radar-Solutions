#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,i;
    scanf("%d %d",&x, &i);
    int m=1<<i;
    x=x|m;
    printf("%d",x);
    return 0;
}