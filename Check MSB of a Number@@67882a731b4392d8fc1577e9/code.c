#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    b=a>>31;
    if(a&b)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}