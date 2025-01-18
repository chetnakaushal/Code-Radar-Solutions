#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch[100], dk[100];
    scanf("%s", &ch);
    scanf("%s",&dk);
    
    printf("You entered: %s and %s", ch,dk );
    return 0;
}