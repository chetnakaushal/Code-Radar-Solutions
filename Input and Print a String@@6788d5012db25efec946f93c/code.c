#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch[100];
    scanf("%s",&ch);
    printf("You entered: %s", ch);
    return 0;
}