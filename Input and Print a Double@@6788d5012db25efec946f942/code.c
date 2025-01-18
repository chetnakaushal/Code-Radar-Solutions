#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    scanf("ld",&a);

    printf("You entered: %ld", a);
    return 0;
}