#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d,r,m=1,b=0;
    scanf("%d",&d);
    if(d<0)
    {
        printf("0");
    }
    if(d==0)
    {return 0;}
    while(d>0)
    {
        r=d%2;
        b+=r*m;
        d/=2;
        m*=10;
    }printf("%d",b);
    return 0;
}