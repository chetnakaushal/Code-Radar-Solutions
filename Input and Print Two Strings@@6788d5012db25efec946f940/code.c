#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch[100], dk[100];
    scanf("%s", &ch);
    scanf("%s",&dk);
    
    printf("Your entered: %s %s", ch " and " dk );
    return 0;
}