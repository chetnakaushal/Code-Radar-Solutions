#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    printf("Even");
    else
    printf("Odd");
  
    return 0;
}