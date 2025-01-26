#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
char ch;
scanf("%c",&ch);
if(ch>='A' && ch <='Z')
printf("Uppercase");
if(ch>='a' && ch<= 'z')
printf("Lowecase");
   
    return 0;
}