#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a, b,c;
    scanf("%f", &a);
    scanf("%f", &b);
c=a*b;
    printf("Product: %.2f", c);
    return 0;
}