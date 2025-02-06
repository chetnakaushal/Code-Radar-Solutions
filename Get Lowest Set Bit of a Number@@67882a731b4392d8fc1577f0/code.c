#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int x,i;
    scanf("d",&x);
    while(!(x&1))
   {
    x>>=1;
    i++;
   }
   printf("%d",i);
    return 0;
}